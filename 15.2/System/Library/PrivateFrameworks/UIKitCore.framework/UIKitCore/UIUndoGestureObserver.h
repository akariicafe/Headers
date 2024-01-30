@interface UIUndoGestureObserver : UIGestureRecognizer

- (BOOL)_analyticsIsGestureHandled;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_failOrCancelIfNecessary;
- (BOOL)_affectedByGesture:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;

@end
