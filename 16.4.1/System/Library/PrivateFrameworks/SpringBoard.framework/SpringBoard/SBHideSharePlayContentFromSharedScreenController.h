@class UIWindow, NSString, NSHashTable, NSMutableSet, CALayer, UIViewController;
@protocol BSInvalidatable;

@interface SBHideSharePlayContentFromSharedScreenController : NSObject <SBBannerManagerTransitionObserver, SBDraggingSystemObserver, SBMousePointerHardwareConnectionObserver> {
    NSHashTable *_trackedPresentables;
    NSHashTable *_windowsBeingHiddenWithDisableUpdateMask;
    NSHashTable *_viewControllersWithDisableUpdateMasks;
    UIViewController *_pipViewControllerBeingHiddenWithDisableUpdateMask;
    NSMutableSet *_activeAssertions;
    UIWindow *_cloneTerminatingWindow;
    CALayer *_cloneTerminatingLayer;
    BOOL _isControlCenterFullyPresentedOnMainDisplay;
    long long _numberOfActiveDragSessions;
    id<BSInvalidatable> _simulatedAssertion;
    BOOL _isObservingPIPWindowLevelsAndVisibility;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mousePointerManager:(id)a0 hardwarePointingDeviceAttachedDidChange:(BOOL)a1;
- (void)dealloc;
- (void)bannerManager:(id)a0 willPresentPresentable:(id)a1 withTransitionCoordinator:(id)a2;
- (void)bannerManager:(id)a0 willDismissPresentable:(id)a1 withTransitionCoordinator:(id)a2;
- (id)init;
- (void)_addAssertion:(id)a0;
- (void).cxx_destruct;
- (void)dragSessionDidBegin:(id)a0;
- (void)dragSessionDidEnd:(id)a0;
- (void)_handleControlCenterWillDismiss;
- (BOOL)_canShareDaemonScenes;
- (double)_coverSheetWindowLevel;
- (BOOL)_deviceHasDaemonSceneThatShouldBeShared;
- (BOOL)_deviceHasDaemonSceneThatShouldBeSharedIfPossible;
- (void)_handleControlCenterDidPresent;
- (BOOL)_isCoverSheetFullyPresented;
- (BOOL)_isCoverSheetVisible;
- (BOOL)_isPipViewControllerToHideOnMainDisplay;
- (id)_pipViewControllerToHide;
- (void)_removeAssertion:(id)a0;
- (void)_resolveHidingBehavior;
- (void)_startHidingViewControllerFromClonedDisplaysIfNeeded:(id)a0;
- (void)_startHidingWindowFromClonedDisplaysIfNeeded:(id)a0;
- (void)_startObservingForActiveHideAssertionIfNeeded;
- (void)_startTrackingPresentable:(id)a0;
- (void)_stopHidingViewControllerFromClonedDisplaysIfNeeded:(id)a0;
- (void)_stopHidingWindowFromClonedDisplaysIfNeeded:(id)a0;
- (void)_stopObservingForActiveHideAssertionIfNeeded;
- (void)_stopTrackingPresentable:(id)a0;
- (id)_systemNotesWindow;
- (void)_windowVisibilityDidChange:(id)a0;
- (id)acquireHideSharePlayContentFromClonedDisplaysAssertionForReason:(id)a0;
- (void)bannerManagerDidUpdateWindowLevel:(id)a0;

@end
