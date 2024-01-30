@class AKAuthorizationNavigationController, AKAuthorizationScopeChoices, AKAuthorizationPresentationContext, NSString;
@protocol AKAuthorizationViewControllerDelegate;

@interface AKAuthorizationViewController : UIViewController <AKAuthorizationContainerViewControllerDelegate, AKAuthorizationPaneViewControllerDelegate>

@property (readonly, nonatomic) AKAuthorizationNavigationController *navigationController;
@property (readonly, nonatomic) AKAuthorizationScopeChoices *scopeChoices;
@property (retain, nonatomic) AKAuthorizationPresentationContext *presentationContext;
@property (weak, nonatomic) id<AKAuthorizationViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (long long)modalPresentationStyle;
- (void)_cancelButtonSelected:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)_cancelBarButtonItem;
- (id)_backBarButtonItem;
- (void)viewDidLoad;
- (void)authorizationContainerViewControllerDidDismiss:(id)a0;
- (void)_presentAuthorizationViewController;
- (BOOL)_isFirstTimeAppleIDAuthorization;
- (void)_presentFirstTimeViewController;
- (void)_presentInputPaneViewControllerReplacing:(BOOL)a0;
- (id)firstTimeViewController;
- (id)_inputPaneViewController;
- (void)_presentContainerViewControllerWith:(id)a0;
- (void)_delegate_authorizationViewControllerDidCompleteWithAuthorization:(id)a0 error:(id)a1;
- (id)_logoBarButtonItem:(id)a0;
- (void)_backButtonSelected:(id)a0;
- (void)presentInputPaneViewController;
- (void)authorizationPaneViewController:(id)a0 dismissWithAuthorization:(id)a1 error:(id)a2;
- (void)authorizationPaneViewController:(id)a0 didRequestAuthorizationWithUserProvidedInformation:(id)a1 completion:(id /* block */)a2;
- (void)authorizationPaneViewController:(id)a0 didRequestIconWithCompletion:(id /* block */)a1;
- (void)authorizationPaneViewController:(id)a0 pushEditScope:(id)a1 presentationContext:(id)a2 options:(id)a3;
- (void)performAppleIDAuthorizationForPaneViewController:(id)a0;
- (void)performPasswordAuthenticationForPaneViewController:(id)a0;
- (id)initWithAuthorizationContext:(id)a0;
- (void)presentConfirmPaneViewController;
- (void)presentAuthenticationChoiceUIWithCompletion:(id /* block */)a0;

@end
