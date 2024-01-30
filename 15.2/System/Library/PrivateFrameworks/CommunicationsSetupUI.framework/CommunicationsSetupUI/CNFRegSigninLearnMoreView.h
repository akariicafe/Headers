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

- (void)layoutSubviews;
- (void)setSigningIn:(BOOL)a0;
- (id)signingInLabel;
- (id)signingInSpinner;
- (void)_learnMorePressed:(id)a0;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0;
- (id)initWithSpecifier:(id)a0;
- (id)_splashImage;

@end
