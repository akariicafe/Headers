@class _UIFocusEngineJoystickGestureRecognizer, _UIFocusFastScrollingRecognizer, _UIFocusEnginePanGestureRecognizer, CARInputDeviceTouchpad, UITapGestureRecognizer, _UIFocusLinearMovementDebugView, _UIFocusPressGestureRecognizer, UIView, UIScrollView, NSString, UIMoveEvent, NSTimer, NSArray, _UIFocusMovementInfo, _UIFocusEffectsController, CADisplayLink, _UIFocusLinearMovementDebugGestureRecognizer;
@protocol _UIFocusEventRecognizerDelegate;

@interface _UIFocusEventRecognizer : NSObject <UIGestureRecognizerDelegate, _UIFocusEnginePanGestureRecognizerDelegate, _UIFocusFastScrollingRecognizerDelegate> {
    _UIFocusEnginePanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    _UIFocusPressGestureRecognizer *_selectGestureRecognizer;
    _UIFocusLinearMovementDebugGestureRecognizer *_linearDebugGestureRecognizer;
    _UIFocusLinearMovementDebugView *_linearDebugView;
    struct CGPoint { double x; double y; } _touchBeganPoint;
    struct CGPoint { double x; double y; } _lastKnownTouchPoint;
    struct CGPoint { double x; double y; } _previousPoints[5];
    int _numFrames;
    struct CGVector { double dx; double dy; } _progressAccumulator;
    struct CGVector { double dx; double dy; } _unlockedAccumulator;
    unsigned long long _failedPanGestureHeading;
    _UIFocusFastScrollingRecognizer *_fastScrollingRecognizer;
    struct CGPoint { double x; double y; } _firstMomentumTouchPoint;
    struct CGPoint { double x; double y; } _lastMomentumTouchPoint;
    struct CGPoint { double x; double y; } _momentumVelocity;
    double _momentumFriction;
    unsigned long long _focusUpdateCountSinceLastPanBegan;
    CADisplayLink *_momentumDisplayLink;
    NSArray *_remoteGestures;
    _UIFocusEngineJoystickGestureRecognizer *_joystickGestureRecognizer;
    NSTimer *_joystickModeExitTimer;
    NSTimer *_joystickModeRepeatTimer;
    double _previousJoystickFocusMovementTime;
    double _previousJoystickRegionEntryTime;
    unsigned long long _joystickRepeatingHeading;
    CADisplayLink *_joystickFocusDirectionDisplayLink;
    _UIFocusMovementInfo *_previousJoystickFocusMovementInfo;
    long long _joystickRepeatCount;
    UIScrollView *_lastScrolledScroll;
    double _lastEdgeScrollEdgeValue;
    unsigned long long _inputType;
    CARInputDeviceTouchpad *_currentCarTouchpad;
    struct { unsigned char isEligibleToCrossSpeedBump : 1; unsigned char isContinuingTouchWithMomentum : 1; unsigned char isPerformingJoystickRollback : 1; unsigned char isJoystickInRepeatMode : 1; unsigned char isPendingJoystickRepeat : 1; unsigned char isFastScrolling : 1; unsigned char shouldApplyAcceleration : 1; } _flags;
}

@property (retain, nonatomic, getter=_moveEvent, setter=_setMoveEvent:) UIMoveEvent *moveEvent;
@property (readonly, nonatomic, getter=_motionEffectsController) _UIFocusEffectsController *motionEffectsController;
@property (readonly, weak, nonatomic) UIView *owningView;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSArray *keyCommands;
@property (nonatomic) BOOL supportsFastScrolling;
@property (weak, nonatomic) id<_UIFocusEventRecognizerDelegate> delegate;
@property (weak, nonatomic) UIView *viewForTouchDeferredFocus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_canSupportFastScrolling;

