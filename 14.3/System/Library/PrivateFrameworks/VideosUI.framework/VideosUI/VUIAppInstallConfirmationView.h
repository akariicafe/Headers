@class NSLayoutConstraint, NSString, VUIAppInstallLockup, UILabel, VUIBuyButtonLockup, UIButton;

@interface VUIAppInstallConfirmationView : UIView {
    BOOL _didLayout;
    UILabel *_imageSubtitleView;
    VUIBuyButtonLockup *_buyLockup;
    UILabel *_titleView;
    UILabel *_messageView;
    NSLayoutConstraint *_buttonHeightConstraint;
}

@property (retain, nonatomic) VUIAppInstallLockup *lockupView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *appStoreButton;
@property (retain, nonatomic) UIButton *secondaryLinkButton;

+ (struct CGSize { double x0; double x1; })iconSize;

- (void)setAppName:(id)a0;
- (void).cxx_destruct;
- (void)setAppIcon:(id)a0;
- (void)layoutSubviews;
- (void)setIAP:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_buttonWithTitleForTV:(id)a0 textStyle:(id)a1;
- (void)setAgeRating:(id)a0;
- (void)_layoutForTvos;
- (void)_layoutForIos;
- (void)setAppSubtitle:(id)a0;

@end
