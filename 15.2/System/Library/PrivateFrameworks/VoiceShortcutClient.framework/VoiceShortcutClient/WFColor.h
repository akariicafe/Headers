@class UIColor, NSString, NSBundle, WFGradient, NSColor;

@interface WFColor : NSObject <NSSecureCoding, NSCopying> {
    struct CGColor { } *_CGColor;
    UIColor *_platformColor;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int RGBAValue;
@property (readonly, nonatomic) NSString *hexValue;
@property (readonly, nonatomic) WFGradient *paletteGradient;
@property (readonly, nonatomic) NSString *colorName;
@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) unsigned long long representationType;
@property (readonly, nonatomic) struct CGColor { } *CGColor;
@property (readonly, nonatomic) UIColor *platformColor;
@property (readonly, nonatomic) UIColor *UIColor;
@property (readonly, nonatomic) NSColor *NSColor;
@property (readonly, nonatomic) unsigned long long systemColor;

+ (id)workflowPalette;
+ (id)workflowPaletteNames;
+ (id)colorWithPaletteColor:(unsigned long long)a0;
+ (id)workflowGradientPalette;
+ (id)colorWithCGColor:(struct CGColor { } *)a0;
+ (id)colorWithSystemColor:(unsigned long long)a0;
+ (id)colorNamed:(id)a0 inBundle:(id)a1;
+ (id)colorWithDisplayP3Red:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)clearColor;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithWhite:(double)a0 alpha:(double)a1;
+ (id)whiteColor;
+ (id)colorWithRGBAValue:(unsigned int)a0;
+ (id)colorWithP3RGBAValue:(unsigned int)a0;
+ (id)blackColor;

- (id)serializedRepresentation;
- (id)colorWithAlphaComponent:(double)a0;
- (id)initWithSerializedRepresentation:(id)a0;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPlatformColor:(id)a0;
- (id)initWithSystemColor:(unsigned long long)a0;
- (id)initWithColorName:(id)a0 inBundle:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithDisplayP3Red:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)initWithCoder:(id)a0;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (BOOL)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;

@end
