@class UIButton, NSString, UIBezierPath, UIVisualEffectView, GCControllerButtonInput;

@interface GCControllerButtonInputView : UIView {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _innerFrame;
    UIVisualEffectView *_background;
    UIVisualEffectView *_saturationVibrancyEffectView;
    UIVisualEffectView *_additivevibrancyEffectView;
    UIButton *_button;
    NSString *_systemImageName;
    NSString *_text;
}

@property (retain) GCControllerButtonInput *buttonInput;
@property (retain, nonatomic) UIBezierPath *customImage;

- (id)initWithText:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setupActions;
- (id)initWithCoder:(id)a0;
- (id)initWithSystemImageName:(id)a0;
- (void)setText;
- (void)initUI;
- (void)setSystemImage;
- (void)triggerButtonWithValue:(float)a0;

@end
