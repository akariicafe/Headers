@class NSDictionary, NSAttributedString;

@interface __NSCFLocalizedAttributedString : NSString <NSSecureCoding> {
    NSAttributedString *_original;
    NSDictionary *_formatConfiguration;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (const struct __CFString { } *)createStringRequiringInflectionWithFormat:(struct __CFString { } *)a0 formatOptions:(struct __CFDictionary { } *)a1 arguments:(char *)a2;
+ (const struct __CFString { } *)copyStringWithMarkup:(struct __CFString { } *)a0 formatConfiguration:(struct __CFDictionary { } *)a1;
+ (id)whitelistedStringWithAttributedString:(id)a0;

- (BOOL)isEqualToString:(id)a0;
- (unsigned long long)fastestEncoding;
- (unsigned long long)length;
- (id)initWithAttributedStringMarkup:(id)a0 formatConfiguration:(id)a1;
- (id)substringFromIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)substringToIndex:(unsigned long long)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithCoder:(id)a0;
- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (const unsigned short *)_fastCharacterContents;
- (id)__baseAttributedString;
- (id)_initWithAttributedString:(id)a0;
- (long long)compare:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 locale:(id)a3;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (const char *)_fastCStringContents:(BOOL)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;

@end
