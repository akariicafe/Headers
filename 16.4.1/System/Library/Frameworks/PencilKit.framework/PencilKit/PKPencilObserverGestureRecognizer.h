@class UITouch;

@interface PKPencilObserverGestureRecognizer : UIGestureRecognizer {
    UITouch *_drawingTouch;
    BOOL _delegateRespondsToDidBegin;
    BOOL _delegateRespondsToDidMove;
    BOOL _delegateRespondsToDidEnd;
}

- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setDelegate:(id)a0;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)shouldRequireFailureOfGestureRecognizer:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
