@class UIDragInteractionContextImpl, NSArray, NSString, _UIDragSessionImpl, UIView, _UIDragAddItemsGesture;
@protocol _UIDragInteractionDriving, UIDragInteractionEffect, _UIDragInteractionPresentationDelegate, UIDragInteractionDelegate;

@interface UIDragInteraction : NSObject <UIGestureRecognizerDelegate, _UIViewInternalDraggingSourceDelegate, _UIDragInteractionDriverDelegate, UIInteraction> {
    BOOL _didSetEnabled;
    BOOL _enabled;
    _UIDragSessionImpl *_preliminarySession;
    _UIDragSessionImpl *_sessionForAddingItems;
    UIDragInteractionContextImpl *_interactionContext;
    _UIDragAddItemsGesture *_gestureRecognizerForAddingItems;
}

@property (class, readonly, nonatomic, getter=isEnabledByDefault) BOOL enabledByDefault;

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic, getter=_initiationDriver, setter=_setInitiationDriver:) id<_UIDragInteractionDriving> initiationDriver;
@property (retain, nonatomic, getter=_pointerInitiationDriver, setter=_setPointerInitiationDriver:) id<_UIDragInteractionDriving> pointerInitiationDriver;
@property (weak, nonatomic, getter=_presentationDelegate, setter=_setPresentationDelegate:) id<_UIDragInteractionPresentationDelegate> presentationDelegate;
@property (retain, nonatomic) id<UIDragInteractionEffect> interactionEffect;
@property (nonatomic, getter=_liftDelay, setter=_setLiftDelay:) double liftDelay;
@property (nonatomic, getter=_pointerLiftDelay, setter=_setPointerLiftDelay:) double pointerLiftDelay;
@property (nonatomic, getter=_isCancellationTimerEnabled, setter=_setCancellationTimerEnabled:) BOOL cancellationTimerEnabled;
@property (nonatomic, getter=_cancellationDelay, setter=_setCancellationDelay:) double cancellationDelay;
@property (nonatomic, getter=_competingLongPressOnLift, setter=_setCompetingLongPressOnLift:) BOOL competingLongPressOnLift;
@property (nonatomic, getter=_competingLongPressDelay, setter=_setCompetingLongPressDelay:) double competingLongPressDelay;
@property (nonatomic, getter=_liftMoveHysteresis, setter=_setLiftMoveHysteresis:) double liftMoveHysteresis;
@property (nonatomic, getter=_pointerLiftMoveHysteresis, setter=_setPointerLiftMoveHysteresis:) double pointerLiftMoveHysteresis;
@property (nonatomic, getter=_allowsPointerDragBeforeLiftDelay, setter=_setAllowsPointerDragBeforeLiftDelay:) BOOL allowsPointerDragBeforeLiftDelay;
@property (nonatomic, getter=_automaticallyAddsFailureRelationships, setter=_setAutomaticallyAddsFailureRelationships:) BOOL automaticallyAddsFailureRelationships;
@property (nonatomic, getter=_allowsMultipleSessions, setter=_setAllowsMultipleSessions:) BOOL allowsMultipleSessions;
@property (nonatomic, getter=_addItemsGestureConfiguration, setter=_setAddItemsGestureConfiguration:) long long addItemsGestureConfiguration;
@property (nonatomic, getter=_additionalTouchesCancelLift, setter=_setAdditionalTouchesCancelLift:) BOOL additionalTouchesCancelLift;
@property (copy, nonatomic, getter=_allowedTouchTypes, setter=_setAllowedTouchTypes:) NSArray *allowedTouchTypes;
@property (readonly, weak, nonatomic) id<UIDragInteractionDelegate> delegate;
@property (nonatomic) BOOL allowsSimultaneousRecognitionDuringLift;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_cancelAllDrags;

