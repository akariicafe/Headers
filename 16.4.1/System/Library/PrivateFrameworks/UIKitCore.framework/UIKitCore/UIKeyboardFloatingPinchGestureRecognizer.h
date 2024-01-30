@class NSMutableSet;

@interface UIKeyboardFloatingPinchGestureRecognizer : UIPinchGestureRecognizer {
    NSMutableSet *_activeTouches;
}

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)reset;

@end
