@class NSData;

@interface SGRe2Basic : SGRe2 {
    NSData *_patternData;
    struct RE2 { struct Mutex *x0; struct StringPiece { char *x0; int x1; } x1; struct Options { int x0; BOOL x1; BOOL x2; BOOL x3; long long x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x3; BOOL x4; struct Regexp *x5; struct Regexp *x6; struct Prog *x7; struct Prog *x8; BOOL x9; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x10; int x11; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x12; int x13; struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int> > > *x14; struct map<int, std::__1::basic_string<char>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::basic_string<char> > > > *x15; } *_pattern;
    BOOL _isTrivial;
}

- (void)enumerateMatchesInUtf8:(const char *)a0 fromString:(id)a1 ngroups:(unsigned long long)a2 block:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithRegexpData:(id)a0;
- (void)dealloc;
- (id)matchesUtf8:(const char *)a0;
- (id)description;
- (int)_enumerateMatchesInUtf8:(const char *)a0 fromString:(id)a1 ngroups:(unsigned long long)a2 block:(id /* block */)a3;
- (id)initWithRegexp:(id)a0;
- (id)existsInUtf8:(const char *)a0;
- (id)hashId;

@end