- (BOOL)_queryDelegate:(id)a0 forItemsForAddingToSession:(id)a1 atPoint:(struct CGPoint { double x0; double x1; })a2 completion:(id /* block */)a3;
- (BOOL)_accessibilityAddItemsToDragSessionAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_session:(id)a0 willAddItems:(id)a1 forInteraction:(id)a2;
- (void)_immediatelyBeginDragWithTouch:(id)a0 completion:(id /* block */)a1;
- (void)_sessionDidTransferItems:(id)a0;
- (void)_cancelDrag;
- (BOOL)dragDriver:(id)a0 shouldDelayCompetingGestureRecognizer:(id)a1;
- (void)_handoffSession:(id)a0;
- (void)_gestureRecognizerFailed:(id)a0;
- (void)_updateDriverParameters;
- (BOOL)_canDragFromView:(id)a0;
- (id)_queryDelegate:(id)a0 forItemsForBeginningSession:(id)a1;
- (void)_sessionDidMove:(id)a0;
- (id)_session:(id)a0 targetedPreviewForCancellingItem:(id)a1 duiPreview:(id)a2 snapshotView:(id)a3 window:(id)a4;
- (BOOL)dragDriver:(id)a0 shouldBeginAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)_finalizeLiftCancellation;
- (void)_sessionWillEnd:(id)a0 withOperation:(unsigned long long)a1;
- (BOOL)_addItemsWithTouchPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_session:(id)a0 item:(id)a1 willCancelWithAnimator:(id)a2;
- (void)_viewFailedToDrag:(id)a0;
- (BOOL)_viewSupportsSystemDrag:(id)a0;
- (void)_sessionWillBegin:(id)a0;
- (void)dragDriverCancelLift:(id)a0;
- (BOOL)dragDriver:(id)a0 prepareToLiftWithCompletion:(id /* block */)a1;
- (void)setDragCancellationDelay:(double)a0;
- (id)_requiredContextIDsForDragSessionInView:(id)a0;
- (BOOL)dragDriverWantsExclusionOverride:(id)a0;
- (unsigned long long)_session:(id)a0 sourceOperationMaskForDraggingWithinApp:(BOOL)a1;
- (long long)_dataOwnerOfDragFromView:(id)a0;
- (BOOL)_sessionPrefersFullSizePreviews:(id)a0;
- (void)dragDriverCancelAddItemsGesture:(id)a0;
- (void)willMoveToView:(id)a0;
- (BOOL)_accessibilityCanAddItemsToDragSession;
- (void)_endLiftWithoutDragging;
- (void)dragDriver:(id)a0 beginDragWithTouches:(id)a1 itemUpdater:(id /* block */)a2 beginningSessionHandler:(id /* block */)a3;
- (void)setLiftDelay:(double)a0;
- (void)_accessibilityPrepareForDragAtPoint:(struct CGPoint { double x0; double x1; })a0 completion:(id /* block */)a1;
- (double)liftDelay;
- (struct CGPoint { double x0; double x1; })_locationInView:(id)a0;
- (void)_beginDragWithTouches:(id)a0 itemUpdater:(id /* block */)a1;
- (BOOL)_sessionDynamicallyUpdatesPrefersFullSizePreviews:(id)a0;
- (BOOL)dragDriverBeginLift:(id)a0;
- (BOOL)_prepareForLiftAtPoint:(struct CGPoint { double x0; double x1; })a0 invocationType:(long long)a1 completion:(id /* block */)a2;
- (void)_view:(id)a0 willBeginDraggingWithSession:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)_updateInteractionEffectWithContext:(id)a0 notifyDelegate:(BOOL)a1;
- (void)didMoveToView:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)_isActive;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)_sessionDidEnd:(id)a0 withOperation:(unsigned long long)a1;
- (void)_queryDelegate:(id)a0 forLiftPreviewsUsingItems:(id)a1 session:(id)a2;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)_beginLiftForItems:(id)a0 session:(id)a1 animated:(BOOL)a2;
- (void)_cancelLift;
- (BOOL)_session:(id)a0 item:(id)a1 shouldDelaySetDownAnimationWithCompletion:(id /* block */)a2;
- (void)_sessionHandedOffDragImage:(id)a0;
- (id)_itemsToDragFromView:(id)a0;
- (id)initWithDelegate:(id)a0;
- (BOOL)dragDriver:(id)a0 competingGestureRecognizerShouldDelayLift:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)dragDriver:(id)a0 canExcludeCompetingGestureRecognizer:(id)a1;
- (id)_session:(id)a0 customSpringAnimationBehaviorForCancellingItem:(id)a1;

@end