- (void)_gestureRecognizerFailed:(id)a0;
- (id)_focusMovementForJoystickPosition:(struct CGPoint { double x0; double x1; })a0 usingMinimumRadius:(double)a1 focusMovementStyle:(long long)a2;
- (id)init;
- (BOOL)_joystickFocusMovement:(id)a0 shouldBeConsideredEqualToFocusMovement:(id)a1;
- (BOOL)focusEnginePanGestureRecognizerShouldRecognizeImmediately:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)_shouldAcceptInputType:(unsigned long long)a0;
- (BOOL)_didRecognizeFocusMovementRequest:(id)a0;
- (void)_joystickGestureBegan:(id)a0;
- (void)dealloc;
- (BOOL)_moveInDirection:(unsigned long long)a0 withSearchInfo:(id)a1;
- (void)_joystickGestureUpdated:(id)a0;
- (void)_panGestureStart:(id)a0;
- (void)_updatePanLocation:(struct CGPoint { double x0; double x1; })a0 reportedVelocity:(struct CGVector { double x0; double x1; })a1;
- (int)_touchRegionForDigitizerLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_joystickGestureEnded:(id)a0;
- (void)_showLinearGroupDebugOverlay;
- (BOOL)_hideLinearGroupDebugOverlayIfNecessary:(BOOL)a0;
- (id)_globalCoordinateSpace;
- (struct CGSize { double x0; double x1; })_momentumReferenceSize;
- (void)_sendGestureBeginNotification;
- (struct CGSize { double x0; double x1; })_touchSensitivityForItem:(id)a0;
- (void)_recordMomentumForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_stopMomentumAndPerformRollback;
- (BOOL)_shouldPerformFocusUpdateWithCurrentMomentumStatus;
- (void)_resetProgressAccumulatorWithRequest:(id)a0;
- (void)_momentumHeartbeat:(id)a0;
- (void)_continueTouchWithMomentum;
- (void)_joystickDisplayLinkHeartbeat:(id)a0;
- (void)_handleJoystickRepeatMode:(id)a0;
- (void)_handleJoystickTiltMode:(id)a0;
- (void)_exitJoystickModeForReal:(id)a0;
- (void)_joystickPerformRepeat:(id)a0;
- (double)_joystickRepeatDurationForTimeInMovementZone:(double)a0;
- (BOOL)_joystickAttemptFocusMovementWithRequest:(id)a0;
- (unsigned long long)_headingForJoystickPosition:(struct CGPoint { double x0; double x1; })a0 usingMinimumRadius:(double)a1;
- (struct CGVector { double x0; double x1; })_joystickVelocityForHeading:(unsigned long long)a0;
- (void)_sendMomentumEndNotificationsAndAnimateRollback:(BOOL)a0;
- (void)_fastScrollingBeganInScrollView:(id)a0;
- (void)_fastScrollingEnded;
- (id)initWithOwningView:(id)a0;
- (void)fastScrollingRecognizer:(id)a0 didRecognizeFastScrollingRequest:(id)a1;
- (BOOL)_moveInDirection:(unsigned long long)a0 withEvaluator:(id /* block */)a1;
- (void)_resetMotionEffects;
- (void)_setSupportsFastScrolling:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)_uiktest_panGestureRecognizer;
- (void)_uiktest_handlePanGesture:(id)a0;
- (void)_uiktest_setPanGestureRecognizer:(id)a0;
- (BOOL)_moveWithEvent:(id)a0;
- (id)_focusSystemSceneComponent;
- (void)_handleTapGesture:(id)a0;
- (void)_addGestureRecognizers;
- (void)_removeGestureRecognizers;
- (void)_handlePanGesture:(id)a0;
- (void)_panGestureEnd:(id)a0;
- (void)_resetProgressAccumulator;
- (void)_nextFocusContainer:(id)a0;
- (void)_resetMomentum;
- (void)_resetJoystick;
- (void)_focusSystemEnabledStateDidChange:(id)a0;
- (void)_handleSelectGesture:(id)a0;
- (void)_resetFailedMovementHeading;
- (void)_handleJoystickGesture:(id)a0;
- (void)_createFastScrollingRecognizerIfNeeded;
- (BOOL)_moveInDirection:(unsigned long long)a0;
- (void)_handleButtonGesture:(id)a0;
- (void)_handleLinearDebugOverlayGesture:(id)a0;
- (void)_resetPanGestureState;
- (void)_previousFocusContainer:(id)a0;
- (void)_moveFocusContainerWithHeading:(unsigned long long)a0;
- (id)_focusMovementSystem;

@end
