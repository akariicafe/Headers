@class UIPress;

@interface _UIFocusLinearMovementDebugGestureRecognizer : UIGestureRecognizer {
    UIPress *_press;
}

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;

@end
