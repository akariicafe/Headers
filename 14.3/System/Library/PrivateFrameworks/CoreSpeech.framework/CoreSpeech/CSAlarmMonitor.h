@class MTAlarmManager, NSObject;
@protocol OS_dispatch_queue;

@interface CSAlarmMonitor : CSEventMonitor {
    long long _alarmFiringState;
    NSObject<OS_dispatch_queue> *_queue;
    MTAlarmManager *_alarmManager;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0 alarmIsFiringState:(long long)a1;
- (void)_alarmIsFiring:(id)a0;
- (void)_alarmDismissed:(id)a0;
- (void)_alarmStateReset:(id)a0;
- (void)initializeAlarmState;
- (long long)alarmState;

@end
