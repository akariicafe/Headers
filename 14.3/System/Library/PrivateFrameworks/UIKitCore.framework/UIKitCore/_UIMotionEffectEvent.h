@interface _UIMotionEffectEvent : NSObject

@property (readonly, nonatomic) double timestamp;

- (id)copyWithTimestamp:(double)a0;
- (id)initWithTimestamp:(double)a0;
- (double)velocityRelativeToPreviousEvent:(id)a0;

@end
