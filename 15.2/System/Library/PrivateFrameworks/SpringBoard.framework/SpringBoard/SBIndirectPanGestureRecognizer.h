@class NSTimer, NSString, SBSystemGestureManager, NSValue, UIEvent, BSMonotonicReferenceTime, UITouch, SBTouchHistory;
@protocol SBIndirectPanGestureRecognizerOrientationProviding, SBSystemGestureRecognizerDelegate;

@interface SBIndirectPanGestureRecognizer : UIGestureRecognizer <_UIHoverEventRespondable, SBIndirectTouchLifecycleObserving, SBGestureRecognizerTouchHistoryProviding, SBGestureRecognizerPanGestureProviding>

@property (nonatomic) struct CGPoint { double x; double y; } origin;
@property (nonatomic) struct CGPoint { double x; double y; } lastKnownPoint;
@property (nonatomic) unsigned long long activatedEdge;
@property (retain, nonatomic) SBTouchHistory *touchHistory;
@property (retain, nonatomic) UIEvent *currentHoverEvent;
@property (retain, nonatomic) UITouch *currentTouch;
@property (retain, nonatomic) BSMonotonicReferenceTime *lastKnownMouseEventTimestamp;
@property (retain, nonatomic) NSTimer *mouseIdleTimer;
@property (retain, nonatomic) NSValue *gestureStartLocation;
@property (retain, nonatomic) BSMonotonicReferenceTime *mouseEnteredNearEdgeRegionTimestamp;
@property (nonatomic) BOOL gesturePassedThroughScreenCenterRegion;
@property (retain, nonatomic) BSMonotonicReferenceTime *lastMouseActivationTimestamp;
@property (nonatomic) double trackpadHysteresis;
@property (nonatomic) double mouseHysteresis;
@property (nonatomic) struct CGPoint { double x; double y; } translationWithinHysteresisRange;
@property (nonatomic) unsigned long long activatingEdge;
@property (retain, nonatomic) SBSystemGestureManager *systemGestureManager;
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

- (long long)_effectiveOrientation;
- (unsigned long long)_edgeForPointerModelLocation:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1 inset:(double)a2;
- (struct CGPoint { double x0; double x1; })velocityInView:(id)a0;
- (void)_hoverEntered:(id)a0 withEvent:(id)a1;
- (void)_hoverCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (BOOL)_hasTranslationReachedThreshold:(double)a0 withTranslation:(struct CGPoint { double x0; double x1; })a1 forEdge:(unsigned long long)a2;
- (void)trackpadDidTouchUpWithEvent:(id)a0;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1 edges:(unsigned long long)a2;
- (BOOL)_isPointerOnTopScreenCorner:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1;
- (void)setAllowedTouchTypes:(id)a0;
- (struct CGPoint { double x0; double x1; })translationInView:(id)a0;
- (void)_hoverMoved:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })_centerOfCircleForRoundedCorner:(unsigned long long)a0 radius:(double)a1 inView:(id)a2;
- (id)containerView;
- (void)_resetTranslationState;
- (struct CGPoint { double x0; double x1; })_pointerModelLocation;
- (double)hysteresisForInputType:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (unsigned long long)_axisForEdge:(unsigned long long)a0;
- (double)peakSpeed;
- (id)initWithTarget:(id)a0 action:(SEL)a1 edges:(unsigned long long)a2 systemGestureManager:(id)a3;
- (void).cxx_destruct;
- (void)_hoverExited:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })_convertPoint:(struct CGPoint { double x0; double x1; })a0 fromView:(id)a1 toView:(id)a2;
- (void)_mouseIdleTimerElapsed;
- (void)setHysteresis:(double)a0 forInputType:(unsigned long long)a1;
- (BOOL)_isPointOnRoundedCorner:(struct CGPoint { double x0; double x1; })a0 corner:(unsigned long long)a1 radius:(double)a2 inView:(id)a3;
- (void)_mouseIdleTimerFired:(id)a0;
- (struct CGPoint { double x0; double x1; })averageTouchVelocityOverTimeDuration:(double)a0;
- (void)dealloc;
- (void)conformsToSBGestureRecognizerTouchHistoryProviding;
- (void)reset;
- (void)updateTouchHistoryWithTouches:(id)a0;
- (BOOL)_shouldReceiveEvent:(id)a0;
- (void)_updateTranslationWithPointerEventAttributes:(id)a0 activeEdge:(unsigned long long)a1;
- (double)averageTouchPathAngleOverTimeDuration:(double)a0;

@end
