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

- (void)_gestureRecognizerFailed:(id)a0;
- (void)setLiftDelay:(double)a0;
- (void)didTransitionToPreparing;
- (BOOL)hasExceededAllowableMovement;
- (BOOL)isGestureRecognizerForDragInitiation:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)_updateLiftMoveHysteresisInDragInitiationGesture;
- (BOOL)shouldDelayCompetingGestureRecognizer:(id)a0;
- (void)didTransitionToInflightState;
- (void)setLiftMoveHysteresis:(double)a0;
- (void)setAllowedTouchTypes:(id)a0;
- (id)initWithBehavior:(unsigned long long)a0;
- (void)didTransitionToInactiveState;
- (void)setAutomaticallyAddsFailureRelationships:(BOOL)a0;
- (void)detachFromView:(id)a0;
- (BOOL)hasMoveHysteresisBeenReached;
- (void)didTransitionToCancelState;
- (void)didTransitionToBeginState;
- (void)didTransitionToDeferred;
- (void)attachToView:(id)a0;
- (void)_gateCompetingGestureRecognizers;
- (void)invalidateCompetingGestureRecognizerGateTimer;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)openGateCancelingAddItemsGestures;
- (double)translationInWindow;
- (void)_dragInitiationGestureStateChanged:(id)a0;
- (BOOL)_wantsTimeDelayedFailureRequirementGate;
- (id)init;
- (void)invalidateCancellationTimer;
- (void)openCompetingGestureRecognizerGateCancelingGestures:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)canExcludeCompetingGestureRecognizer:(id)a0;

@end
