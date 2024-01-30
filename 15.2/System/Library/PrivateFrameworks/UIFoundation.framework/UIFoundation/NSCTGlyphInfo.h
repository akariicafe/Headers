@interface NSCTGlyphInfo : NSGlyphInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned int)_glyph;
- (id)_baseString;
- (unsigned long long)characterIdentifier;
- (unsigned long long)characterCollection;
- (BOOL)allowsWeakReference;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)retainCount;
- (unsigned int)_glyphForFont:(id)a0 baseString:(id)a1;
- (BOOL)retainWeakReference;
- (id)retain;
- (unsigned long long)_cfTypeID;
- (BOOL)isEqual:(id)a0;
- (id)glyphName;
- (unsigned long long)hash;
- (oneway void)release;

@end
