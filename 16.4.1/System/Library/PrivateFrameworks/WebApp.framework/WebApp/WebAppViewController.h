@class CPSPromise, NSString, _UIAsyncInvocation, LoadingViewController, _SFWebAppViewController, UIWebClip, NSTimer;

@interface WebAppViewController : UIViewController <_SFWebAppViewControllerDelegate> {
    _SFWebAppViewController *_contentViewController;
    _UIAsyncInvocation *_cancelViewServiceRequest;
    BOOL _hasShownLoadingViewController;
    BOOL _hasCustomScheme;
    LoadingViewController *_loadingViewController;
    long long _orientation;
    NSTimer *_hideSnapshotTimer;
    CPSPromise *_connectionPromiseForPush;
}

@property (readonly, nonatomic) UIWebClip *webClip;
@property (nonatomic) BOOL wasLaunchedForWebPush;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)_connectToService;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (void)webAppViewController:(id)a0 didChangeLoadingState:(BOOL)a1;
- (void)webAppViewController:(id)a0 viewServiceDidTerminateWithError:(id)a1;
- (void)webAppViewControllerDidFinishInitialLoad:(id)a0;
- (id)initWithWebClip:(id)a0;
- (void)hideLoadingView;
- (void)openURLWithCustomSchemeIfNeeded;
- (void)_cancelHideSnapshotTimer;
- (void)_removeRemoteView;
- (void)_setUpContentViewController:(id)a0;
- (void)notificationActivated:(id)a0;
- (void)processWebPushWithIdentifier:(id)a0;
- (void)timeLimitForLoadCompletionExpired;

@end
