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

- (void)_updateUnbalancedPressBeganTypesWithCurrentPressType:(long long)a0 andPhase:(long long)a1 result:(long long *)a2;
- (void)_resetState;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (long long)latestPressType;
- (void)setAllowedPressTypes:(id)a0;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (double)latestPressTimestamp;
- (void)reset;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)_processDelayablePresses:(id)a0;
- (void)setWaitForPreemptionTimeInterval:(double)a0;
- (id)_allowedPressTypes;
- (BOOL)_isDispatchingDelayedPresses;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (void)_updatePublicPressInfo:(id)a0;
- (long long)requiredPressTypesCount;
- (BOOL)_shouldStopDispatching;
- (void)_waitGestureStateExpirationWithFireInterval:(double)a0 timerExpiredActionBlock:(id /* block */)a1;
- (void)_reallyStartDispatchingDelayedPresses;
- (id)_gestureStateInfoForPressInfo:(id)a0;
- (void)_resetDelayedPresses;
- (void)_startDispatchingDelayedPresses;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (double)waitForPreemptionTimeInterval;
- (void)_processPresses:(id)a0;
- (id)name;
- (void)_stopWaitingGestureStateExpiration;
- (void)_applyGestureStateInfo:(id)a0;
- (void)_cancelGesture;
- (void)_processPrecedencePresses:(id)a0;
- (long long)latestPressPhase;
- (void)_resetPublishedPressInfo;
- (BOOL)_didGestureBegin;
- (long long)_delayedPressesCount;
- (BOOL)_isGestureFailedOrCancelled;
- (id)gestureStateInfoForUnbalancedPressBeganCount:(long long)a0 previousCount:(long long)a1;
- (void)_addDelayedPress:(id)a0;

@end
