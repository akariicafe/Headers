@interface NSCTGlyphInfo : NSGlyphInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned int)_glyph;
- (unsigned long long)_cfTypeID;
- (unsigned int)_glyphForFont:(id)a0 baseString:(id)a1;
- (id)_baseString;
- (oneway void)release;
- (unsigned long long)characterIdentifier;
- (unsigned long long)characterCollection;
- (id)glyphName;
- (unsigned long long)retainCount;
- (unsigned long long)hash;
- (BOOL)allowsWeakReference;
- (id)retain;
- (BOOL)isEqual:(id)a0;
- (BOOL)retainWeakReference;
- (void)encodeWithCoder:(id)a0;

@end
