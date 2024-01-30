@interface NSMutableString : NSString

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)stringWithCapacity:(unsigned long long)a0;

- (void)appendPrettyBOOL:(BOOL)a0 withName:(id)a1 indent:(int)a2;
- (void)appendPrettyInt:(int)a0 withName:(id)a1 indent:(int)a2;
- (void)appendPrettyObject:(id)a0 withName:(id)a1 indent:(int)a2 showFullContent:(BOOL)a3;
- (void)appendFormat:(id)a0;
- (void)setString:(id)a0;
- (void)appendString:(id)a0;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (Class)classForCoder;
- (void)insertString:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithCapacity:(unsigned long long)a0;
- (unsigned long long)replaceOccurrencesOfString:(id)a0 withString:(id)a1 options:(unsigned long long)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)appendCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
- (void)_cfAppendCString:(const char *)a0 length:(long long)a1;
- (void)_cfCapitalize:(const void *)a0;
- (void)_cfLowercase:(const void *)a0;
- (void)_cfNormalize:(long long)a0;
- (void)_cfPad:(struct __CFString { } *)a0 length:(unsigned int)a1 padIndex:(unsigned int)a2;
- (void)_cfTrim:(struct __CFString { } *)a0;
- (void)_cfTrimWS;
- (void)_cfUppercase:(const void *)a0;
- (unsigned long long)_replaceOccurrencesOfRegularExpressionPattern:(id)a0 withTemplate:(id)a1 options:(unsigned long long)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)_trimWithCharacterSet:(id)a0;
- (BOOL)applyTransform:(id)a0 reverse:(BOOL)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 updatedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withCString:(const char *)a1 length:(unsigned long long)a2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withCharacters:(const unsigned short *)a1 length:(unsigned long long)a2;

@end
