@class NSString, SBWindow, BKSDisplayRenderOverlay, BSTransaction;

@interface SBUIStartupToLoginWindowAnimationController : SBUIMainScreenAnimationController <SBLoginAppContainerViewControllerObserver> {
    SBWindow *_transitionWindow;
    BKSDisplayRenderOverlay *_persistentSnapshotOverlay;
    BSTransaction *_waitForLoginAppToFinishLaunchingTransaction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)animationSettings;
- (void)_cleanupAnimation;
- (void).cxx_destruct;
- (void)_setHidden:(BOOL)a0;
- (void)_startAnimation;
- (id)initWithTransitionContextProvider:(id)a0 overlay:(id)a1;
- (id)initWithTransitionContextProvider:(id)a0;
- (id)_getTransitionWindow;
- (BOOL)_shouldDismissBanner;
- (void)loginAppDidFinishLaunching:(id)a0;

@end
