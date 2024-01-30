@class UIVisualEffectView, HUIconView;
@protocol HFIconDescriptor;

@interface HUIconButton : UIControl

@property (retain, nonatomic) HUIconView *iconView;
@property (retain, nonatomic) UIVisualEffectView *backgroundEffectView;
@property (readonly, nonatomic) id<HFIconDescriptor> iconDescriptor;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setIconSize:(unsigned long long)a0;
- (id)vibrancyEffect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)contentMode;
- (void)setContentMode:(long long)a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)updateWithIconDescriptor:(id)a0 displayStyle:(unsigned long long)a1 animated:(BOOL)a2;
- (void)setVibrancyEffect:(id)a0 animated:(BOOL)a1;
- (void)updateWithIconDescriptor:(id)a0 animated:(BOOL)a1;
- (void)setIconTintColor:(id)a0;
- (void)setBackgroundVisualEffect:(id)a0 animated:(BOOL)a1;
- (void)setBackgroundVisualEffectViewCornerRaduis:(double)a0;

@end
