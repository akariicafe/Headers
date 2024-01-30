@interface _UIMotionEffectAttitudeEvent : _UIMotionEffectEvent

@property (readonly, nonatomic) struct { double x; double y; double z; double w; } attitude;

- (double)velocityRelativeToPreviousEvent:(id)a0;
- (id)copyWithTimestamp:(double)a0;
- (id)initWithTimestamp:(double)a0 attitude:(struct { double x0; double x1; double x2; double x3; })a1;

@end
