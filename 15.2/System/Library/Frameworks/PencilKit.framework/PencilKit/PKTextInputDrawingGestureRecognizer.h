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

- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)end;
- (void)setState:(long long)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)cancel;
- (void)reset;
- (void)touchesEstimatedPropertiesUpdated:(id)a0;
- (void)reportDebugStateDescription:(id /* block */)a0;
- (void)_replayDrawingBegan:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a0;
- (void)_replayDrawingMoved:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a0;
- (void)_replayDrawingEnded;
- (void)_replayDrawingCancelled;
- (void)_endDrawing;
- (void)cancelDrawing;
- (BOOL)hasMovedPastTapUseTimestampFromTouch:(BOOL)a0;
- (void)finishedElementFindingWithElement:(id)a0 candidateElements:(id)a1;
- (void)_drawingBegan;
- (void)_drawingMoved:(id)a0;
- (void)_drawingEnded;
- (void)_cancelOrFailGesture;
- (void)_updatePanStateForCandidateElements:(id)a0;
- (void)_evaluateMovingToBeganStateUseTimestampFromTouch:(BOOL)a0;
- (void)_updateStrokeAcceptanceStateUseTimestampFromTouch:(BOOL)a0;
- (double)timeIntervalSinceStartOfGesture;
- (double)_distanceFromStartPositionForTouch:(id)a0;
- (BOOL)_gestureStartedInsideTargetElement;
- (double)timeIntervalSinceTouchesBeganForTouch:(id)a0;
- (BOOL)_isValidLongPressOverDuration:(double)a0;
- (BOOL)_isWithinLongPressDistanceForTouch:(id)a0;
- (void)_cancelLongPressTimerBlocks;
- (void)_longPressTentativeTimerFired;
- (void)_longPressSuccessTimerFired;
- (BOOL)_isValidLongPress;
- (BOOL)_hasMovedPastMinimumPanThresholdForTouch:(id)a0;
- (long long)_panDirectionForTouch:(id)a0;
- (BOOL)_hasMovedPastScrollThresholdForTouch:(id)a0;
- (void)_beginDrawingIfNeeded;
- (void)_scheduleLongPressTimerBlocks;
- (void)_updateLongPressValidityForTouch:(id)a0;
- (void)_enumerateTouchesForUpdateWithEvent:(id)a0 block:(id /* block */)a1;
- (void)_updatePanGestureStateForTouch:(id)a0;
- (void)_cancelScheduledStrokeAcceptanceBlock;
- (void)_acceptStrokeTimeoutTriggered;
- (void)_cancelNotMovingCancellationBlock;
- (void)_evaluateCancelIfNotMoving;

@end
