@interface CATPattern : NSObject

+ (void)execute:(id)a0 templateDir:(id)a1 patternId:(id)a2 parameters:(id)a3 globals:(id)a4 options:(int)a5 completion:(id /* block */)a6;
+ (void)execute:(id)a0 patternId:(id)a1 parameters:(id)a2 globals:(id)a3 callback:(id)a4 options:(int)a5 completion:(id /* block */)a6;
+ (void)execute:(id)a0 patternId:(id)a1 parameters:(id)a2 globals:(id)a3 options:(int)a4 completion:(id /* block */)a5;
+ (void)execute:(id)a0 templateDir:(id)a1 patternId:(id)a2 parameters:(id)a3 globals:(id)a4 callback:(id)a5 options:(int)a6 completion:(id /* block */)a7;
+ (id)executeCAT:(id)a0 templateDir:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })a1 catId:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })a2 patternId:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })a3 requestType:(int)a4 parameters:(id)a5 globals:(id)a6 patternContext:(struct shared_ptr<siri::dialogengine::PatternContext> { struct PatternContext *x0; struct __shared_weak_count *x1; })a7 callback:(id)a8 options:(int)a9 error:(id *)a10;
+ (void)load:(id)a0 patternId:(id)a1 completion:(id /* block */)a2;
+ (void)load:(id)a0 patternId:(id)a1 options:(int)a2 completion:(id /* block */)a3;
+ (id)patternNameFromType:(unsigned long long)a0;
+ (id)segment:(id)a0 settings:(id)a1;

@end
