@class NSString, _UIAsyncInvocation, LoadingViewController, _SFWebAppViewController, UIWebClip, NSTimer;

@interface WebAppViewController : UIViewController <_SFWebAppViewControllerDelegate> {
    _SFWebAppViewController *_contentViewController;
    _UIAsyncInvocation *_cancelViewServiceRequest;
    BOOL _hasShownLoadingViewController;
    BOOL _hasCustomScheme;
    LoadingViewController *_loadingViewController;
    long long _orientation;
    NSTimer *_hideSnapshotTimer;
}

@property (readonly, nonatomic) UIWebClip *webClip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void).cxx_destruct;
- (void)dealloc;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (void)_connectToService;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (void)viewDidAppear:(BOOL)a0;
- (void)webAppViewController:(id)a0 didChangeLoadingState:(BOOL)a1;
- (void)webAppViewControllerDidFinishInitialLoad:(id)a0;
- (void)webAppViewController:(id)a0 viewServiceDidTerminateWithError:(id)a1;
- (id)initWithWebClip:(id)a0;
- (void)timeLimitForLoadCompletionExpired;
- (void)_cancelHideSnapshotTimer;
- (void)_setUpContentViewController:(id)a0;
- (void)hideLoadingView;
- (void)_removeRemoteView;
- (void)openURLWithCustomSchemeIfNeeded;

@end
