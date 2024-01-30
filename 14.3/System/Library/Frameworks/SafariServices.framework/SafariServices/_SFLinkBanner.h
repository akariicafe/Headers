@class NSString, UIImageView, _SFDimmingButton, UILabel, UIView, NSLayoutConstraint;

@interface _SFLinkBanner : _SFPinnableBanner {
    UIView *_separator;
    NSLayoutConstraint *_titleTopConstraint;
    NSLayoutConstraint *_messageTopConstraint;
    NSLayoutConstraint *_messageBottomConstraint;
}

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) NSString *messageLabelText;
@property (retain, nonatomic) _SFDimmingButton *openButton;
@property (copy, nonatomic) id /* block */ openActionHandler;

- (void)contentSizeCategoryDidChange;
- (void)invalidateBannerLayout;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)init;
- (void).cxx_destruct;
- (id)_titleLabelFont;
- (void)layoutSubviews;
- (void)_open;
- (id)_messageLabelFont;
- (void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
