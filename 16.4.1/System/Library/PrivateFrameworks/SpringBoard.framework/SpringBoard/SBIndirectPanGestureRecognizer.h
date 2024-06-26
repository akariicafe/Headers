@class NSTimer, NSString, BSAuditHistory, NSValue, BSAbsoluteMachTimer, UIEvent, UITouch, SBTouchHistory;
@protocol SBSystemGestureRecognizerDelegate, SBIndirectPanGestureRecognizerOrientationProviding, BSInvalidatable;

@interface SBIndirectPanGestureRecognizer : UIGestureRecognizer <_UIHoverEventRespondable, SBGestureRecognizerTouchHistoryProviding, SBGestureRecognizerPanGestureProviding, SBIndirectTouchLifecycleObserving>

@property (nonatomic) struct CGPoint { double x; double y; } origin;
@property (nonatomic) struct CGPoint { double x; double y; } lastKnownPoint;
@property (nonatomic) unsigned long long activatedEdge;
@property (retain, nonatomic) SBTouchHistory *touchHistory;
@property (weak, nonatomic) UIEvent *currentHoverEvent;
@property (weak, nonatomic) UITouch *currentTouch;
@property (nonatomic) double lastKnownMouseEventTimestamp;
@property (retain, nonatomic) NSTimer *mouseIdleTimer;
@property (nonatomic) double lastKnownTrackpadEventTimestamp;
@property (retain, nonatomic) NSTimer *trackpadIdleTimer;
@property (retain, nonatomic) NSValue *gestureStartLocation;
@property (nonatomic) double mouseEnteredNearEdgeRegionTimestamp;
@property (nonatomic) BOOL gesturePassedThroughScreenCenterRegion;
@property (nonatomic) double lastMouseActivationTimestamp;
@property (nonatomic) double trackpadHysteresis;
@property (nonatomic) double mouseHysteresis;
@property (nonatomic) struct CGPoint { double x; double y; } translationWithinHysteresisRange;
@property (nonatomic) unsigned long long activatingEdge;
@property (retain, nonatomic) BSAbsoluteMachTimer *watchdogTimer;
@property (retain, nonatomic) BSAuditHistory *auditHistory;
@property (retain, nonatomic) id<BSInvalidatable> logCaptureHandle;
@property (nonatomic) BOOL avoidActivatingForExternallyOwnedEdges;
@property (nonatomic) unsigned long long edges;
@property (nonatomic) BOOL shouldCancelAfterMovingAwayFromEdge;
@property (nonatomic) BOOL shouldInvertXAxis;
@property (nonatomic) BOOL shouldInvertYAxis;
@property (nonatomic) BOOL pausedUntilTouchedUpOrMovedAwayFromEdge;
@property (copy, nonatomic) id /* block */ translationAdjustmentBlock;
@property (nonatomic) BOOL shouldActivateWithThreshold;
@property (nonatomic) double activationRecognitionDistance;
@property (nonatomic) BOOL shouldRequireGestureToStartAtEdge;
@property (readonly, nonatomic) unsigned long long endReason;
@property (readonly, nonatomic) unsigned long long currentInputType;
@property (weak, nonatomic) id<SBIndirectPanGestureRecognizerOrientationProviding> orientationProvider;
@property (weak, nonatomic) id<SBSystemGestureRecognizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGPoint { double x0; double x1; })translationInView:(id)a0;
- (long long)_effectiveOrientation;
- (BOOL)_shouldReceiveTouch:(id)a0 withEvent:(id)a1;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)_hoverEntered:(id)a0 withEvent:(id)a1;
- (double)peakSpeed;
- (struct CGPoint { double x0; double x1; })averageTouchVelocityOverTimeDuration:(double)a0;
- (void)conformsToSBGestureRecognizerTouchHistoryProviding;
- (id)containerView;
- (unsigned long long)_edgeForPointerModelLocation:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1 inset:(double)a2;
- (struct CGPoint { double x0; double x1; })velocityInView:(id)a0;
- (double)averageTouchPathAngleOverTimeDuration:(double)a0;
- (void)_startWatchdogTimerIfNecessary;
- (BOOL)_isPointOnRoundedCorner:(struct CGPoint { double x0; double x1; })a0 corner:(unsigned long long)a1 radius:(double)a2 inView:(id)a3;
- (void)_hoverMoved:(id)a0 withEvent:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_hoverCancelled:(id)a0 withEvent:(id)a1;
- (void)_hoverExited:(id)a0 withEvent:(id)a1;
- (double)_watchdogTimeoutInSeconds;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)_watchdogFired;
- (void)trackpadDidTouchUpWithEvent:(id)a0;
- (void)_mouseIdleTimerFired:(id)a0;
- (BOOL)_wantsWatchdogEnabled;
- (struct CGPoint { double x0; double x1; })_centerOfCircleForRoundedCorner:(unsigned long long)a0 radius:(double)a1 inView:(id)a2;
- (void)dealloc;
- (void)_mouseIdleTimerElapsed;
- (void)_trackpadIdleTimerFired:(id)a0;
- (unsigned long long)_axisForEdge:(unsigned long long)a0;
- (double)hysteresisForInputType:(unsigned long long)a0;
- (void)_resetTranslationState;
- (void)_updateTranslationWithPointerEventAttributes:(id)a0 activeEdge:(unsigned long long)a1;
- (BOOL)_hasTranslationReachedThreshold:(double)a0 withTranslation:(struct CGPoint { double x0; double x1; })a1 forEdge:(unsigned long long)a2;
- (void)_setUpIdleTimersIfNeededForEvent:(id)a0;
- (void)_resetWatchdogIfNecessary;
- (struct CGPoint { double x0; double x1; })_pointerModelLocation;
- (BOOL)_shouldReceiveEvent:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void)setHysteresis:(double)a0 forInputType:(unsigned long long)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1 edges:(unsigned long long)a2;
- (void)_trackpadIdleTimerElapsed;
- (struct CGPoint { double x0; double x1; })_convertPoint:(struct CGPoint { double x0; double x1; })a0 fromView:(id)a1 toView:(id)a2;
- (void).cxx_destruct;
- (void)updateTouchHistoryWithTouches:(id)a0;
- (void)setState:(long long)a0;
- (void)reset;
- (BOOL)_isPointerOnTopScreenCorner:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1;

@end
