@interface __NSCFString : NSMutableString

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)hasPrefix:(id)a0;
- (unsigned long long)smallestEncoding;
- (BOOL)isEqualToString:(id)a0;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)getLineStart:(unsigned long long *)a0 end:(unsigned long long *)a1 contentsEnd:(unsigned long long *)a2 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (BOOL)getCString:(char *)a0 maxLength:(unsigned long long)a1 encoding:(unsigned long long)a2;
- (const unsigned short *)_fastCharacterContents;
- (unsigned long long)fastestEncoding;
- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_newSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 zone:(struct _NSZone { } *)a1;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isNSString__;
- (unsigned long long)replaceOccurrencesOfString:(id)a0 withString:(id)a1 options:(unsigned long long)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (unsigned long long)retainCount;
- (void)setString:(id)a0;
- (BOOL)_isCString;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (unsigned long long)cStringLength;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (void)insertString:(id)a0 atIndex:(unsigned long long)a1;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const char *)UTF8String;
- (void)appendCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
- (void)appendString:(id)a0;
- (id)copy;
- (unsigned long long)hash;
- (BOOL)hasSuffix:(id)a0;
- (const char *)_fastCStringContents:(BOOL)a0;
- (BOOL)_tryRetain;
- (void)appendFormat:(id)a0;
- (oneway void)release;
- (const char *)cString;

@end
