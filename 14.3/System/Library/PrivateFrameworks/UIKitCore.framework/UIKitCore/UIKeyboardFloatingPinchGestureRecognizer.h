@class NSMutableSet;

@interface UIKeyboardFloatingPinchGestureRecognizer : UIPinchGestureRecognizer {
    NSMutableSet *_activeTouches;
}

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
