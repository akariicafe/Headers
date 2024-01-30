@class NSString, NSURL, AMSMutableBinaryPromise, SURedeemCameraViewController, SKRemoteAccountPageViewController, SKInvocationQueueProxy, AMSUIWebViewController, ACAccount, _UIAsyncInvocation;
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
    BOOL _isLoading;
    BOOL _isRemoteViewControllerSetup;
    id /* block */ redeemCompletionHandler;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) SKAccountPageViewController *preWarmedViewController;
@property (weak, nonatomic) SKAccountPageViewController *presentingAccountPageViewController;
@property (retain, nonatomic) AMSUIWebViewController *webViewController;
@property (retain, nonatomic) AMSMutableBinaryPromise *connectionSetupPromise;
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
- (void)didMoveToParentViewController:(id)a0;
- (void)loadWithCompletionBlock:(id /* block */)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)_setupNotificationCenter;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)canBeShownFromSuspendedState;
- (void)_addRemoteView;
- (void)_didFinishLoading;
- (void)_requestRemoteViewController;
- (void)_setupNavigationItem;
- (void)_keyboardDidChangeNotification:(id)a0;
- (id)initWithAccountURL:(id)a0 forceLegacy:(BOOL)a1;
- (id)_URLForBagKey:(id)a0;
- (void)_beginURLParsing:(id)a0 forceLegacy:(BOOL)a1;
- (void)_bridgedRightButtonPressed:(id)a0;
- (void)_didPrepareWithResult:(BOOL)a0 error:(id)a1;
- (void)_dismissBridgedViewController;
- (void)_dismissViewControllerWithResult:(BOOL)a0 error:(id)a1;
- (void)_financeInterruptionResolved:(BOOL)a0;
- (void)_handleLegacyViewWillAppear;
- (unsigned long long)_indexForFirstBridgedNavigationViewController;
- (BOOL)_isBridgedNavigationViewController;
- (void)_keyboardWillChangeNotification:(id)a0;
- (void)_overrideCreditCardPresentationWithCompletion:(id /* block */)a0;
- (void)_overrideRedeemCameraPerformAction:(long long)a0 withObject:(id)a1;
- (void)_overrideRedeemCameraWithCompletion:(id /* block */)a0;
- (id)_overrideScheme:(id)a0;
- (void)_popAllBridgedNavigationViewControllers;
- (void)_popBridgedViewControllersToIndex:(unsigned long long)a0;
- (void)_presentBridgedViewController;
- (void)_pushBridgedViewControllerAnimated:(BOOL)a0 options:(id)a1;
- (id)_redeemURLFromRedeemConfigURL:(id)a0;
- (void)_setBridgedNavigationItemWithOptions:(id)a0;
- (void)_setupLegacyContainer;
- (void)_setupPreWarmedViewController;
- (void)_setupRemoteViewController:(BOOL)a0;
- (void)_setupWebViewController;
- (void)_sk_applicationDidEnterBackground:(id)a0;
- (void)_sk_applicationWillEnterForeground:(id)a0;
- (id)initWithAccountURL:(id)a0;
- (void)overrideRedeemOperationWithCode:(id)a0 cameraRecognized:(BOOL)a1 completion:(id /* block */)a2;
- (void)prepareWithCompletionBlock:(id /* block */)a0;
- (void)redeemCameraViewController:(id)a0 didFinishWithRedeem:(id)a1;

@end
