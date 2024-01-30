@interface NSSimpleCString : NSString {
    char *bytes;
    int numBytes;
    int _unused;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)hasPrefix:(id)a0;
- (BOOL)isEqualToString:(id)a0;
- (unsigned long long)cStringLength;
- (unsigned long long)fastestEncoding;
- (unsigned long long)length;
- (id)stringByAppendingString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)hasSuffix:(id)a0;
- (BOOL)canBeConvertedToEncoding:(unsigned long long)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)hash;
- (unsigned long long)smallestEncoding;
- (id)initWithCStringNoCopy:(char *)a0 length:(unsigned long long)a1;
- (long long)compare:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)isEqual:(id)a0;
- (id)_newSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 zone:(struct _NSZone { } *)a1;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (const char *)_fastCStringContents:(BOOL)a0;
- (BOOL)getBytes:(void *)a0 maxLength:(unsigned long long)a1 usedLength:(unsigned long long *)a2 encoding:(unsigned long long)a3 options:(unsigned long long)a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 remainingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a6;

@end
