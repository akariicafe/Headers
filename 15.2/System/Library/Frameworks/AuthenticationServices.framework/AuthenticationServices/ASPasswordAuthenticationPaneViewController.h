@class ASCAuthorizationPresentationContext, UITextField, ASCredentialRequestButtonContinue, UILabel, UIActivityIndicatorView, NSLayoutConstraint;
@protocol ASPasswordAuthenticationPaneViewControllerDelegate;

@interface ASPasswordAuthenticationPaneViewController : ASCredentialRequestPaneViewController {
    ASCAuthorizationPresentationContext *_presentationContext;
    double _keyboardHeight;
    unsigned long long _persona;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UITextField *_usernameField;
    UITextField *_secureTextField;
    ASCredentialRequestButtonContinue *_signInButton;
    UIActivityIndicatorView *_signInButtonActivityIndicator;
    NSLayoutConstraint *_paneHeaderStackViewBottomKeyboardConstraint;
}

@property (weak, nonatomic) id<ASPasswordAuthenticationPaneViewControllerDelegate> authenticationDelegate;

- (void)viewDidLoad;
- (void)_createViews;
- (void).cxx_destruct;
- (id)_titleLabelText;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)keyboardDidShow:(id)a0;
- (void)_setConstraints;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)_textFieldChanged:(id)a0;
- (void)_signInButtonTapped;
- (void)_setUpSubtitleLabel;
- (void)_setUpUsernameLabel;
- (id)_secureTextFieldPlaceholderText;
- (double)_topViewMargin;
- (void)_setUpAndAddIconImage;
- (double)_containerViewHorizontalMargin;
- (double)_secureTextFieldInsetMargin;
- (id)_manualPasswordEntryTitleLabelText;
- (void)_completeManualPasswordCredentialEntry;
- (void)_startAnimatingActivityIndicator;
- (void)_stopAnimatingActivityIndicator;
- (void)_pinValidationSucceededWithCredential:(id)a0;
- (void)_pinValidationFailedWithError:(id)a0;
- (void)sizeToFitPaneContentAnimated:(BOOL)a0;
- (id)initWithPersona:(unsigned long long)a0 presentationContext:(id)a1;
- (double)_signInButtonInsetMargin;
- (double)_intrinsicContentHeight;

@end
