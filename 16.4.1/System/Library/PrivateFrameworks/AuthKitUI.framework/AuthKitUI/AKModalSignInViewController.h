@class UIButton, UIColor, UITextField, NSString, UILabel, UIView, AKRoundedButton;

@interface AKModalSignInViewController : AKBaseSignInViewController <AKAppleIDAuthenticationInAppContextAlertDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate, UITextFieldDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UITextField *passwordField;
@property (retain, nonatomic) AKRoundedButton *signInButton;
@property (retain, nonatomic) UIButton *iForgotButton;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL hideTitle;
@property (retain, nonatomic) NSString *customBodyText;
@property (retain, nonatomic) NSString *customButtonTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startAnimating;
- (void)stopAnimating;
- (BOOL)becomeFirstResponder;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)_setupConstraints;
- (void)viewDidLoad;
- (BOOL)canBecomeFirstResponder;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)resignFirstResponder;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void)_setupViews;
- (void).cxx_destruct;
- (id)_buttonTitle;
- (void)_createViews;
- (id)_bodyText;
- (void)context:(id)a0 needsPasswordWithCompletion:(id /* block */)a1;
- (BOOL)_isSignInAllowed;
- (void)_passwordRecoveryButtonWasTapped:(id)a0;
- (void)_signInButtonTapped:(id)a0;
- (void)_updateViewConstraints;
- (void)displayAlertForContext:(id)a0 error:(id)a1 completion:(id /* block */)a2;

@end
