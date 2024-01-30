@class NSData, WFColor, WFIcon;

@interface WFWorkflowIcon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long backgroundColorValue;
@property (readonly, nonatomic) unsigned short glyphCharacter;
@property (readonly, copy, nonatomic) NSData *customImageData;
@property (readonly, nonatomic) WFColor *backgroundColor;
@property (readonly, nonatomic) WFIcon *icon;

+ (unsigned short)defaultGlyphCharacter;
+ (unsigned long long)randomPaletteColor;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBackgroundColorValue:(long long)a0 glyphCharacter:(unsigned short)a1 customImageData:(id)a2;
- (id)initWithPaletteColor:(unsigned long long)a0 glyphCharacter:(unsigned short)a1 customImageData:(id)a2;

@end
