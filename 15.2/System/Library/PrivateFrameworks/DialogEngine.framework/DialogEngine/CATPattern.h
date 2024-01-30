@interface CATPattern : NSObject

+ (void)execute:(id)a0 templateDir:(id)a1 patternId:(id)a2 parameters:(id)a3 globals:(id)a4 options:(int)a5 completion:(id /* block */)a6;
+ (id)executeCAT:(id)a0 templateDir:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })a1 catId:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })a2 requestType:(int)a3 parameters:(id)a4 globals:(id)a5 options:(int)a6 error:(id *)a7;
+ (void)load:(id)a0 patternId:(id)a1 options:(int)a2 completion:(id /* block */)a3;
+ (void)load:(id)a0 patternId:(id)a1 completion:(id /* block */)a2;
+ (void)execute:(id)a0 patternId:(id)a1 parameters:(id)a2 globals:(id)a3 options:(int)a4 completion:(id /* block */)a5;

@end
