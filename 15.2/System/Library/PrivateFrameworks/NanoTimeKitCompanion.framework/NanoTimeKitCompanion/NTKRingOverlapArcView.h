@interface NTKRingOverlapArcView : NTKColoringView

@property (readonly, nonatomic) double ringWidth;
@property (readonly, nonatomic) double overlapWidth;
@property (readonly, nonatomic) double radius;
@property (nonatomic) double fillFraction;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 radius:(double)a1 ringWidth:(double)a2 overlapWidth:(double)a3;

@end
