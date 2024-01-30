@interface _UIKBUndoGestureObserver : UIGestureRecognizer

+ (id)undoGestureObserverWithTarget:(id)a0 action:(SEL)a1 delegate:(id)a2;

- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (void)_failOrCancelIfNecessary;
- (BOOL)_analyticsIsGestureHandled;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)_affectedByGesture:(id)a0;

@end
