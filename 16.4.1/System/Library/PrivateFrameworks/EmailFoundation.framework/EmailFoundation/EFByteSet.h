@interface EFByteSet : NSObject <NSCopying, NSMutableCopying> {
    struct bitset<256UL> { unsigned long long __first_[4]; } _bitString;
}

+ (id)asciiWhitespaceSet;

- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCString:(const char *)a0;
- (id)init;
- (id)description;
- (BOOL)byteIsMember:(unsigned char)a0;

@end
