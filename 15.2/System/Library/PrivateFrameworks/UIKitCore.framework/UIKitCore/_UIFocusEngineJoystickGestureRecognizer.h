@interface _UIFocusEngineJoystickGestureRecognizer : UIGestureRecognizer

@property (readonly, nonatomic) struct CGPoint { double x; double y; } stickPosition;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } previousStickPosition;

- (BOOL)_shouldReceivePress:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)_calculateStickPositionFromPresses:(id)a0 withEvent:(id)a1;

@end
