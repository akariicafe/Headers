@class UIView, NSString, _SFDimmingButton, UIImageView, SFThemeColorEffectView, UIButton, NSLayoutConstraint, UILabel, UIColor;

@interface _SFLinkBanner : _SFPinnableBanner {
    SFThemeColorEffectView *_backdrop;
    UIView *_separator;
    NSLayoutConstraint *_titleTopConstraint;
    NSLayoutConstraint *_titleLeadingConstraint;
    NSLayoutConstraint *_messageTopConstraint;
    NSLayoutConstraint *_messageBottomConstraint;
    UIButton *_dismissButton;
    NSLayoutConstraint *_iconLeadingConstraintToSuperview;
    NSLayoutConstraint *_backdropTopConstraint;
}

@property (class, readonly, nonatomic) double iconHeight;

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) NSString *messageLabelText;
@property (retain, nonatomic) _SFDimmingButton *openButton;
@property (copy, nonatomic) id /* block */ openActionHandler;
@property (nonatomic) BOOL shouldHideIcon;
@property (readonly, nonatomic) UIColor *preferredButtonBackgroundColor;
@property (readonly, nonatomic) UIColor *preferredButtonTintColor;
@property (copy, nonatomic) id /* block */ dismissButtonHandler;
@property (nonatomic) double backdropTopExtension;

- (void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)layoutSubviews;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)_titleLabelFont;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)_dismiss;
- (void)_open;
- (void)contentSizeCategoryDidChange;
- (id)_messageLabelFont;
- (void)_setShowsDismissButton:(BOOL)a0;
- (void)invalidateBannerLayout;
- (void)themeDidChange;

@end
