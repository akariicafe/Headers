@class UIView, NSString, UITextField, AKAppleIDAuthenticationInAppContext, ACAccount, UIButton;

@interface DKFindMySignOutController : OBWelcomeController <AKInlineSignInViewControllerDelegate, AKAppleIDAuthenticationDelegate, UITextFieldDelegate>

@property (retain, nonatomic) UITextField *passwordField;
@property (retain, nonatomic) UIButton *forgotButton;
@property (retain, nonatomic) AKAppleIDAuthenticationInAppContext *authContext;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) UIView *containerOutlineView;
@property (nonatomic) BOOL isAuthInProgress;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)_titleForError:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)_cancelTapped:(id)a0;
- (void)_handleFMIPAuthenticationResponse:(id)a0 withError:(id)a1 forContext:(id)a2 completion:(id /* block */)a3;
- (void)_passwordRecoveryButtonWasTapped:(id)a0;
- (void)_turnOffTapped:(id)a0;
- (void)_authenticateWithPassword:(id)a0;
- (void)_disableFindMy:(id)a0 withPassword:(id)a1;
- (id)_messageForError:(id)a0;
- (id)initWithAccount:(id)a0 withCompletion:(id /* block */)a1;

@end
