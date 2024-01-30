@class UIButton, UIVisualEffectView;

@interface CPSVibrantButton : UIView {
    UIVisualEffectView *_effectView;
    UIButton *_button;
}

@property (readonly, nonatomic) UIButton *uiButton;

- (void)updateCornerRadius;
- (void).cxx_destruct;
- (id)initWithButtonType:(long long)a0;

@end
