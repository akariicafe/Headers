@class AKAuthorizationPresentationContext, NSString, AKModalSignInViewController, NSLayoutConstraint;
@protocol AKAuthorizationPasswordAuthenticationDelegate;

@interface AKAuthorizationPasswordAuthenticationViewController : AKAuthorizationPaneViewController <AKSignInViewControllerDelegate> {
    AKModalSignInViewController *_modalSignInViewController;
    NSLayoutConstraint *_modalSignInViewBottomConstraint;
    double _keyboardHeight;
}

@property (weak, nonatomic) id<AKAuthorizationPasswordAuthenticationDelegate> delegate;
@property (retain, nonatomic) AKAuthorizationPresentationContext *presentationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)keyboardWillHide:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (id)_username;
- (void).cxx_destruct;
- (void)keyboardDidShow:(id)a0;
- (void)keyboardWillChangeFrame:(id)a0;
- (void)signInViewController:(id)a0 didAuthenticateWithResults:(id)a1 error:(id)a2;
- (id)_contextForAuthentication;
- (void)adjustBottomInsetForKeyboard:(id)a0;
- (double)intrinsicContentHeight;
- (BOOL)isKeyboardAttachedToBottom:(id)a0;
- (void)layoutViewWithAnimation;
- (void)sizeToFitPaneContentAnimated:(BOOL)a0;

@end
