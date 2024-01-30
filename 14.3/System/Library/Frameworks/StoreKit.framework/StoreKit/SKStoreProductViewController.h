@class SKRemoteProductViewController, NSString, NSDictionary, _UIAsyncInvocation, SKInvocationQueueProxy, SKScrollDetector;
@protocol SKUIServiceProductPageViewController, SKStoreProductViewControllerDelegatePrivate;

@interface SKStoreProductViewController : UIViewController <SKScreenTrackingDelegate, UIViewControllerTransitioningDelegate, SKRemoteDismissingViewController> {
    _UIAsyncInvocation *_cancelRequest;
    id /* block */ _loadBlock;
    long long _originalStatusBarStyle;
    SKRemoteProductViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceProductPageViewController> *_serviceProxy;
    SKScrollDetector *_scrollDetector;
    BOOL _viewWasOnScreen;
    id /* block */ _dismissalCompleted;
}

@property (copy, nonatomic) NSString *additionalBuyParameters;
@property (copy, nonatomic) NSString *affiliateIdentifier;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *hostBundleIdentifier;
@property (copy, nonatomic) NSDictionary *scriptContextDictionary;
@property (nonatomic) long long productPageStyle;
@property (copy, nonatomic) NSString *usageContext;
@property (nonatomic) BOOL askToBuy;
@property (nonatomic) BOOL showsStoreButton;
@property (copy, nonatomic) NSString *cancelButtonTitle;
@property (copy, nonatomic) NSString *rightBarButtonTitle;
@property (nonatomic) BOOL showsRightBarButton;
@property (copy, nonatomic) NSString *promptString;
@property (nonatomic) BOOL automaticallyDismisses;
@property (weak, nonatomic) id<SKStoreProductViewControllerDelegatePrivate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_defaultIXStoreSheetDictionary;
+ (void)_validateURL:(id)a0 withSheetInfo:(id)a1 completionBlock:(id /* block */)a2;
+ (void)getCanLoadURL:(id)a0 withURLBag:(id)a1 completionBlock:(id /* block */)a2;
+ (void)getCanLoadURL:(id)a0 completionBlock:(id /* block */)a1;

- (long long)preferredStatusBarStyle;
- (void)willMoveToParentViewController:(id)a0;
- (long long)modalTransitionStyle;
- (void)loadProductWithParameters:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)finishImmediately;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setParentViewController:(id)a0;
- (void)loadView;
- (BOOL)shouldAutorotate;
- (void)_willBecomeContentViewControllerOfPopover:(id)a0;
- (int)_preferredStatusBarVisibility;
- (long long)modalPresentationStyle;
- (void)_addRemoteView;
- (void)_resetRemoteViewController;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)animationControllerForDismissedController:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_requestRemoteViewController;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadProductWithURL:(id)a0 completionBlock:(id /* block */)a1;
- (void)_didFinish;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_isPeeking;
- (void)viewWillLayoutSubviews;
- (BOOL)dismissRemoteViewControllerWithCompletion:(id /* block */)a0;
- (void)_sk_applicationDidEnterBackground:(id)a0;
- (void)_sk_applicationWillEnterForeground:(id)a0;
- (void)sk_didBecomeOnScreen:(id)a0;
- (void)sk_didBecomeOffScreen:(id)a0;
- (void)_viewTapped:(id)a0;
- (void)_configureForFullScreenPresentationOrThrowException;
- (void)setPresentationStyleIfNeeded;
- (void)setNoClippingIfNeeded;
- (void)_forceOrientationBackToSupportedOrientation;
- (void)_throwUnsupportedPresentationException;
- (void)_setLoadBlock:(id /* block */)a0;
- (void)_fireLoadBlockBeforeFinishing;
- (void)_loadDidFinishWithResult:(BOOL)a0 error:(id)a1;
- (void)loadProductWithPageDictionary:(id)a0 completionBlock:(id /* block */)a1;
- (void)loadProductWithRequest:(id)a0 completionBlock:(id /* block */)a1;
- (void)_didFinishWithResult:(long long)a0;
- (void)_didFinishDismissal;
- (void)_presentPageWithRequest:(id)a0 animated:(BOOL)a1;

@end
