@class TSUColor;

@interface TSDColorFill : TSDFill <TSDMixing, NSCopying, NSMutableCopying>

@property (readonly, nonatomic) struct CGColor { } *CGColor;
@property (readonly, copy, nonatomic) TSUColor *color;
@property (readonly, nonatomic) double opacity;
@property (readonly, nonatomic) double hue;
@property (readonly, nonatomic) double saturation;
@property (readonly, nonatomic) double brightness;
@property (readonly, nonatomic) double luminance;

+ (id)redColor;
+ (id)grayColor;
+ (id)cyanColor;
+ (id)blueColor;
+ (id)colorWithCGColor:(struct CGColor { } *)a0;
+ (id)greenColor;
+ (id)brownColor;
+ (id)magentaColor;
+ (id)purpleColor;
+ (id)clearColor;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithWhite:(double)a0 alpha:(double)a1;
+ (id)orangeColor;
+ (id)yellowColor;
+ (id)whiteColor;
+ (id)blackColor;
+ (id)randomColor;
+ (id)colorWithUIColor:(id)a0;
+ (id)colorWithColor:(id)a0;
+ (id)keyPathsForValuesAffectingCGColor;
+ (id)keyPathsForValuesAffectingOpacity;
+ (id)keyPathsForValuesAffectingLuminance;
+ (id)keyPathsForValuesAffectingHue;
+ (id)keyPathsForValuesAffectingSaturation;
+ (id)keyPathsForValuesAffectingBrightness;

- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (BOOL)isClear;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)UIColor;
- (int)fillType;
- (id)initWithUIColor:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)referenceColor;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isOpaque;
- (id)initWithColor:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (id)grayscaleColor;
- (id)invertedColor;
- (BOOL)isNearlyWhite;
- (void)paintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (void)paintPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (SEL)mapThemeAssetSelector;
- (long long)mixingTypeWithObject:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (BOOL)drawsInOneStep;
- (void)applyToCALayer:(id)a0 withScale:(double)a1;
- (BOOL)canApplyToCALayer;
- (double)p_hsbComponentWithIndex:(unsigned long long)a0;
- (BOOL)canApplyToCAShapeLayer;
- (void)applyToCAShapeLayer:(id)a0 withScale:(double)a1;

@end
