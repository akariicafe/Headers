@class NSString;

@interface TSPDigest : NSObject <NSCopying> {
    struct array<unsigned char, 20> { unsigned char __elems_[20]; } _digestData;
}

@property (readonly, nonatomic) const struct array<unsigned char, 20> { unsigned char x0[20]; } *digestData;
@property (readonly, nonatomic) NSString *digestString;

+ (id)emptyDataDigest;
+ (id)digestWithDigestString:(id)a0;
+ (id)digestFromNSData:(id)a0;
+ (id)digestFromDispatchData:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDigestString:(id)a0;
- (id)initFromNSData:(id)a0;
- (id)initFromDispatchData:(id)a0;
- (id)initFromSHA1Context:(struct CC_SHA1state_st { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7[16]; int x8; } *)a0;
- (id)initFromBytes:(const void *)a0 length:(unsigned int)a1;
- (id)initFromProtobufString:(const struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } *)a0;
- (void)saveToProtobufString:(struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } *)a0;

@end
