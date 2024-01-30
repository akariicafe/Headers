@class NSArray, NSString, UIView;
@protocol _UIDragInteractionDriverDelegate;

@interface _UIDragInteractionDriver : NSObject <_UIDragInteractionDriving> {
    struct _UIDragInteractionDriverStateMachine { unsigned long long state; unsigned long long *eventsQueueEnd; } _stateMachine;
}

@property (nonatomic) BOOL shouldAnimateLift;
@property (nonatomic) struct CGPoint { double x; double y; } initialLocationInWindow;
@property (weak, nonatomic) id<_UIDragInteractionDriverDelegate> delegate;
@property (weak, nonatomic) UIView *view;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) double liftDelay;
@property (nonatomic) double liftMoveHysteresis;
@property (nonatomic) BOOL additionalTouchesCancelLift;
@property (nonatomic) BOOL competingLongPressOnLift;
@property (nonatomic) BOOL allowsSimultaneousRecognitionDuringLift;
@property (nonatomic) double cancellationDelay;
@property (nonatomic) double competingLongPressDelay;
@property (nonatomic) BOOL cancellationTimerEnabled;
@property (nonatomic) BOOL automaticallyAddsFailureRelationships;
@property (copy, nonatomic) NSArray *allowedTouchTypes;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didTransitionToPreparing;
- (void)detachFromView:(id)a0;
- (void)cancel;
- (void)attachToView:(id)a0;
- (void)didTransitionToCancelState;
- (void)didTransitionToInactiveState;
- (void)didTransitionToBeginState;
- (void)didTransitionToDeferred;
- (void)didTransitionToInflightState;
- (void)_handleEvent:(unsigned long long)a0;
- (id)init;
- (unsigned long long)_state;
- (void).cxx_destruct;
- (BOOL)isGestureRecognizerForDragInitiation:(id)a0;

@end
