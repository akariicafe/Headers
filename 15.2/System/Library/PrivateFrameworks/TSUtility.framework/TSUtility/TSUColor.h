@interface TSUColor : NSObject <NSCopying>

@property (readonly) struct CGColor { } *CGColor;

+ (id)redColor;
+ (id)grayColor;
+ (id)cyanColor;
+ (id)blueColor;
+ (id)colorWithHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3;
+ (id)colorWithCGColor:(struct CGColor { } *)a0;
+ (id)greenColor;
+ (id)brownColor;
+ (id)lightGrayColor;
+ (id)magentaColor;
+ (id)purpleColor;
+ (id)clearColor;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithWhite:(double)a0 alpha:(double)a1;
+ (id)orangeColor;
+ (id)yellowColor;
+ (id)colorWithPatternImage:(id)a0;
+ (id)whiteColor;
+ (id)blackColor;
+ (id)randomColor;
+ (id)colorWithUIColor:(id)a0;
+ (id)colorWithRGBAComponents:(const double *)a0;
+ (id)colorWithPlatformColor:(id)a0;

- (double)alphaComponent;
- (id)colorWithAlphaComponent:(double)a0;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)initWithPatternImage:(id)a0;
- (id)platformColor;
- (id)initWithPlatformColor:(id)a0;
- (id)UIColor;
- (id)initWithUIColor:(id)a0;
- (BOOL)isEqual:(id)a0;
- (double)greenComponent;
- (id)initWithHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isOpaque;
- (double)luminance;
- (double)redComponent;
- (unsigned long long)hash;
- (double)blueComponent;
- (void)dealloc;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (double)hueComponent;
- (double)saturationComponent;
- (double)brightnessComponent;
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
