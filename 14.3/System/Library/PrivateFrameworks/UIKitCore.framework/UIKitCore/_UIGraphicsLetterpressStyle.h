@class UIColor;

@interface _UIGraphicsLetterpressStyle : NSObject <NSCopying>

@property (retain, nonatomic) UIColor *embossHighlightColor;
@property (retain, nonatomic) UIColor *embossShadowColor;
@property (nonatomic) double embossSize;
@property (retain, nonatomic) UIColor *innerShadowColor;
@property (nonatomic) struct CGPoint { double x; double y; } innerShadowOffset;
@property (nonatomic) double innerShadowBlur;
@property (nonatomic) int innerShadowBlendMode;
@property (retain, nonatomic) UIColor *outerShadowColor;
@property (nonatomic) struct CGPoint { double x; double y; } outerShadowOffset;
@property (nonatomic) double outerShadowBlur;
@property (nonatomic) int outerShadowBlendMode;
@property (retain, nonatomic) UIColor *topGradientColor;
@property (retain, nonatomic) UIColor *bottomGradientColor;
@property (nonatomic) double innerOpacity;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } edgeInsets;

+ (id)old2xLetterpressStyle;
+ (id)defaultLetterpressStyle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
