@interface _UIPointerInteractionPressGestureRecognizer : UILongPressGestureRecognizer

- (BOOL)_shouldReceiveTouch:(id)a0 withEvent:(id)a1;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (BOOL)_affectedByGesture:(id)a0;

@end
