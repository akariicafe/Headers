@interface EFByteSet : NSObject <NSCopying, NSMutableCopying> {
    unsigned char _bitString[32];
}

+ (id)asciiWhitespaceSet;

- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithCString:(const char *)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)byteIsMember:(unsigned char)a0;

@end
