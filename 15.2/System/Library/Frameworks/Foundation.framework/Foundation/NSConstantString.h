@interface NSConstantString : NSSimpleCString

- (unsigned long long)smallestEncoding;
- (BOOL)isEqualToString:(id)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)fastestEncoding;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1;
- (unsigned long long)retainCount;
- (BOOL)canBeConvertedToEncoding:(unsigned long long)a0;
- (long long)compare:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)retain;
- (unsigned long long)cStringLength;
- (id)autorelease;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const char *)lossyCString;
- (id)copy;
- (unsigned long long)hash;
- (const char *)_fastCStringContents:(BOOL)a0;
- (void)dealloc;
- (BOOL)_tryRetain;
- (oneway void)release;
- (const char *)cString;

@end
