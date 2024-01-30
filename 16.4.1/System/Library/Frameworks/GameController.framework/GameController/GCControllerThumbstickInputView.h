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
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)actsAsTouchpad;
- (void)initButtons;
- (void)processTouch:(id)a0;
- (void)setActsAsTouchpad:(BOOL)a0;
- (void)setThumbstickPos:(struct CGPoint { double x0; double x1; })a0 center:(struct CGPoint { double x0; double x1; })a1;

@end
