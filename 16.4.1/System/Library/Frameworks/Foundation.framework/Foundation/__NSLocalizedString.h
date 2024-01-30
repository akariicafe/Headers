@class NSDictionary, NSMutableString;

@interface __NSLocalizedString : NSMutableString <NSSecureCoding> {
    NSMutableString *original;
    NSDictionary *config;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)appendFormat:(id)a0;
- (BOOL)isEqualToString:(id)a0;
- (void)setString:(id)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)_allowsDirectEncoding;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)substringFromIndex:(unsigned long long)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithString:(id)a0 withFormatConfiguration:(id)a1;
- (void)appendString:(id)a0;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)fastestEncoding;
- (long long)compare:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 locale:(id)a3;
- (const char *)_fastCStringContents:(BOOL)a0;
- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithCoder:(id)a0;
- (Class)classForCoder;
- (id)formatConfiguration;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)insertString:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)replaceOccurrencesOfString:(id)a0 withString:(id)a1 options:(unsigned long long)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)dealloc;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (id)substringToIndex:(unsigned long long)a0;
- (void)appendCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
- (const unsigned short *)_fastCharacterContents;
- (id)baseString;

@end
