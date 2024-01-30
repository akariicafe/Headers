@interface NSConstantString : NSSimpleCString

- (BOOL)isEqualToString:(id)a0;
- (id)retain;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (oneway void)release;
- (unsigned long long)fastestEncoding;
- (const char *)_fastCStringContents:(BOOL)a0;
- (unsigned long long)cStringLength;
- (BOOL)_tryRetain;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (const char *)lossyCString;
- (unsigned long long)hash;
- (id)copy;
- (BOOL)_isDeallocating;
- (unsigned long long)smallestEncoding;
- (id)autorelease;
- (const char *)cString;
- (unsigned long long)retainCount;
- (BOOL)canBeConvertedToEncoding:(unsigned long long)a0;
- (long long)compare:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1;

@end
