// theClient.cpp : main project file.

#include "stdafx.h"
#include "doClientSocket.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	IOConsole::Write(String::Concat(L"Client started: OK!\n",
		"Input Your message: "));
	String ^ message = IOConsole::Read();
	DoClientSocket ^ client = gcnew DoClientSocket(message);
	client->ExCommute();
    return 0;
}
