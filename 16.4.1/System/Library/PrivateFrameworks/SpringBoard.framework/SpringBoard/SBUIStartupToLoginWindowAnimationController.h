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

- (id)_getTransitionWindow;
- (void)_setHidden:(BOOL)a0;
- (id)initWithTransitionContextProvider:(id)a0;
- (BOOL)_shouldDismissBanner;
- (void)_startAnimation;
- (id)animationSettings;
- (void)loginAppDidFinishLaunching:(id)a0;
- (id)initWithTransitionContextProvider:(id)a0 overlay:(id)a1;
- (void).cxx_destruct;
- (void)_cleanupAnimation;

@end
