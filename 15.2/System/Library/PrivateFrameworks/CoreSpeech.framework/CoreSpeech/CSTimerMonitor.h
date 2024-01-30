@class MTTimerManager, NSObject;
@protocol OS_dispatch_queue;

@interface CSTimerMonitor : CSEventMonitor {
    long long _timerFiringState;
    NSObject<OS_dispatch_queue> *_queue;
    MTTimerManager *_timerManager;
}

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0 timerIsFiringState:(long long)a1;
- (void)_stopMonitoring;
- (BOOL)_isSleepTimer:(id)a0;
- (void)_timerStateReset:(id)a0;
- (void)initializeTimerState;
- (long long)timerState;
- (void).cxx_destruct;
- (id)init;
- (void)_timerDismissed:(id)a0;
- (void)_timerIsFiring:(id)a0;

@end
