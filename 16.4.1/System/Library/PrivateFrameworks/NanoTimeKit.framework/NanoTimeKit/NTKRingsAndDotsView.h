@class UIColor, NSArray, NSString, NSMutableArray;

@interface NTKRingsAndDotsView : UIView <CLKUIColoringView>

@property (nonatomic) double diameter;
@property (nonatomic) double ringWidth;
@property (nonatomic) double ringGapWidth;
@property (nonatomic) double appearanceAnimationProgress;
@property (retain, nonatomic) NSArray *ringViews;
@property (copy, nonatomic) NSArray *ringColors;
@property (copy, nonatomic) NSMutableArray *ringsFillFractions;
@property (nonatomic) BOOL hidesOverlapShadow;
@property (nonatomic) BOOL shouldUseMonochromeAccentColor;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (retain, nonatomic) UIColor *secondaryForegroundColor;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) BOOL usesLegibility;
@property (retain, nonatomic) UIColor *overrideColor;
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emptyFillFractions;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setColor:(id)a0;
- (void).cxx_destruct;
- (void)_setDiameter:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 diameter:(double)a1 ringWidth:(double)a2 ringGapWidth:(double)a3 overlapStrokeWidth:(double)a4;
- (double)radiusForRingAtIndex:(long long)a0;
- (void)setFilterProvider:(id)a0;
- (void)setUsesLegibility:(BOOL)a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (BOOL)usesLegibility;

@end
