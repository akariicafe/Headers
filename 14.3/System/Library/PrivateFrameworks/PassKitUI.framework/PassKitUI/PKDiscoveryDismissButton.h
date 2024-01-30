@class UIVisualEffectView;

@interface PKDiscoveryDismissButton : UIButton {
    UIVisualEffectView *_blurView;
}

@property (readonly, nonatomic) long long style;

+ (long long)_blurEffectStyleForUserInterfaceStyle:(long long)a0;
+ (id)_tintColorForUserInterfaceStyle:(long long)a0;

- (id)initWithStyle:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_updateStyleWithStyle:(long long)a0;
- (void)updateStyleWithStyle:(long long)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_tintColor;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_backingEffect;

@end
