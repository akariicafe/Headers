@protocol CLKMonochromeFilterProvider;

@interface NTKRingView : NTKColoringView

@property (readonly, nonatomic) double ringWidth;
@property (readonly, nonatomic) double radius;
@property (nonatomic) double fillFraction;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 radius:(double)a1 ringWidth:(double)a2;
- (void)_drawBackgroundRings;
- (void)_drawRingWithRadius:(double)a0 fillFraction:(double)a1 alpha:(double)a2;

@end
