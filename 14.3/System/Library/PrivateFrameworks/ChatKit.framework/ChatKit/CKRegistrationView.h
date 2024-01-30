@class UIImageView, UIActivityIndicatorView, UILabel, UIView, UIButton;

@interface CKRegistrationView : UIScrollView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *verbiageLabel;
@property (retain, nonatomic) UILabel *signingInLabel;
@property (retain, nonatomic) UIActivityIndicatorView *signingInSpinner;
@property (retain, nonatomic) UIButton *learnMoreButton;
@property (retain, nonatomic) UIView *authKitSignInView;
@property (retain, nonatomic) UIView *privacyLinkView;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_learnMorePressed:(id)a0;
- (struct CGSize { double x0; double x1; })manualSizeToFitForAuthKitSignInView;
- (void)setSigningIn:(BOOL)a0;

@end
