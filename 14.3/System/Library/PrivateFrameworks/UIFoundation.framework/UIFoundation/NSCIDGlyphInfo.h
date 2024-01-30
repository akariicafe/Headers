@interface NSCIDGlyphInfo : NSGlyphInfo <NSSecureCoding> {
    unsigned short _cid;
    unsigned long long _collection;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)glyphInfoWithCharacterIdentifier:(unsigned long long)a0 collection:(unsigned long long)a1 baseString:(id)a2;

- (unsigned int)_glyphForFont:(id)a0 baseString:(id)a1;
- (id)initWithCharacterIdentifier:(unsigned long long)a0 collection:(unsigned long long)a1 baseString:(id)a2;
- (unsigned long long)characterIdentifier;
- (unsigned long long)characterCollection;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
