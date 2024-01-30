@class DevicePINKeypad, UIVisualEffectView;

@interface DevicePINKeypadContainerView : UIView {
    DevicePINKeypad *_keypad;
    UIVisualEffectView *_backdropView;
    double _iPadKeypadHeight;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithKeypad:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
