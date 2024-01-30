@class GCControllerDirectionPad, UIVisualEffectView, UITouch;

@interface GCControllerThumbstickInputView : UIView {
    GCControllerDirectionPad *_dpadInput;
    UIVisualEffectView *_background;
    UIVisualEffectView *_touchTarget;
    UITouch *_currentTouch;
    struct CGPoint { double x; double y; } _touchStartPos;
    struct CGPoint { double x; double y; } _touchPrevPos;
    float _prevThumbstickMagnitude;
}

@property (retain) GCControllerDirectionPad *dpadInput;

- (void)encodeWithCoder:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setActsAsTouchpad:(BOOL)a0;
- (BOOL)actsAsTouchpad;
- (void)initButtons;
- (void)setThumbstickPos:(struct CGPoint { double x0; double x1; })a0 center:(struct CGPoint { double x0; double x1; })a1;
- (void)processTouch:(id)a0;

@end
