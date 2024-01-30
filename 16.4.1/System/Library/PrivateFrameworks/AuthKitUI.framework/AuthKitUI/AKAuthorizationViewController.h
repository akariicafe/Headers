@class AKAuthorizationNavigationController, AKAuthorizationScopeChoices, AKAuthorizationPresentationContext, NSString;
@protocol AKAuthorizationViewControllerDelegate;

@interface AKAuthorizationViewController : UIViewController <AKAuthorizationPaneDelegate, AKAuthorizationContainerViewControllerDelegate>

@property (readonly, nonatomic) AKAuthorizationNavigationController *navigationController;
@property (readonly, nonatomic) AKAuthorizationScopeChoices *scopeChoices;
@property (retain, nonatomic) AKAuthorizationPresentationContext *presentationContext;
@property (weak, nonatomic) id<AKAuthorizationViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)modalPresentationStyle;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (id)initWithAuthorizationContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)_backBarButtonItem;
- (id)_cancelBarButtonItem;
- (void)_presentFirstTimeViewController;
- (void)authorizationPaneViewController:(id)a0 dismissWithAuthorization:(id)a1 error:(id)a2;
- (void)_backButtonSelected:(id)a0;
- (void)_cancelButtonSelected:(id)a0;
- (void)_delegate_authorizationViewControllerDidCompleteWithAuthorization:(id)a0 error:(id)a1;
- (id)_inputPaneViewController;
- (BOOL)_isFirstTimeAppleIDAuthorization;
- (BOOL)_isManagedAppleID;
- (id)_logoBarButtonItem:(id)a0;
- (void)_performPasswordAuthenticationForFederatedManagedAccountForPaneViewController:(id)a0;
- (void)_presentAuthorizationViewController;
- (void)_presentContainerViewControllerWith:(id)a0;
- (void)_presentInputPaneViewControllerReplacing:(BOOL)a0;
- (void)authorizationContainerViewControllerDidDismiss:(id)a0;
- (void)authorizationPaneViewController:(id)a0 didRequestAuthorizationWithUserProvidedInformation:(id)a1 completion:(id /* block */)a2;
- (void)authorizationPaneViewController:(id)a0 didRequestIconWithCompletion:(id /* block */)a1;
- (void)authorizationPaneViewController:(id)a0 pushEditScope:(id)a1 presentationContext:(id)a2 options:(id)a3;
- (id)firstTimeViewController;
- (void)performAppleIDAuthorizationForPaneViewController:(id)a0;
- (void)performPasswordAuthenticationForPaneViewController:(id)a0;
- (void)presentAuthenticationChoiceUIWithCompletion:(id /* block */)a0;
- (void)presentConfirmPaneViewController;
- (void)presentInputPaneViewController;

@end
