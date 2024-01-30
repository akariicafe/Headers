@class NSData;

@interface SGBigUTF8String : NSString <NSCopying, NSMutableCopying, NSSecureCoding> {
    const char *_utf8;
    const char *_utf8End;
    NSData *_backingData;
    struct { unsigned char x0 : 6; unsigned char x1 : 1; unsigned char x2 : 1; unsigned int x3 : 24; } *_chunks;
    unsigned int _nchunks;
    unsigned int _length;
    BOOL _ascii;
    BOOL _nullTerminated;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned long long)fastestEncoding;
- (unsigned long long)length;
- (id)dataUsingEncoding:(unsigned long long)a0;
- (void).cxx_destruct;
- (const char *)UTF8String;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUTF8String:(const char *)a0;
- (void)dealloc;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (const char *)_fastCStringContents:(BOOL)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUTF8Data:(id)a0;

@end
