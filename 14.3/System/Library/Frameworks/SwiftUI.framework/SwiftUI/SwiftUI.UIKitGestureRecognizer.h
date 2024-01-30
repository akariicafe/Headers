@interface SwiftUI.UIKitGestureRecognizer : UIGestureRecognizer <_UIHoverEventRespondable, _UITransformEventRespondable> {
    void /* unknown type, empty encoding */ eventBridge;
    void /* unknown type, empty encoding */ hoverSeed;
    void /* unknown type, empty encoding */ transformSeed;
    void /* unknown type, empty encoding */ initialScale;
    void /* unknown type, empty encoding */ initialAngle;
}

- (void)_hoverEntered:(id)a0 withEvent:(id)a1;
- (void)_hoverExited:(id)a0 withEvent:(id)a1;
- (void)_hoverMoved:(id)a0 withEvent:(id)a1;
- (void)_hoverCancelled:(id)a0 withEvent:(id)a1;
- (void)_transformChangedWithEvent:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (id)init;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
