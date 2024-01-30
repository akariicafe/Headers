@protocol HUColorWheelSpace;

@interface HUColorWheelView : UIView

@property (nonatomic) double wheelHoleRadius;
@property (retain, nonatomic) id<HUColorWheelSpace> colorWheelSpace;

+ (double)_colorWheelRenderingScale;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)wheelBezierPath;
- (double)_outerRadius;
- (struct { double x0; double x1; })colorWheelCoordinateForPoint:(struct CGPoint { double x0; double x1; })a0 boundedToWheel:(BOOL)a1;
- (id)initWithColorWheelSpace:(id)a0;
- (struct CGPoint { double x0; double x1; })pointForColorWheelCoordinate:(struct { double x0; double x1; })a0;

@end
