@class UITouch, UIVisualEffectView, UIView, GCControllerDirectionPad;

@interface GCControllerDpadInputView : UIView {
    GCControllerDirectionPad *_dpadInput;
    UIView *_touchArea;
    UIVisualEffectView *_up;
    UIVisualEffectView *_down;
    UIVisualEffectView *_left;
    UIVisualEffectView *_right;
    UITouch *_currentTouch;
}

@property (retain) GCControllerDirectionPad *dpadInput;

- (void)encodeWithCoder:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)createDpadButton:(struct CGPoint { double x0; double x1; })a0 backingMask:(id)a1 fillMask:(id)a2;
- (void)initButtons;
- (void)processTouch:(id)a0;
- (void)setHighlight:(id)a0 highlight:(BOOL)a1;
- (void)setThumbstickPos:(struct CGPoint { double x0; double x1; })a0 center:(struct CGPoint { double x0; double x1; })a1;

@end
