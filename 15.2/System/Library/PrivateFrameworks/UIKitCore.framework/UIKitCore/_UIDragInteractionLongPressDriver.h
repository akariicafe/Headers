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

- (BOOL)hasExceededAllowableMovement;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)isGestureRecognizerForDragInitiation:(id)a0;
- (void)didTransitionToPreparing;
- (BOOL)canExcludeCompetingGestureRecognizer:(id)a0;
- (double)translationInWindow;
- (void)setAllowedTouchTypes:(id)a0;
- (void)didTransitionToDeferred;
- (BOOL)shouldDelayCompetingGestureRecognizer:(id)a0;
- (void)setAutomaticallyAddsFailureRelationships:(BOOL)a0;
- (void)setLiftMoveHysteresis:(double)a0;
- (void)attachToView:(id)a0;
- (void)detachFromView:(id)a0;
- (void)didTransitionToInactiveState;
- (void)didTransitionToCancelState;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)didTransitionToBeginState;
- (void)setLiftDelay:(double)a0;
- (void)didTransitionToInflightState;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (id)initWithBehavior:(unsigned long long)a0;
- (void)openGateCancelingAddItemsGestures;
- (void)invalidateCompetingGestureRecognizerGateTimer;
- (BOOL)_wantsTimeDelayedFailureRequirementGate;
- (void).cxx_destruct;
- (id)init;
- (void)_gateCompetingGestureRecognizers;
- (void)_dragInitiationGestureStateChanged:(id)a0;
- (void)invalidateCancellationTimer;
- (BOOL)hasMoveHysteresisBeenReached;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)openCompetingGestureRecognizerGateCancelingGestures:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_gestureRecognizerFailed:(id)a0;
- (void)reset;
- (void)_updateLiftMoveHysteresisInDragInitiationGesture;

@end
