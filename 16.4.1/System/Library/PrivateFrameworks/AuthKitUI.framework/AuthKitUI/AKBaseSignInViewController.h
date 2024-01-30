@class NSString, AKAppleIDAuthenticationController, AKAppleIDAuthenticationInAppContext;
@protocol AKSignInViewControllerDelegate;

@interface AKBaseSignInViewController : UIViewController <AKBasicLoginAnimateProtocol> {
    AKAppleIDAuthenticationController *_authenticationController;
}

@property (nonatomic, getter=isAuthInProgress) BOOL authInProgress;
@property (nonatomic) BOOL usesDarkMode;
@property (retain, nonatomic) AKAppleIDAuthenticationInAppContext *context;
@property (weak, nonatomic) id<AKSignInViewControllerDelegate> delegate;
@property (readonly, nonatomic) AKAppleIDAuthenticationController *authenticationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startAnimating;
- (void)stopAnimating;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_setPasswordFieldHiddenIfNeeded;
- (void)_beginAuthenticationIfPossibleWithOption:(unsigned long long)a0 withUsername:(id)a1 password:(id)a2;
- (void)_authenticateWithContext:(id)a0;
- (BOOL)_canBeginAuthenticationWithOption:(unsigned long long)a0;
- (id)_initWithAuthController:(id)a0;
- (id)_initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_isAccountModificationRestricted;
- (BOOL)_isSignInAllowed;
- (void)_provideDelegateWithAuthResults:(id)a0 error:(id)a1;
- (void)_setPasswordFieldHidden:(BOOL)a0 animated:(BOOL)a1;

@end
