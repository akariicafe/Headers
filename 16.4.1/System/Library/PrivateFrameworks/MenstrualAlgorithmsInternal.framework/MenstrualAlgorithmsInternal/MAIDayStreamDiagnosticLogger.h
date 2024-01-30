@interface MAIDayStreamDiagnosticLogger : MAIDiagnosticLogger

- (id)notificationName;
- (id)initWithConfig:(id)a0;
- (id)baseFileName;
- (void)finalizeDayStreamInputWithDay:(unsigned int)a0;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })jsonObjectName;
- (void)logDayStreamProcessorOutput:(struct MAIDayStreamProcessorOutput { id x0; id x1; id x2; })a0;

@end
