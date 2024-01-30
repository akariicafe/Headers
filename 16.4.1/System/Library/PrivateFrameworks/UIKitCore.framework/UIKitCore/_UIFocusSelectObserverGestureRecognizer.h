@interface _UIFocusSelectObserverGestureRecognizer : UIGestureRecognizer

- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)a0;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)shouldRequireFailureOfGestureRecognizer:(id)a0;
- (BOOL)_affectedByGesture:(id)a0;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;

@end
