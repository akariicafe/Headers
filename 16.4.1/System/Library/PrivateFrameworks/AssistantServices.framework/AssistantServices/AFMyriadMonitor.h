@class NSString, AFQueue, AFInstanceContext, AFNotifyObserver, AFWatchdogTimer, NSObject;
@protocol OS_dispatch_queue;

@interface AFMyriadMonitor : NSObject <AFNotifyObserverDelegate> {
    long long _state;
    AFInstanceContext *_instanceContext;
    AFQueue *_completions;
    AFNotifyObserver *_beginObserver;
    AFNotifyObserver *_wonObserver;
    AFNotifyObserver *_lostObserver;
    AFNotifyObserver *_repostedWonObserver;
    AFWatchdogTimer *_timer;
    AFWatchdogTimer *_fetchRepostedMyriadDecisionTimer;
    NSObject<OS_dispatch_queue> *_myriadMonitorQueue;
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

- (BOOL)isMonitoring;
- (void)notifyObserver:(id)a0 didReceiveNotificationWithToken:(int)a1;
- (void)dealloc;
- (void)_clear;
- (void)notifyObserver:(id)a0 didChangeStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (id)init;
- (void).cxx_destruct;
- (void)stopMonitoring;
- (void)_cancelRepostedMyriadDecisionTimer;
- (void)_dequeueBlocksWithSignal:(long long)a0;
- (void)_deregisterFromMyriadEventNotifications;
- (void)_deregisterFromRepostedDecisionResultsObservers;
- (void)_enqueueBlock:(id /* block */)a0 forReason:(id)a1;
- (id)_fetchCurrentMyriadDecisionWithWaitTime:(double)a0;
- (void)_flushCompletions:(BOOL)a0;
- (void)_ignoreRepostMyriadNotification:(BOOL)a0;
- (id)_myriadStateToString:(long long)a0;
- (void)_registerForMyriadEvents;
- (void)_resultSeenWithValue:(BOOL)a0;
- (void)_setDecisionIsPending;
- (void)dequeueBlocksWaitingForMyriadDecision;
- (BOOL)didWin;
- (void)ignoreMyriadEvents:(BOOL)a0;
- (void)startMonitoringWithTimeoutInterval:(double)a0;
- (void)startMonitoringWithTimeoutInterval:(double)a0 instanceContext:(id)a1;
- (void)waitForMyriadDecisionForReason:(id)a0 withCompletion:(id /* block */)a1;
- (void)waitForMyriadDecisionWithCompletion:(id /* block */)a0;

@end
