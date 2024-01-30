@interface __NSCFString : NSMutableString

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)appendFormat:(id)a0;
- (BOOL)isEqualToString:(id)a0;
- (id)retain;
- (void)setString:(id)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)appendString:(id)a0;
- (oneway void)release;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)fastestEncoding;
- (id)_newSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 zone:(struct _NSZone { } *)a1;
- (const char *)_fastCStringContents:(BOOL)a0;
- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)cStringLength;
- (Class)classForCoder;
- (BOOL)_tryRetain;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isNSString__;
- (void)insertString:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)replaceOccurrencesOfString:(id)a0 withString:(id)a1 options:(unsigned long long)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (BOOL)isEqual:(id)a0;
- (const char *)UTF8String;
- (unsigned long long)hash;
- (id)copy;
- (BOOL)_isDeallocating;
- (unsigned long long)smallestEncoding;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (BOOL)hasSuffix:(id)a0;
- (void)appendCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
- (const char *)cString;
- (const unsigned short *)_fastCharacterContents;
- (BOOL)_isCString;
- (unsigned long long)retainCount;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;
- (BOOL)getCString:(char *)a0 maxLength:(unsigned long long)a1 encoding:(unsigned long long)a2;
- (void)getLineStart:(unsigned long long *)a0 end:(unsigned long long *)a1 contentsEnd:(unsigned long long *)a2 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (BOOL)hasPrefix:(id)a0;

@end
