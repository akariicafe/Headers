@class UIColor, NSString, WFGradient, NSColor;

@interface WFColor : NSObject <NSSecureCoding, NSCopying> {
    UIColor *_platformColor;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int RGBAValue;
@property (readonly, nonatomic) NSString *hexValue;
@property (readonly, nonatomic) WFGradient *paletteGradient;
@property (readonly, nonatomic) struct CGColor { } *CGColor;
@property (readonly, nonatomic) UIColor *platformColor;
@property (readonly, nonatomic) UIColor *UIColor;
@property (readonly, nonatomic) NSColor *NSColor;

+ (id)colorWithWhite:(double)a0 alpha:(double)a1;
+ (id)colorWithCGColor:(struct CGColor { } *)a0;
+ (id)whiteColor;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithRGBAValue:(unsigned int)a0;
+ (id)colorWithP3RGBAValue:(unsigned int)a0;
+ (id)colorWithDisplayP3Red:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)clearColor;
+ (id)workflowGradientPalette;
+ (id)workflowPalette;
+ (id)workflowPaletteNames;
+ (id)colorWithPaletteColor:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithPlatformColor:(id)a0;
- (id)initWithDisplayP3Red:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (void)encodeWithCoder:(id)a0;

@end
