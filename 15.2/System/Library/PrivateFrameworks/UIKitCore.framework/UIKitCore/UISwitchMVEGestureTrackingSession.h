@class UIView, UIGestureRecognizer;
@protocol UISwitchMVEGestureTrackingSessionElement;

@interface UISwitchMVEGestureTrackingSession : NSObject

@property (readonly, nonatomic) double naturalLayoutDirection;
@property (readonly, nonatomic) double movementVectorForPanInitiatedChangeY;
@property (readonly, nonatomic) double movementVectorForPanInitiatedChangeTargetOnValue;
@property (readonly, nonatomic) UIGestureRecognizer *pendingDisplayedOnValueInitiatingGesture;
@property (readonly, nonatomic) BOOL pendingDisplayedOnValue;
@property (readonly, nonatomic) BOOL lastCommitedOnValue;
@property (weak, nonatomic) UIView<UISwitchMVEGestureTrackingSessionElement> *visualElement;
@property (nonatomic) BOOL displayedOnValue;

+ (BOOL)gestureIsInEndState:(long long)a0;

- (BOOL)_isMovementDirectionAndMagnitudeEnoughToPerformOnOffChange:(double)a0;
- (id)initWithVisualElement:(id)a0;
- (BOOL)canApplyPendingOnValueForGesture:(id)a0;
- (void)_sendStateChangeActionsIfNecessary;
- (void)applyPendingDisplayedOnValueWithoutSendingActions;
- (void)invalidatePendingOnValue;
- (BOOL)updatePendingDisplayedOnValueIfMovementIsEnoughToInitiateChange:(double)a0 forGesture:(id)a1;
- (void).cxx_destruct;
- (BOOL)pendingDisplayedOnValueIsValid;
- (void)_applyPendingChangesIfNecessary;
- (void)applyPendingDisplayedOnValueAndSendActions;
- (void)reset;
- (BOOL)_isMovementDirectionTrackableForPossibleOnOffChange:(double)a0;
- (void)_updateMovementVectorForPanInitiatedChanges;
- (void)setPendingDisplayedOnValue:(BOOL)a0 forGesture:(id)a1;

@end
