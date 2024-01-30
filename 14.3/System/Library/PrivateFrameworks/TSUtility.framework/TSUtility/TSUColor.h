@interface TSUColor : NSObject <NSCopying>

@property (readonly) struct CGColor { } *CGColor;

+ (id)colorWithWhite:(double)a0 alpha:(double)a1;
+ (id)redColor;
+ (id)colorWithCGColor:(struct CGColor { } *)a0;
+ (id)grayColor;
+ (id)whiteColor;
+ (id)lightGrayColor;
+ (id)blueColor;
+ (id)colorWithHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)cyanColor;
+ (id)greenColor;
+ (id)brownColor;
+ (id)clearColor;
+ (id)yellowColor;
+ (id)purpleColor;
+ (id)colorWithPatternImage:(id)a0;
+ (id)orangeColor;
+ (id)magentaColor;
+ (id)blackColor;
+ (id)randomColor;
+ (id)colorWithUIColor:(id)a0;
+ (id)colorWithRGBAComponents:(const double *)a0;
+ (id)colorWithPlatformColor:(id)a0;

- (id)colorWithAlphaComponent:(double)a0;
- (double)alphaComponent;
- (BOOL)isOpaque;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)UIColor;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (unsigned long long)hash;
- (id)initWithPatternImage:(id)a0;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (double)hueComponent;
- (double)saturationComponent;
- (double)brightnessComponent;
- (BOOL)isEqual:(id)a0;
- (id)initWithPlatformColor:(id)a0;
- (id)platformColor;
- (double)greenComponent;
- (double)luminance;
- (id)initWithUIColor:(id)a0;
- (double)redComponent;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)initWithHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3;
- (double)blueComponent;
- (double)p_rgbComponentWithIndex:(unsigned char)a0;
- (id)newBlendedColorWithFraction:(double)a0 ofColor:(id)a1;
- (BOOL)isAlmostEqualToColor:(id)a0;
- (void)getRGBAComponents:(double *)a0;
- (id)grayscaleColor;
- (id)invertedColor;
- (BOOL)isNearlyWhite;
- (id)blendedColorWithFraction:(double)a0 ofColor:(id)a1;
- (void)paintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (void)paintPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (BOOL)isGrayscaleColor;
- (id)lightenedColorByFactor:(double)a0;
- (id)darkenedColorByFactor:(double)a0;

@end
