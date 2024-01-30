@class CNFRegSplashSignInController, PSSpecifier, UIImageView, UIActivityIndicatorView, UILabel, UIView, UIButton;

@interface CNFRegSigninLearnMoreView : UIView <PSHeaderFooterView> {
    PSSpecifier *_specifier;
    UILabel *_signingInLabel;
    UIActivityIndicatorView *_signingInSpinner;
}

@property (retain, nonatomic) UIImageView *splashImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *verbiageLabel;
@property (retain, nonatomic) UIButton *learnMoreButton;
@property (retain, nonatomic) UIView *authKitSignInView;
@property (nonatomic) long long serviceType;
@property (nonatomic) CNFRegSplashSignInController *controller;

- (id)initWithSpecifier:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_learnMorePressed:(id)a0;
- (void)setSigningIn:(BOOL)a0;
- (id)signingInLabel;
- (id)signingInSpinner;
- (double)preferredHeightForWidth:(double)a0;
- (id)_splashImage;

@end
