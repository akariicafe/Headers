@class SBMainWorkspaceTransaction, SBAppStatusBarSettingsAssertion, SBAppSwitcherSettings, SBAssistantRootViewController, SBAssistantController, SBTransientOverlayPresentationManager, UINotificationFeedbackGenerator, SBTransientOverlayViewController;

@interface SBModalUIFluidDismissGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction {
    SBAppSwitcherSettings *_settings;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    UINotificationFeedbackGenerator *_dismissalFeedbackGenerator;
    SBAssistantRootViewController *_assistantRootViewController;
    SBTransientOverlayPresentationManager *_transientOverlayPresentationManager;
    SBTransientOverlayViewController *_transientOverlayViewController;
    struct CGPoint { double x; double y; } _dismissingViewTouchOffset;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originalBounds;
    struct CGPoint { double x; double y; } _originalCenter;
    BOOL _initiatedFromBottomEdge;
    BOOL _hasPreservedInputViews;
    BOOL _isDismissing;
}

@property (retain, nonatomic) SBAssistantController *assistantController;
@property (readonly, nonatomic) long long dismissalType;
@property (retain, nonatomic) SBMainWorkspaceTransaction *currentTransaction;
@property (nonatomic) double dismissalThreshold;
@property (nonatomic) BOOL animateGestureCancelationOrFailure;

- (BOOL)_canBeInterrupted;
- (BOOL)canInterruptForTransitionRequest:(id)a0;
- (void)_begin;
- (void)_didComplete;
- (id)_layoutSettings;
- (void).cxx_destruct;
- (void)_didInterruptWithReason:(id)a0;
- (id)_dismissalFeedbackGenerator;
- (void)_beginWithGesture:(id)a0;
- (id)_viewForGesture;
- (void)_updateWithGesture:(id)a0;
- (void)_finishWithGesture:(id)a0;
- (void)_finishWithCompletionType:(long long)a0;
- (void)_updateDismissingViewLayoutAndStyleForGesture;
- (BOOL)_shouldDismissImmmediatelyAtFullGestureProgress;
- (double)_swipeUpGestureProgress;
- (void)_finishInteractionAndDismiss:(BOOL)a0 animated:(BOOL)a1;
- (void)_dismissClientAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (double)_zoomOutDelay;
- (double)_backgroundWeightingForDismissal:(BOOL)a0;
- (double)_scaleForDismissal;
- (double)_scaleForGestureProgress;
- (void)_setFluidDismissalState:(id)a0;
- (void)_cleanupHierarchyForDismissal:(BOOL)a0;
- (double)_yOffsetForGestureProgress;
- (double)_swipeUpGestureTranslation;
- (double)_backgroundWeightingForGestureProgress;
- (double)_clientAnimationsDelay;
- (double)_hapticDelay;
- (long long)_notificationFeedbackType;
- (id)initWithTransitionRequest:(id)a0 assistantController:(id)a1 dismissalType:(long long)a2 initiatedFromBottomEdge:(BOOL)a3;
- (void)systemGestureStateChanged:(id)a0;

@end
