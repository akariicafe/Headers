@class _UIDragLiftGestureRecognizer, NSString, UIDelayedAction, _UIRelationshipGestureRecognizer;

@interface _UIDragInteractionLongPressDriver : _UIDragInteractionDriver <UIGestureRecognizerDelegate> {
    UIDelayedAction *_gateTimer;
    UIDelayedAction *_cancellationTimer;
}

@property (readonly, nonatomic) _UIDragLiftGestureRecognizer *gestureRecognizerForDragInitiation;
@property (readonly, nonatomic) _UIRelationshipGestureRecognizer *gestureRecognizerForFailureRelationship;
@property (readonly, nonatomic) _UIRelationshipGestureRecognizer *gestureRecognizerForExclusionRelationship;
@property (readonly, nonatomic) unsigned long long behavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didTransitionToPreparing;
- (void)detachFromView:(id)a0;
- (void)setAutomaticallyAddsFailureRelationships:(BOOL)a0;
- (BOOL)hasExceededAllowableMovement;
- (void)attachToView:(id)a0;
- (void)didTransitionToCancelState;
- (void)_gestureRecognizerFailed:(id)a0;
- (void)didTransitionToInactiveState;
- (void)didTransitionToBeginState;
- (void)setLiftMoveHysteresis:(double)a0;
- (void)didTransitionToDeferred;
- (void)didTransitionToInflightState;
- (void)setLiftDelay:(double)a0;
- (void)setAllowedTouchTypes:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (double)translationInWindow;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)hasMoveHysteresisBeenReached;
- (id)init;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)reset;
- (void)openGateCancelingAddItemsGestures;
- (void)invalidateCompetingGestureRecognizerGateTimer;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)shouldDelayCompetingGestureRecognizer:(id)a0;
- (BOOL)isGestureRecognizerForDragInitiation:(id)a0;
- (BOOL)_wantsTimeDelayedFailureRequirementGate;
- (void)invalidateCancellationTimer;
- (BOOL)canExcludeCompetingGestureRecognizer:(id)a0;
- (void)_gateCompetingGestureRecognizers;
- (id)initWithBehavior:(unsigned long long)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_updateLiftMoveHysteresisInDragInitiationGesture;
- (void)_dragInitiationGestureStateChanged:(id)a0;
- (void)openCompetingGestureRecognizerGateCancelingGestures:(id)a0;

@end
