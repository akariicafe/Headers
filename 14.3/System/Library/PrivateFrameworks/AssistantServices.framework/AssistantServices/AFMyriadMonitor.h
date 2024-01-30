@class NSString, AFWatchdogTimer, AFQueue, AFNotifyObserver, NSObject;
@protocol OS_dispatch_queue;

@interface AFMyriadMonitor : NSObject <AFNotifyObserverDelegate> {
    long long _state;
    AFWatchdogTimer *_timer;
    AFWatchdogTimer *_fetchRepostedMyriadDecisionTimer;
    NSObject<OS_dispatch_queue> *_myriadMonitorQueue;
    AFQueue *_completions;
    AFNotifyObserver *_beginObserver;
    AFNotifyObserver *_wonObserver;
    AFNotifyObserver *_lostObserver;
    AFNotifyObserver *_repostedWonObserver;
    double _myriadEventMonitorTimeout;
    BOOL _isRegisteredForMyriadEventNotification;
    BOOL _ignoreMyriadEvents;
    BOOL _isMonitoring;
    BOOL _ignoreRepostMyriadNotification;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMonitor;

- (void)_clear;
- (void)notifyObserver:(id)a0 didReceiveNotificationWithToken:(int)a1;
- (void)notifyObserver:(id)a0 didChangeStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (id)init;
- (void).cxx_destruct;
- (BOOL)didWin;
- (void)dealloc;
- (void)_enqueueBlock:(id /* block */)a0 forReason:(id)a1;
- (id)_myriadStateToString:(long long)a0;
- (void)stopMonitoring;
- (BOOL)isMonitoring;
- (void)_registerForMyriadEvents;
- (void)_setDecisionIsPending;
- (void)_cancelRepostedMyriadDecisionTimer;
- (id)_fetchCurrentMyriadDecisionWithWaitTime:(double)a0;
- (void)_dequeueBlocksWithSignal:(long long)a0;
- (void)_deregisterFromRepostedDecisionResultsObservers;
- (void)_deregisterFromMyriadEventNotifications;
- (void)_resultSeenWithValue:(BOOL)a0;
- (void)_flushCompletions:(BOOL)a0;
- (void)waitForMyriadDecisionWithCompletion:(id /* block */)a0;
- (void)waitForMyriadDecisionForReason:(id)a0 withCompletion:(id /* block */)a1;
- (void)startMonitoringWithTimeoutInterval:(double)a0;
- (void)ignoreMyriadEvents:(BOOL)a0;
- (void)dequeueBlocksWaitingForMyriadDecision;
- (void)_ignoreRepostMyriadNotification:(BOOL)a0;

@end
