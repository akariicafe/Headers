@class NSArray, NSSet, NSMutableArray, BSAbsoluteMachTimer;

@interface SBPressGestureRecognizer : UIGestureRecognizer {
    NSSet *_delayablePressTypes;
    NSSet *_precedencePressTypes;
    long long _internalGestureState;
    NSMutableArray *_delayedPressesInfo;
    double _latestDispatchedPressTimestamp;
    long long _latestDispatchedPressPhase;
    long long _latestDispatchedPressType;
    NSMutableArray *_unbalancedPressBeganTypes;
    BSAbsoluteMachTimer *_waitingGestureStateExpirationTimer;
    BOOL _isDispatchingPresses;
    BSAbsoluteMachTimer *_waitingForPreemptionTimer;
    double _precedencePressesTime;
    double _waitForPreemptionTimeInterval;
}

@property (retain, nonatomic) NSArray *pressTypesWithPrecedence;

- (long long)requiredPressTypesCount;
- (long long)latestPressPhase;
- (void)_resetState;
- (void)_resetDelayedPresses;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (void)_cancelGesture;
- (BOOL)_isGestureFailedOrCancelled;
- (void)_resetPublishedPressInfo;
- (void)_processDelayablePresses:(id)a0;
- (id)_gestureStateInfoForPressInfo:(id)a0;
- (id)gestureStateInfoForUnbalancedPressBeganCount:(long long)a0 previousCount:(long long)a1;
- (id)_allowedPressTypes;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (double)latestPressTimestamp;
- (void)_reallyStartDispatchingDelayedPresses;
- (void)_updatePublicPressInfo:(id)a0;
- (void)_applyGestureStateInfo:(id)a0;
- (void)_addDelayedPress:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (long long)latestPressType;
- (BOOL)_didGestureBegin;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)_startDispatchingDelayedPresses;
- (double)waitForPreemptionTimeInterval;
- (void)_processPresses:(id)a0;
- (void)dealloc;
- (void)_waitGestureStateExpirationWithFireInterval:(double)a0 timerExpiredActionBlock:(id /* block */)a1;
- (void)_stopWaitingGestureStateExpiration;
- (long long)_delayedPressesCount;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)setWaitForPreemptionTimeInterval:(double)a0;
- (void)setAllowedPressTypes:(id)a0;
- (void).cxx_destruct;
- (void)_updateUnbalancedPressBeganTypesWithCurrentPressType:(long long)a0 andPhase:(long long)a1 result:(long long *)a2;
- (void)_processPrecedencePresses:(id)a0;
- (BOOL)_shouldStopDispatching;
- (void)reset;
- (id)name;
- (BOOL)_isDispatchingDelayedPresses;

@end
