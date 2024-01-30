@class UIWindow, NSString, NSHashTable, NSMutableSet, CALayer, UIViewController;
@protocol BSInvalidatable;

@interface SBHideSharePlayContentFromSharedScreenController : NSObject <SBBannerManagerTransitionObserver, SBDraggingSystemObserver, SBMousePointerHardwareConnectionObserver, SBPIPControllerObserver> {
    NSHashTable *_trackedPresentables;
    NSHashTable *_windowsBeingHiddenWithDisableUpdateMask;
    NSHashTable *_viewControllersWithDisableUpdateMasks;
    UIViewController *_pipViewControllerBeingHiddenWithDisableUpdateMask;
    NSMutableSet *_activeAssertions;
    UIWindow *_cloneTerminatingWindow;
    CALayer *_cloneTerminatingLayer;
    BOOL _isControlCenterFullyPresented;
    long long _numberOfActiveDragSessions;
    id<BSInvalidatable> _simulatedAssertion;
    BOOL _isObservingPIPWindowLevelsAndVisibility;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_addAssertion:(id)a0;
- (void)dragSessionDidEnd:(id)a0;
- (void)dragSessionDidBegin:(id)a0;
- (void)bannerManager:(id)a0 willPresentPresentable:(id)a1 withTransitionCoordinator:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)bannerManager:(id)a0 willDismissPresentable:(id)a1 withTransitionCoordinator:(id)a2;
- (void)dealloc;
- (void)mousePointerManager:(id)a0 hardwarePointingDeviceAttachedDidChange:(BOOL)a1;
- (id)acquireHideSharePlayContentFromClonedDisplaysAssertionForReason:(id)a0;
- (void)bannerManagerDidUpdateWindowLevel:(id)a0;
- (void)_handleControlCenterDidPresent;
- (void)_handleControlCenterWillDismiss;
- (void)_removeAssertion:(id)a0;
- (void)_resolveHidingBehavior;
- (void)_startObservingForActiveHideAssertionIfNeeded;
- (void)_stopObservingForActiveHideAssertionIfNeeded;
- (id)_pipViewControllerToHide;
- (void)_stopHidingViewControllerFromClonedDisplaysIfNeeded:(id)a0;
- (BOOL)_isCoverSheetVisible;
- (id)_bannerWindow;
- (BOOL)_deviceHasDaemonSceneThatShouldBeShared;
- (id)_faceTimePIPWindow;
- (id)_systemNotesWindow;
- (BOOL)_isCoverSheetFullyPresented;
- (void)_startHidingViewControllerFromClonedDisplaysIfNeeded:(id)a0;
- (void)_stopHidingWindowFromClonedDisplaysIfNeeded:(id)a0;
- (void)_startHidingWindowFromClonedDisplaysIfNeeded:(id)a0;
- (void)_windowVisibilityDidChange:(id)a0;
- (void)_startTrackingPresentable:(id)a0;
- (void)_stopTrackingPresentable:(id)a0;
- (BOOL)_canShareDaemonScenes;
- (BOOL)_deviceHasDaemonSceneThatShouldBeSharedIfPossible;

@end
