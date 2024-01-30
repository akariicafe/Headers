@class NSString, ASNavigationController, ASCAuthorizationPresentationContext;
@protocol ASAuthorizationViewControllerDelegate;

@interface ASAuthorizationViewController : UIViewController <ASCredentialRequestPaneViewControllerDelegate, ASCredentialRequestContainerViewControllerDelegate, ASPasswordAuthenticationPaneViewControllerDelegate> {
    ASCAuthorizationPresentationContext *_presentationContext;
    ASNavigationController *_navigationController;
}

@property (weak, nonatomic) id<ASAuthorizationViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)modalPresentationStyle;
- (void)viewWillAppear:(BOOL)a0;
- (id)navigationController;
- (void)presentPINEntryInterface;
- (void)updateInterfaceWithLoginChoices:(id)a0;
- (void).cxx_destruct;
- (id)_cancelBarButtonItem;
- (id)initWithPresentationContext:(id)a0;
- (void)_cancelButtonSelected:(id)a0;
- (void)requestContainerViewControllerDidDismiss:(id)a0;
- (void)requestPaneViewController:(id)a0 dismissWithCredential:(id)a1 error:(id)a2;
- (void)requestPaneViewController:(id)a0 didRequestCredentialForLoginChoice:(id)a1 authenticatedContext:(id)a2 completionHandler:(id /* block */)a3;
- (void)requestPaneViewControllerPresentManualPasswordEntryInterface:(id)a0;
- (void)requestPaneViewControllerRequiresPINEntryInterface:(id)a0;
- (void)passwordAuthenticationViewController:(id)a0 validateUserEnteredPIN:(id)a1 completionHandler:(id /* block */)a2;
- (void)passwordAuthenticationViewController:(id)a0 completedWithManuallyEnteredPasswordCredential:(id)a1;
- (id)_initialViewControllerForPresentationContext:(id)a0;
- (void)_presentPINEntryInterface;
- (void)_pushSecurityKeyViewControllerWithOverrideSubtitle:(id)a0;
- (id)_setUpInitialViewController;
- (id)_setUpContainerViewControllerWithCredentialRequestViewController:(id)a0;
- (id)_securityKeyRequestViewController;
- (id)_signInBarButtonItem;
- (id)_securityKeyRequestViewControllerWithOverrideSubtitle:(id)a0;
- (void)_pushSecurityKeyViewController;
- (void)_presentManualPasswordEntryInterface;
- (void)pushOrUpdateBasicPaneViewControllerWithError:(long long)a0;

@end
