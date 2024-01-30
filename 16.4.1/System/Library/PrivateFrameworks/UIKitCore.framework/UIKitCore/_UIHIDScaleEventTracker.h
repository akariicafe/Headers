@interface _UIHIDScaleEventTracker : NSObject

@property (readonly, nonatomic) double scaleZ;
@property (readonly, nonatomic) unsigned long long compositePhase;

- (void)reset;
- (void)_setCompositePhase:(unsigned long long)a0 withEvent:(struct __IOHIDEvent { } *)a1;
- (void)updateWithHIDEvent:(struct __IOHIDEvent { } *)a0;

@end
