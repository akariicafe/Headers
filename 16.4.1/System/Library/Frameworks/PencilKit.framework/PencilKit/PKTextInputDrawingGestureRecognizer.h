@class UITouch, NSString, PKTextInputElement;
@protocol PKTextInputDrawingGestureRecognizerDelegate, PKDrawingGestureTarget;

@interface PKTextInputDrawingGestureRecognizer : UIGestureRecognizer <PKDrawingGestureRecognizerProtocol, PKTextInputDebugStateReporting> {
    BOOL _waitingForTargetElementSearch;
    BOOL _requiresTargetElementToBegin;
    BOOL _requiresPastTapToBegin;
    double _drawStartTime;
    double _touchesBeganTimestamp;
    struct CGPoint { double x; double y; } _drawTouchStartPoint;
    id /* block */ _timeoutBlock;
    id /* block */ _longPressTentativeBlock;
    id /* block */ _longPressSuccessBlock;
    id /* block */ _notMovingCancelBlock;
    id /* block */ _gestureEnvironmentResetTimeoutBlock;
}

@property (retain, nonatomic) UITouch *drawingTouch;
@property (nonatomic, setter=_setDrawingTargetIsDrawing:) BOOL drawingTargetIsDrawing;
@property (nonatomic, setter=_setStrokeAcceptanceState:) long long strokeAcceptanceState;
@property (nonatomic, setter=_setLongPressState:) long long longPressState;
@property (nonatomic, setter=_setPanState:) long long panState;
@property (nonatomic, setter=_setPanDirection:) long long panDirection;
@property (retain, nonatomic) PKTextInputElement *targetElement;
@property (weak, nonatomic) id<PKTextInputDrawingGestureRecognizerDelegate> delegate;
@property (nonatomic) BOOL isReplaying;
@property (weak, nonatomic) id<PKDrawingGestureTarget> drawingTarget;
@property (readonly, nonatomic) unsigned long long activeInputProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_systemGestureClassesToAvoid;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)end;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)a0;
- (void)touchesEstimatedPropertiesUpdated:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)cancel;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (void)reset;
- (void)_updatePanGestureStateForTouch:(id)a0;
- (double)timeIntervalSinceStartOfGesture;
- (void)_acceptStrokeTimeoutTriggered;
- (void)_beginDrawingIfNeeded;
- (void)_cancelLongPressTimerBlocks;
- (void)_cancelNotMovingCancellationBlock;
- (void)_cancelOrFailGesture;
- (void)_cancelScheduledStrokeAcceptanceBlock;
- (double)_distanceFromStartPositionForTouch:(id)a0;
- (void)_drawingBegan;
- (void)_drawingEnded;
- (void)_drawingMoved:(id)a0;
- (void)_endDrawing;
- (void)_enumerateTouchesForUpdateWithEvent:(id)a0 block:(id /* block */)a1;
- (void)_evaluateCancelIfNotMoving;
- (void)_evaluateMovingToBeganStateUseTimestampFromTouch:(BOOL)a0;
- (BOOL)_gestureStartedInsideTargetElement;
- (BOOL)_hasMovedPastMinimumPanThresholdForTouch:(id)a0;
- (BOOL)_hasMovedPastScrollThresholdForTouch:(id)a0;
- (BOOL)_isValidLongPress;
- (BOOL)_isValidLongPressOverDuration:(double)a0;
- (BOOL)_isWithinLongPressDistanceForTouch:(id)a0;
- (void)_longPressSuccessTimerFired;
- (void)_longPressTentativeTimerFired;
- (long long)_panDirectionForTouch:(id)a0;
- (void)_replayDrawingBegan:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; })a0;
- (void)_replayDrawingCancelled;
- (void)_replayDrawingEnded;
- (void)_replayDrawingMoved:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; })a0;
- (void)_scheduleLongPressTimerBlocks;
- (void)_updateLongPressValidityForTouch:(id)a0;
- (void)_updatePanStateForCandidateElements:(id)a0;
- (void)_updateStrokeAcceptanceStateUseTimestampFromTouch:(BOOL)a0;
- (void)cancelDrawing;
- (void)finishedElementFindingWithElement:(id)a0 candidateElements:(id)a1;
- (BOOL)hasMovedPastTapUseTimestampFromTouch:(BOOL)a0;
- (void)reportDebugStateDescription:(id /* block */)a0;
- (double)timeIntervalSinceTouchesBeganForTouch:(id)a0;

@end
