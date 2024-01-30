@class NSString, NSURL, SKRemoteAccountPageViewController, SURedeemCameraViewController, SKInvocationQueueProxy, ACAccount, _UIAsyncInvocation;
@protocol SKUIServiceAccountPageViewController, SKAccountPageViewControllerDelegate;

@interface SKAccountPageViewController : UIViewController <SKUIRedeemViewCameraOverrideDelegate, PSStateRestoration> {
    NSURL *_accountURL;
    _UIAsyncInvocation *_cancelRequest;
    id /* block */ _prepareBlock;
    id /* block */ _loadBlock;
    SURedeemCameraViewController *_presentedRedeemCameraViewController;
    SKRemoteAccountPageViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceAccountPageViewController> *_serviceProxy;
    BOOL _isRemoteViewControllerReady;
    BOOL _financeInterruptionCalled;
    BOOL _cameraDidShow;
    BOOL _viewHasAppeared;
    BOOL _isRemoteViewControllerSetup;
    id /* block */ redeemCompletionHandler;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) SKAccountPageViewController *preWarmedViewController;
@property (weak, nonatomic) SKAccountPageViewController *presentingAccountPageViewController;
@property (weak, nonatomic) id<SKAccountPageViewControllerDelegate> delegate;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSString *referrer;
@property (nonatomic) BOOL showAccountGlyph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)isCommerceUIURL:(id)a0 completion:(id /* block */)a1;

- (void)willMoveToParentViewController:(id)a0;
- (void)loadWithCompletionBlock:(id /* block */)a0;
- (void)_setupNotificationCenter;
- (BOOL)canBeShownFromSuspendedState;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)_setupNavigationItem;
- (void)loadView;
- (void)didMoveToParentViewController:(id)a0;
- (void)_addRemoteView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)_requestRemoteViewController;
- (void)viewDidLoad;
- (id)initWithAccountURL:(id)a0;
- (void)_dismissViewControllerWithResult:(BOOL)a0 error:(id)a1;
- (void)_didPrepareWithResult:(BOOL)a0 error:(id)a1;
- (void)_didFinishLoading;
- (void)_financeInterruptionResolved:(BOOL)a0;
- (void)_overrideCreditCardPresentationWithCompletion:(id /* block */)a0;
- (void)_overrideRedeemCameraPerformAction:(long long)a0 withObject:(id)a1;
- (void)_overrideRedeemCameraWithCompletion:(id /* block */)a0;
- (void)_setBridgedNavigationItemWithOptions:(id)a0;
- (void)_pushBridgedViewControllerAnimated:(BOOL)a0 options:(id)a1;
- (void)_popBridgedViewControllersToIndex:(unsigned long long)a0;
- (void)_presentBridgedViewController;
- (void)_dismissBridgedViewController;
- (id)_overrideScheme:(id)a0;
- (void)_setupRemoteViewController:(BOOL)a0;
- (void)_setupPreWarmedViewController;
- (void)_sk_applicationDidEnterBackground:(id)a0;
- (void)_sk_applicationWillEnterForeground:(id)a0;
- (void)_keyboardDidChangeNotification:(id)a0;
- (void)_keyboardWillChangeNotification:(id)a0;
- (void)_popAllBridgedNavigationViewControllers;
- (void)_bridgedRightButtonPressed:(id)a0;
- (unsigned long long)_indexForFirstBridgedNavigationViewController;
- (void)redeemCameraViewController:(id)a0 didFinishWithRedeem:(id)a1;
- (void)overrideRedeemOperationWithCode:(id)a0 cameraRecognized:(BOOL)a1 completion:(id /* block */)a2;
- (void)prepareWithCompletionBlock:(id /* block */)a0;

@end
