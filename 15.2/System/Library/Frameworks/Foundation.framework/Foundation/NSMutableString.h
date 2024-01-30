@interface NSMutableString : NSString

+ (id)stringWithCapacity:(unsigned long long)a0;
+ (BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)_cfTrimWS;
- (void)_cfTrim:(struct __CFString { } *)a0;
- (void)_cfCapitalize:(const void *)a0;
- (void)_cfLowercase:(const void *)a0;
- (void)_cfUppercase:(const void *)a0;
- (void)_cfNormalize:(long long)a0;
- (void)_cfAppendCString:(const char *)a0 length:(long long)a1;
- (void)_cfPad:(struct __CFString { } *)a0 length:(unsigned int)a1 padIndex:(unsigned int)a2;
- (unsigned long long)_replaceOccurrencesOfRegularExpressionPattern:(id)a0 withTemplate:(id)a1 options:(unsigned long long)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withCharacters:(const unsigned short *)a1 length:(unsigned long long)a2;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withCString:(const char *)a1 length:(unsigned long long)a2;
- (BOOL)applyTransform:(id)a0 reverse:(BOOL)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 updatedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3;
- (unsigned long long)replaceOccurrencesOfString:(id)a0 withString:(id)a1 options:(unsigned long long)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)setString:(id)a0;
- (void)_trimWithCharacterSet:(id)a0;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)insertString:(id)a0 atIndex:(unsigned long long)a1;
- (Class)classForCoder;
- (void)appendCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
- (void)appendString:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)appendFormat:(id)a0;

@end
