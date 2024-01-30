@class DevicePINKeypad, UIVisualEffectView;

@interface DevicePINKeypadContainerView : UIView {
    DevicePINKeypad *_keypad;
    UIVisualEffectView *_backdropView;
    double _iPadKeypadHeight;
}

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithKeypad:(id)a0;

@end
