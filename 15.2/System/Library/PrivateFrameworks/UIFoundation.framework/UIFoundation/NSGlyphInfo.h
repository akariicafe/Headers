@class NSString;

@interface NSGlyphInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString *_baseString;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)glyphInfoWithGlyph:(unsigned int)a0 forFont:(id)a1 baseString:(id)a2;
+ (id)glyphInfoWithCharacterIdentifier:(unsigned long long)a0 collection:(unsigned long long)a1 baseString:(id)a2;
+ (id)glyphInfoWithGlyphName:(id)a0 forFont:(id)a1 baseString:(id)a2;
+ (id)glyphInfoWithCGGlyph:(unsigned short)a0 forFont:(id)a1 baseString:(id)a2;

- (id)_baseString;
- (unsigned long long)characterIdentifier;
- (unsigned long long)characterCollection;
- (void)encodeWithCoder:(id)a0;
- (unsigned short)glyphID;
- (unsigned int)_glyphForFont:(id)a0 baseString:(id)a1;
- (id)initWithBaseString:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)glyphName;
- (id)baseString;
- (void)dealloc;
- (Class)classForKeyedArchiver;

@end
