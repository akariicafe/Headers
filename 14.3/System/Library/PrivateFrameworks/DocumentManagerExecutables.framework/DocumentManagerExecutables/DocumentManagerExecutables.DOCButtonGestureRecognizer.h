@interface DocumentManagerExecutables.DOCButtonGestureRecognizer : UIGestureRecognizer {
    void /* unknown type, empty encoding */ numberOfTouchesRequired;
    void /* unknown type, empty encoding */ activeTouches;
    void /* unknown type, empty encoding */ startLocationInWindow;
}

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
