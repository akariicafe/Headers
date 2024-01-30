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
- (void).cxx_destruct;
- (void)dealloc;
- (void)keyboardDidShow:(id)a0;
- (void)signInViewController:(id)a0 didAuthenticateWithResults:(id)a1 error:(id)a2;
- (void)viewDidLoad;
- (double)intrinsicContentHeight;
- (id)_contextForAuthentication;
- (void)sizeToFitPaneContentAnimated:(BOOL)a0;

@end
