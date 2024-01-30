@class MTTimerManager, NSObject;
@protocol OS_dispatch_queue;

@interface CSTimerMonitor : CSEventMonitor {
    long long _timerFiringState;
    NSObject<OS_dispatch_queue> *_queue;
    MTTimerManager *_timerManager;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (long long)timerState;
- (void)_timerIsFiring:(id)a0;
- (BOOL)_isSleepTimer:(id)a0;
- (void)_notifyObserver:(id)a0 timerIsFiringState:(long long)a1;
- (void)_timerDismissed:(id)a0;
- (void)_timerStateReset:(id)a0;
- (void)initializeTimerState;

@end
