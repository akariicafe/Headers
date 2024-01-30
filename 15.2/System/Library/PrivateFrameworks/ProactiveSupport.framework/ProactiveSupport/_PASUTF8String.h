@class NSData;

@interface _PASUTF8String : NSString <NSCopying, NSMutableCopying> {
    const char *_buffer;
    const char *_bufferEnd;
    NSData *_backingData;
    struct { unsigned char x0 : 6; unsigned char x1 : 1; unsigned char x2 : 1; unsigned int x3 : 24; } *_chunks;
    unsigned int _nchunks;
    unsigned int _asciiPrefixLength;
    unsigned int _length;
    BOOL _nullTerminated;
}

- (const char *)cStringUsingEncoding:(unsigned long long)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)dataUsingEncoding:(unsigned long long)a0;
- (unsigned long long)fastestEncoding;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (unsigned long long)lengthOfBytesUsingEncoding:(unsigned long long)a0;
- (unsigned long long)maximumLengthOfBytesUsingEncoding:(unsigned long long)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canBeConvertedToEncoding:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const char *)UTF8String;
- (void)dealloc;
- (id)initWithUTF8Data:(id)a0 asciiPrefixLength:(unsigned int)a1 nullTerminated:(BOOL)a2;
- (id)_pas_stringBackedByUTF8CStringOverride;

@end
