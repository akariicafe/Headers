@interface _CACGesturePathPoint : NSObject

@property (nonatomic, getter=isSentinelPoint) BOOL sentinelPoint;
@property (nonatomic) struct CGPoint { double x; double y; } point;
@property (nonatomic) double force;
@property (nonatomic) double relativeTime;
@property (nonatomic) double absoluteTime;
@property (nonatomic) double decay;
@property (nonatomic) double length;

- (id)description;

@end
