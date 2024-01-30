@class NSUUID;

@interface TTTodo : NSObject <NSCopying>

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) BOOL done;

+ (id)todoWithIdentifier:(id)a0 done:(BOOL)a1;

- (id)serialize;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (id)initWithArchive:(const struct Todo { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x4; BOOL x5; } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)saveToArchive:(struct Todo { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x4; BOOL x5; } *)a0;
- (id)initWithIdentifier:(id)a0 done:(BOOL)a1;
- (id)todoWithDone:(BOOL)a0;

@end
