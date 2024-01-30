@interface PKPencilTouchDetectionGestureRecognizer : UIGestureRecognizer

- (BOOL)canPreventGestureRecognizer:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)_affectedByGesture:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)updateTimestampsforTouches:(id)a0 withEvent:(id)a1;

@end
