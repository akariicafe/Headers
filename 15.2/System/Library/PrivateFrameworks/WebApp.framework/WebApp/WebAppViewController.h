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

- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void).cxx_destruct;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (void)_connectToService;
- (id)initWithWebClip:(id)a0;
- (void)webAppViewController:(id)a0 didChangeLoadingState:(BOOL)a1;
- (void)webAppViewControllerDidFinishInitialLoad:(id)a0;
- (void)webAppViewController:(id)a0 viewServiceDidTerminateWithError:(id)a1;
- (void)timeLimitForLoadCompletionExpired;
- (void)_cancelHideSnapshotTimer;
- (void)_setUpContentViewController:(id)a0;
- (void)hideLoadingView;
- (void)_removeRemoteView;
- (void)openURLWithCustomSchemeIfNeeded;

@end
