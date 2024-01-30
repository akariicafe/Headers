@interface _MKJunctionElement : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } leftBasePoint;
@property (nonatomic) struct CGPoint { double x; double y; } rightBasePoint;
@property (nonatomic) double angle;

- (struct CGPoint { double x0; double x1; })leftEdgePointAtDistanceFromBase:(double)a0;
- (struct CGPoint { double x0; double x1; })rightEdgePointAtDistanceFromBase:(double)a0;

@end
