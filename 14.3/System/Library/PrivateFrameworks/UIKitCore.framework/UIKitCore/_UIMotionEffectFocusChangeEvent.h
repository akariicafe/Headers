@interface _UIMotionEffectFocusChangeEvent : _UIMotionEffectEvent

@property (readonly, nonatomic) struct CGPoint { double x; double y; } focusPosition;

- (id)copyWithTimestamp:(double)a0;
- (double)velocityRelativeToPreviousEvent:(id)a0;
- (id)initWithTimestamp:(double)a0 focusPosition:(struct CGPoint { double x0; double x1; })a1;

@end
