@class NSString, WFGradient, NSBundle, UIColor, NSColor;

@interface WFColor : NSObject <NSSecureCoding, NSCopying> {
    struct CGColor { } *_CGColor;
    UIColor *_platformColor;
}

@property (class, readonly, nonatomic) WFColor *whiteColor;
@property (class, readonly, nonatomic) WFColor *blackColor;
@property (class, readonly, nonatomic) WFColor *clearColor;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int RGBAValue;
@property (readonly, nonatomic) NSString *hexValue;
@property (readonly, nonatomic) WFGradient *paletteGradient;
@property (readonly, nonatomic) BOOL hasPaletteGradient;
@property (readonly, nonatomic) WFGradient *gradient;
@property (readonly, nonatomic) NSString *colorName;
@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) unsigned long long representationType;
@property (readonly, nonatomic) struct CGColor { } *CGColor;
@property (readonly, nonatomic) UIColor *platformColor;
@property (readonly, nonatomic) UIColor *UIColor;
@property (readonly, nonatomic) NSColor *NSColor;
@property (readonly, nonatomic) unsigned long long systemColor;
@property (readonly, nonatomic) double red;
@property (readonly, nonatomic) double green;
@property (readonly, nonatomic) double blue;
@property (readonly, nonatomic) double alpha;

+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithCGColor:(struct CGColor { } *)a0;
+ (id)colorWithWhite:(double)a0 alpha:(double)a1;
+ (id)colorWithDisplayP3Red:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)workflowPalette;
+ (id)colorNamed:(id)a0 inBundle:(id)a1;
+ (id)colorWithFocusColorName:(id)a0;
+ (id)colorWithP3RGBAValue:(unsigned int)a0;
+ (id)colorWithPaletteColor:(unsigned long long)a0;
+ (id)colorWithRGBAValue:(unsigned int)a0;
+ (id)colorWithSystemColor:(unsigned long long)a0;
+ (id)workflowGradientPalette;
+ (id)workflowPaletteNames;

- (id)initWithCGColor:(struct CGColor { } *)a0;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (BOOL)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (id)initWithSystemColor:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)colorWithAlphaComponent:(double)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSerializedRepresentation:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializedRepresentation;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDisplayP3Red:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (BOOL)isCloseToColor:(id)a0;
- (void)getHue:(double *)a0 saturation:(double *)a1 value:(double *)a2 alpha:(double *)a3;
- (id)initWithColorName:(id)a0 inBundle:(id)a1;
- (id)initWithPlatformColor:(id)a0;
- (id)paletteGradientFallingBackToDefaultGradient:(BOOL)a0;

@end
