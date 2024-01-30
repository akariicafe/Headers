@class UIColor;

@interface _UISystemBackgroundStrokeView : UIView

@property (nonatomic) double strokeWidth;
@property (nonatomic) double strokeCornerRadius;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) BOOL useContinuousCurve;

- (void).cxx_destruct;
- (void)updateLayerOrRedraw;
- (BOOL)drawsStrokeManually;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
