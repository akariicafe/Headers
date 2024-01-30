@class UITextGestureTuning, UIResponder, UIDelayedAction, _UITextLoupeResponderProxy;
@protocol UITextLoupeInteractionBehaviorDelegate;

@interface UITextLoupeInteraction : UITextInteraction <_UITextLoupeResponderProxyDelegate> {
    UIDelayedAction *_delayedLoupeAction;
    UIDelayedAction *_delayedSelectionAction;
    BOOL _hasPerformedInteraction;
    struct CGPoint { double x; double y; } _initialPointFromPreviousInteraction;
}

@property (retain, nonatomic) _UITextLoupeResponderProxy *responderProxy;
@property (nonatomic) long long inheritedGranularity;
@property (nonatomic) BOOL shouldUseLineThreshold;
@property (nonatomic) BOOL strongerBiasAgainstUp;
@property (readonly, nonatomic) UIResponder *responder;
@property (readonly, nonatomic) UITextGestureTuning *gestureTuning;
@property (retain, nonatomic) id<UITextLoupeInteractionBehaviorDelegate> behaviorDelegate;

- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)willMoveToView:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)didMoveToView:(id)a0;
- (void)loupeGestureWithState:(long long)a0 location:(id /* block */)a1 translation:(id /* block */)a2 velocity:(id /* block */)a3 modifierFlags:(long long)a4 shouldCancel:(BOOL *)a5;
- (void)finishSetup;
- (void)updateVisibilityOffsetForGesture:(id)a0;
- (void).cxx_destruct;
- (void)updateInitialPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)assertInitialVerticalOffset:(double)a0 fromTopOfCaret:(double)a1;
- (void)loupeGesture:(id)a0;
- (void)_createGestureTuningIfNecessary;
- (void)setupGestureExclusionRequirements;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)translationIsWithinAllowableMovement:(struct CGPoint { double x0; double x1; })a0;
- (void)_processGestureForCustomHighlighter:(id)a0;
- (struct CGPoint { double x0; double x1; })pointIfPlacedCarefully:(struct CGPoint { double x0; double x1; })a0;
- (void)updateOrCancelDelayedLoupeActionWithPoint:(struct CGPoint { double x0; double x1; })a0 translation:(struct CGPoint { double x0; double x1; })a1;
- (void)selectToHere:(id)a0;
- (BOOL)_shouldAllowEnforcedTouchTypeForTouch:(id)a0 forGestureRecognizer:(id)a1;
- (void)delayedLoupeAction:(id)a0;
- (struct CGPoint { double x0; double x1; })touchAlignedPointForPoint:(struct CGPoint { double x0; double x1; })a0 translation:(struct CGPoint { double x0; double x1; })a1;
- (void)delayedSelectionAction:(id)a0;
- (BOOL)interaction_gestureRecognizerShouldBegin:(id)a0;
- (void)cancelDelayedLoupeActionIfNecessary;
- (void)setupDelayedLoupeActionWithInitialPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)willBeginExternalGesture;
- (id)initWithBehaviorDelegate:(id)a0;
- (void)_performGestureType:(long long)a0 state:(long long)a1 location:(struct CGPoint { double x0; double x1; })a2 locationOfFirstTouch:(struct CGPoint { double x0; double x1; })a3 forTouchType:(long long)a4;
- (void)delayedDisplayLoupe:(id)a0;
- (void)canBeginDragCursor:(id)a0;

@end
