@class TSUColor, UIColor;

@interface TSDColorFill : TSDFill <TSDMixing, NSCopying, NSMutableCopying>

@property (class, readonly, nonatomic) TSDColorFill *randomColor;
@property (class, readonly, nonatomic) TSDColorFill *clearColor;
@property (class, readonly, nonatomic) TSDColorFill *blackColor;
@property (class, readonly, nonatomic) TSDColorFill *whiteColor;
@property (class, readonly, nonatomic) TSDColorFill *grayColor;
@property (class, readonly, nonatomic) TSDColorFill *redColor;
@property (class, readonly, nonatomic) TSDColorFill *greenColor;
@property (class, readonly, nonatomic) TSDColorFill *blueColor;
@property (class, readonly, nonatomic) TSDColorFill *cyanColor;
@property (class, readonly, nonatomic) TSDColorFill *yellowColor;
@property (class, readonly, nonatomic) TSDColorFill *magentaColor;
@property (class, readonly, nonatomic) TSDColorFill *orangeColor;
@property (class, readonly, nonatomic) TSDColorFill *purpleColor;
@property (class, readonly, nonatomic) TSDColorFill *brownColor;

@property (readonly, nonatomic) struct CGColor { } *CGColor;
@property (readonly, copy, nonatomic) TSUColor *color;
@property (readonly, nonatomic) double opacity;
@property (readonly, nonatomic) double hue;
@property (readonly, nonatomic) double saturation;
@property (readonly, nonatomic) double brightness;
@property (readonly, nonatomic) double luminance;
@property (readonly, nonatomic) UIColor *UIColor;
@property (readonly, nonatomic) BOOL isOpaque;

+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithCGColor:(struct CGColor { } *)a0;
+ (id)colorWithWhite:(double)a0 alpha:(double)a1;
+ (id)colorWithUIColor:(id)a0;
+ (id)colorWithColor:(id)a0;
+ (id)keyPathsForValuesAffectingBrightness;
+ (id)keyPathsForValuesAffectingCGColor;
+ (id)keyPathsForValuesAffectingHue;
+ (id)keyPathsForValuesAffectingLuminance;
+ (id)keyPathsForValuesAffectingOpacity;
+ (id)keyPathsForValuesAffectingSaturation;
+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;

- (id)initWithCGColor:(struct CGColor { } *)a0;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithColor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (void).cxx_destruct;
- (id)initWithUIColor:(id)a0;
- (id)referenceColor;
- (long long)fillType;
- (BOOL)isClear;
- (id)grayscaleColor;
- (id)invertedColor;
- (BOOL)isNearlyWhite;
- (void)paintPath:(const struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (void)paintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (BOOL)drawsInOneStep;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (double)p_hsbComponentWithIndex:(unsigned long long)a0;
- (id)presetKind;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (BOOL)requiresOutlineOnBackgroundWithAppearance:(unsigned long long)a0;
- (void)i_setColor:(id)a0;

@end
