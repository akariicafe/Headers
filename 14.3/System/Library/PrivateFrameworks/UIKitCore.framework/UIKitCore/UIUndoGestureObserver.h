@interface UIUndoGestureObserver : UIGestureRecognizer

- (BOOL)_affectedByGesture:(id)a0;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)_failOrCancelIfNecessary;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)_analyticsIsGestureHandled;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
