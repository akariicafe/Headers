@class UIButton, NSString, UIBezierPath, UIVisualEffectView, GCControllerButtonInput;

@interface GCControllerButtonInputView : UIView {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _innerFrame;
    UIVisualEffectView *_background;
    UIVisualEffectView *_saturationVibrancyEffectView;
    UIVisualEffectView *_additiveVibrancyEffectView;
    UIButton *_button;
    NSString *_text;
}

@property (retain) GCControllerButtonInput *buttonInput;
@property (retain, nonatomic) UIBezierPath *customImage;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setupActions;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithText:(id)a0;
- (void).cxx_destruct;
- (void)setText;
- (void)initUI;
- (void)triggerButtonWithValue:(float)a0;

@end
