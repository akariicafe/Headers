@class SBAppSwitcherSettings, SBWindowSceneStatusBarSettingsAssertion, SBMainWorkspaceTransaction, SBTransientOverlayViewController, SBAssistantRootViewController, SBWindowScene, UINotificationFeedbackGenerator;
@protocol SBAssistantSceneControlling, SBTransientOverlayPresenting;

@interface SBModalUIFluidDismissGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction {
    SBAppSwitcherSettings *_settings;
    SBWindowSceneStatusBarSettingsAssertion *_statusBarAssertion;
    UINotificationFeedbackGenerator *_dismissalFeedbackGenerator;
    SBAssistantRootViewController *_assistantRootViewController;
    id<SBTransientOverlayPresenting> _transientOverlayPresenter;
    SBTransientOverlayViewController *_transientOverlayViewController;
    struct CGPoint { double x; double y; } _dismissingViewTouchOffset;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originalBounds;
    struct CGPoint { double x; double y; } _originalCenter;
    BOOL _initiatedFromBottomEdge;
    BOOL _hasPreservedInputViews;
    BOOL _isDismissing;
}

@property (weak, nonatomic) SBWindowScene *windowScene;
@property (retain, nonatomic) id<SBAssistantSceneControlling> assistantController;
@property (readonly, nonatomic) long long dismissalType;
@property (retain, nonatomic) SBMainWorkspaceTransaction *currentTransaction;
@property (nonatomic) double dismissalThreshold;
@property (nonatomic) BOOL animateGestureCancelationOrFailure;

- (void)_didInterruptWithReason:(id)a0;
- (void)_begin;
- (BOOL)canInterruptForTransitionRequest:(id)a0;
- (void)_didComplete;
- (BOOL)_canBeInterrupted;
- (id)_layoutSettings;
- (void).cxx_destruct;
- (id)_dismissalFeedbackGenerator;
- (id)_viewForGesture;
- (double)_backgroundWeightingForDismissal:(BOOL)a0;
- (double)_backgroundWeightingForGestureProgress;
- (void)_beginWithGesture:(id)a0;
- (void)_cleanupHierarchyForDismissal:(BOOL)a0;
- (double)_clientAnimationsDelay;
- (void)_dismissClientAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_finishInteractionAndDismiss:(BOOL)a0 animated:(BOOL)a1;
- (void)_finishWithCompletionType:(long long)a0;
- (void)_finishWithGesture:(id)a0;
- (double)_hapticDelay;
- (long long)_notificationFeedbackType;
- (double)_scaleForDismissal;
- (double)_scaleForGestureProgress;
- (void)_setFluidDismissalState:(id)a0;
- (BOOL)_shouldDismissImmmediatelyAtFullGestureProgress;
- (double)_swipeUpGestureProgress;
- (double)_swipeUpGestureTranslation;
- (void)_updateDismissingViewLayoutAndStyleForGesture;
- (void)_updateWithGesture:(id)a0;
- (double)_yOffsetForGestureProgress;
- (double)_zoomOutDelay;
- (id)initWithTransitionRequest:(id)a0 windowScene:(id)a1 dismissalType:(long long)a2 initiatedFromBottomEdge:(BOOL)a3;
- (void)systemGestureStateChanged:(id)a0;

@end
