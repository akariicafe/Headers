@class BSMonotonicReferenceTime, NSArray, NSSet, BSTimer, NSMutableArray;

@interface SBPressGestureRecognizer : UIGestureRecognizer {
    NSSet *_delayablePressTypes;
    NSSet *_precedencePressTypes;
    long long _internalGestureState;
    NSMutableArray *_delayedPressesInfo;
    double _latestDispatchedPressTimestamp;
    long long _latestDispatchedPressPhase;
    long long _latestDispatchedPressType;
    NSMutableArray *_unbalancedPressBeganTypes;
    BSTimer *_waitingGestureStateExpirationTimer;
    BOOL _isDispatchingPresses;
    BSTimer *_waitingForPreemptionTimer;
    BSMonotonicReferenceTime *_precedencePressesReferenceTime;
    double _waitForPreemptionTimeInterval;
}

@property (retain, nonatomic) NSArray *pressTypesWithPrecedence;

- (void)_resetState;
- (BOOL)_shouldStopDispatching;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)_addDelayedPress:(id)a0;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)_reallyStartDispatchingDelayedPresses;
- (void)_processPresses:(id)a0;
- (void)_updatePublicPressInfo:(id)a0;
- (long long)requiredPressTypesCount;
- (BOOL)_didGestureBegin;
- (void)_resetDelayedPresses;
- (double)waitForPreemptionTimeInterval;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (BOOL)_isDispatchingDelayedPresses;
- (void)setAllowedPressTypes:(id)a0;
- (long long)_delayedPressesCount;
- (BOOL)_isGestureFailedOrCancelled;
- (void)_applyGestureStateInfo:(id)a0;
- (id)gestureStateInfoForUnbalancedPressBeganCount:(long long)a0 previousCount:(long long)a1;
- (void).cxx_destruct;
- (double)latestPressTimestamp;
- (long long)latestPressType;
- (void)_processDelayablePresses:(id)a0;
- (void)_processPrecedencePresses:(id)a0;
- (id)name;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (id)_gestureStateInfoForPressInfo:(id)a0;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)setWaitForPreemptionTimeInterval:(double)a0;
- (void)_cancelGesture;
- (long long)latestPressPhase;
- (void)reset;
- (void)_startDispatchingDelayedPresses;
- (void)_resetPublishedPressInfo;
- (void)_waitGestureStateExpirationWithFireInterval:(double)a0 timerExpiredActionBlock:(id /* block */)a1;
- (void)_updateUnbalancedPressBeganTypesWithCurrentPressType:(long long)a0 andPhase:(long long)a1 result:(long long *)a2;
- (void)_stopWaitingGestureStateExpiration;
- (id)_allowedPressTypes;

@end
