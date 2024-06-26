@class SUDelayedNavigationItem, NSString, SSMutableAuthenticationContext, ISURLRequestPerformance, SUMescalSession, SUWebView, NSDictionary, NSURL, ACAccount, SUObjectPool, SUStorePageProtocol, SUWebViewManager;

@interface SUWebViewController : SUViewController <SUWebViewManagerDelegate, SUWebViewDelegate> {
    SUWebView *_webView;
    SUDelayedNavigationItem *_delayedNavigationItem;
    NSURL *_displayedURL;
    BOOL _hasEverAppeared;
    long long _lastKnownOrientation;
    id /* block */ _loadBlock;
    SUObjectPool *_objectPool;
    long long _scheduledOrientation;
    SUStorePageProtocol *_storePageProtocol;
    NSURL *_url;
    SUWebViewManager *_webViewManager;
}

@property (nonatomic) BOOL viewIsReady;
@property (retain, nonatomic, getter=_mescalSession, setter=_setMescalSession:) SUMescalSession *_mescalSession;
@property (retain, nonatomic, getter=_performanceMetrics, setter=_setPerformanceMetrics:) ISURLRequestPerformance *_performanceMetrics;
@property (nonatomic) long long style;
@property (copy, nonatomic) SSMutableAuthenticationContext *authenticationContext;
@property (readonly, nonatomic) SUWebView *webView;
@property (nonatomic) BOOL shouldSignRequests;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSDictionary *tidHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })documentBounds;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)invalidate;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)_defaultBackgroundColor;
- (void)_setExistingNavigationItem:(id)a0;
- (void)_finishLoadWithResult:(BOOL)a0 error:(id)a1;
- (id)copyScriptProperties;
- (id)displayedURL;
- (id)navigationItemForScriptInterface;
- (void)setScriptProperties:(id)a0;
- (void)_reloadUI;
- (struct CGSize { double x0; double x1; })minimumViewSize;
- (void)webViewManager:(id)a0 didReceiveTitle:(id)a1;
- (void)_addPlaceholderBackgroundView;
- (void)_applySavedScrollOffsetIfPossible;
- (void)_applyScriptProperties:(id)a0;
- (void)_getURLRequestForOperation:(id)a0 block:(id /* block */)a1;
- (void)_loadURLRequest:(id)a0;
- (void)_loadWithURLOperation:(id)a0 completionBlock:(id /* block */)a1;
- (id)_placeholderBackgroundView;
- (void)_prepareToLoadURL:(id)a0;
- (void)_reloadBackgroundViewPropertiesWithScriptProperties:(id)a0;
- (void)_reloadObjectPool;
- (void)_reloadPlaceholderBackgroundView;
- (void)_removePlaceholderBackgroundView;
- (void)_requestWebScriptReloadWithContext:(id)a0;
- (void)_sendOrientationWillChangeToInterfaceOrientation:(long long)a0;
- (void)_setLastKnownOrientation:(long long)a0;
- (id)copyArchivableContext;
- (id)copyDefaultScriptProperties;
- (id)copyObjectForScriptFromPoolWithClass:(Class)a0;
- (void)keyboardDidHideWithInfo:(id)a0;
- (void)keyboardWillShowWithInfo:(id)a0;
- (id)newRotationController;
- (id)newScriptInterface;
- (id)newScriptInterfaceForWebViewManager:(id)a0;
- (void)parentViewControllerHierarchyDidChange;
- (void)reloadWithStorePage:(id)a0 forURL:(id)a1;
- (void)setStorePageProtocol:(id)a0;
- (void)storePageCleanupBeforeTearDown;
- (id)storePageProtocol;
- (void)storePageProtocolDidChange;
- (id)viewControllerForWebViewManager:(id)a0;
- (void)webViewManager:(id)a0 didFailLoadWithError:(id)a1;
- (void)webViewManager:(id)a0 didReceivePrimaryResponse:(id)a1;
- (void)webViewManager:(id)a0 didRejectInvalidRequest:(id)a1;
- (void)webViewManager:(id)a0 webDocumentViewDidSetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)webViewManager:(id)a0 willInjectScriptInterface:(id)a1;
- (void)webViewManagerDidFinishLoad:(id)a0;
- (void)webViewManagerDidStartLoad:(id)a0;

@end
