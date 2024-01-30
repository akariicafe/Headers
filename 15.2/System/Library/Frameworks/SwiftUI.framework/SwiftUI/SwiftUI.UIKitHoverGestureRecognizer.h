@interface SwiftUI.UIKitHoverGestureRecognizer : UIHoverGestureRecognizer {
    void /* unknown type, empty encoding */ eventBridge;
}

- (void)_hoverEntered:(id)a0 withEvent:(id)a1;
- (void)_hoverCancelled:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)_hoverMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)_hoverExited:(id)a0 withEvent:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)reset;

@end
