@class UIBarButtonItem, NSString, VSIdentityProvider, VSViewModel, NSOperationQueue, UIViewController, VSAuditToken, VSImageLoadOperation, VSIdentityProviderRequestManager;
@protocol VSIdentityProviderViewControllerDelegate;

@interface VSIdentityProviderViewController : UIViewController <VSAuthenticationViewControllerDelegate, VSIdentityProviderRequestManagerDelegate, PSStateRestoration>

@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) VSImageLoadOperation *logoLoadOperation;
@property (retain, nonatomic) VSViewModel *viewModel;
@property (retain, nonatomic) VSIdentityProviderRequestManager *requestManager;
@property (retain, nonatomic) UIBarButtonItem *signInButtonItem;
@property (retain, nonatomic) UIBarButtonItem *cancelButtonItem;
@property (retain, nonatomic) UIViewController *currentlyPresentedIdentityProviderAlert;
@property (readonly, nonatomic) VSIdentityProvider *identityProvider;
@property (weak, nonatomic) id<VSIdentityProviderViewControllerDelegate> delegate;
@property (copy, nonatomic) VSAuditToken *auditToken;
@property (nonatomic) BOOL canIssuePrivacyVouchers;
@property (nonatomic, getter=isCancellationAllowed) BOOL cancellationAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canBeShownFromSuspendedState;
- (void)viewDidLayoutSubviews;
- (void)enqueueRequest:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)_didCancel;
- (void)_dismiss;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_cancelButtonPressed:(id)a0;
- (void)_stopObservingViewModel:(id)a0;
- (void)_startObservingViewModel:(id)a0;
- (void)_showViewController:(id)a0;
- (id)initWithIdentityProvider:(id)a0;
- (void)_hideNavigationBarButtons;
- (void)_showNavigationBarButtons;
- (void)_stopValidationAndShowButtons:(BOOL)a0;
- (void)_signInButtonPressed:(id)a0;
- (id)_logoLoadOperationForPreferredImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)_startValidation;
- (void)_showValidationAlertForError:(id)a0;
- (void)authenticationViewControllerDidCancel:(id)a0;
- (void)identityProviderRequestManager:(id)a0 finishedRequest:(id)a1 withResult:(id)a2;
- (void)identityProviderRequestManager:(id)a0 didAuthenticateAccount:(id)a1 forRequest:(id)a2;
- (BOOL)identityProviderRequestManager:(id)a0 requestsAlert:(id)a1;
- (BOOL)currentAuthenticationViewControllerSupportsPreAuth;

@end
