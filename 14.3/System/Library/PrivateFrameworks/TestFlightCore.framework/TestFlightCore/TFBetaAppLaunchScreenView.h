@class UIView, TFAppLockupView, TFBetaAppLaunchScreenViewSpecification, UIButton, TFDeviceInstructionView, UIVisualEffectView, UILabel, UIScrollView;

@interface TFBetaAppLaunchScreenView : UIView

@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) UILabel *bodyTitleLabel;
@property (readonly, nonatomic) UILabel *bodyTextLabel;
@property (readonly, nonatomic) TFDeviceInstructionView *instructionView;
@property (readonly, nonatomic) UIButton *primaryButton;
@property (readonly, nonatomic) UIButton *secondaryButton;
@property (readonly, nonatomic) UIVisualEffectView *buttonBackgroundEffectView;
@property (retain, nonatomic) UIView *snapshot;
@property (retain, nonatomic) TFBetaAppLaunchScreenViewSpecification *specification;
@property (readonly, nonatomic) TFAppLockupView *lockupView;

- (void).cxx_destruct;
- (void)setSubtitle:(id)a0;
- (void)setTitle:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setLockup:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_prepareForDisplayWithTraitCollection:(id)a0;
- (void)_layoutButtonModuleWithLayoutMetrics:(id)a0;
- (void)_layoutScrollViewWithLayoutMetrics:(id)a0 accomodatingPinnedBottomView:(id)a1;
- (void)snapshotCurrentView;
- (void)cleanupSnapshot;
- (void)prepareForState:(unsigned long long)a0;
- (void)setBodyTitle:(id)a0 bodyText:(id)a1;
- (void)setDeviceImage:(id)a0 withOrientation:(long long)a1;
- (void)setDeviceImageVisibility:(BOOL)a0;
- (void)setDeviceImageOrientation:(long long)a0;
- (void)setPrimaryButtonTitle:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)setSecondaryButtonTitle:(id)a0 target:(id)a1 action:(SEL)a2;

@end
