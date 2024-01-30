@interface __NSCFString : NSMutableString

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)hasPrefix:(id)a0;
- (BOOL)isNSString__;
- (BOOL)isEqualToString:(id)a0;
- (unsigned long long)cStringLength;
- (unsigned long long)fastestEncoding;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;
- (void)getLineStart:(unsigned long long *)a0 end:(unsigned long long *)a1 contentsEnd:(unsigned long long *)a2 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (BOOL)getCString:(char *)a0 maxLength:(unsigned long long)a1 encoding:(unsigned long long)a2;
- (void)setString:(id)a0;
- (unsigned long long)length;
- (const char *)cString;
- (unsigned long long)replaceOccurrencesOfString:(id)a0 withString:(id)a1 options:(unsigned long long)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)appendCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
- (const char *)UTF8String;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (void)appendFormat:(id)a0;
- (BOOL)_isDeallocating;
- (void)insertString:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)_tryRetain;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (unsigned long long)retainCount;
- (BOOL)hasSuffix:(id)a0;
- (id)copy;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)hash;
- (unsigned long long)smallestEncoding;
- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)appendString:(id)a0;
- (const unsigned short *)_fastCharacterContents;
- (id)retain;
- (BOOL)isEqual:(id)a0;
- (id)_newSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 zone:(struct _NSZone { } *)a1;
- (BOOL)_isCString;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (const char *)_fastCStringContents:(BOOL)a0;
- (Class)classForCoder;

@end
