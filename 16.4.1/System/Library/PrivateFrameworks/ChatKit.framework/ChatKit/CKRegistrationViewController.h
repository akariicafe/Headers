@class AKTapToSignInViewController, OBPrivacyLinkController, NSString;

@interface CKRegistrationViewController : UIViewController <AKTapToSignInViewControllerDelegate>

@property (retain, nonatomic) AKTapToSignInViewController *akSignInVC;
@property (retain, nonatomic) OBPrivacyLinkController *privacyLinkController;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_inProgressRegisteringNonPhoneAccount;
+ (BOOL)_shouldShowAuthKitSignIn;
+ (BOOL)shouldShowRegistration;

- (void)keyboardWillHide:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)canBecomeFirstResponder;
- (id)init;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)keyboardDidShow:(id)a0;
- (void)_handleRegistrarCompletion:(BOOL)a0 errorAlertController:(id)a1;
- (id)accountRegistrar;
- (void)setErrorPresentationViewController:(id)a0;
- (void)tapToSignInViewController:(id)a0 didAuthenticateWithResults:(id)a1 error:(id)a2;
- (void)updateInsetsForKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
