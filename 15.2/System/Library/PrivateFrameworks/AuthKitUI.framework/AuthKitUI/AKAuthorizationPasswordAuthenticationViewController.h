@class AKAuthorizationPresentationContext, NSString, AKModalSignInViewController;
@protocol AKAuthorizationPasswordAuthenticationDelegate;

@interface AKAuthorizationPasswordAuthenticationViewController : AKAuthorizationPaneViewController <AKSignInViewControllerDelegate> {
    AKModalSignInViewController *_modalSignInViewController;
    double _keyboardHeight;
}

@property (weak, nonatomic) id<AKAuthorizationPasswordAuthenticationDelegate> delegate;
@property (retain, nonatomic) AKAuthorizationPresentationContext *presentationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_username;
- (void)viewDidLoad;
- (void)signInViewController:(id)a0 didAuthenticateWithResults:(id)a1 error:(id)a2;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)keyboardDidShow:(id)a0;
- (void)dealloc;
- (void)sizeToFitPaneContentAnimated:(BOOL)a0;
- (double)intrinsicContentHeight;
- (id)_contextForAuthentication;

@end
