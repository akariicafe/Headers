@interface SPCCurvePoint : NSObject

@property double x;
@property double y;
@property struct CGPoint { double x; double y; } leftTangentPoint;
@property struct CGPoint { double x; double y; } rightTangentPoint;
@property double roundness;
@property double smoothness;
@property struct CGPoint { double x0; double x1; } CGPoint;

+ (id)pointWithCGPoint:(struct CGPoint { double x0; double x1; })a0;
+ (id)pointWithX:(double)a0 y:(double)a1;

- (id)initWithX:(double)a0 y:(double)a1;

@end
