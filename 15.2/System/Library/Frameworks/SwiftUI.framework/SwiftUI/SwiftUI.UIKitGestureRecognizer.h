@interface SwiftUI.UIKitGestureRecognizer : UIGestureRecognizer <_UITransformEventRespondable> {
    void /* unknown type, empty encoding */ eventBridge;
    void /* unknown type, empty encoding */ initialScale;
    void /* unknown type, empty encoding */ initialAngle;
}

- (void)_transformChangedWithEvent:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;

@end
