@class NSString;

@interface TTFont : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id nativeFont;
@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) double pointSize;
@property (readonly, nonatomic) unsigned int fontHints;

- (id)serialize;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithArchive:(const struct Font { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x4; float x5; unsigned int x6; } *)a0;
- (unsigned long long)hash;
- (id)initWithName:(id)a0 size:(double)a1 hints:(unsigned int)a2;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)saveToArchive:(struct Font { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x4; float x5; unsigned int x6; } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
