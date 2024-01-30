@interface _UIMotionEffectEvent : NSObject

@property (readonly, nonatomic) double timestamp;

- (double)velocityRelativeToPreviousEvent:(id)a0;
- (id)copyWithTimestamp:(double)a0;
- (id)initWithTimestamp:(double)a0;

@end
