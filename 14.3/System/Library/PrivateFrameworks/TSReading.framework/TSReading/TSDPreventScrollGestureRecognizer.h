@class TSDInteractiveCanvasController, UITouch;

@interface TSDPreventScrollGestureRecognizer : UIGestureRecognizer {
    TSDInteractiveCanvasController *mICC;
    UITouch *mTouch;
    UITouch *mSecondTouch;
}

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithInteractiveCanvasController:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
