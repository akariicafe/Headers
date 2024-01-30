@class MTAlarmManager, NSObject;
@protocol OS_dispatch_queue;

@interface CSAlarmMonitor : CSEventMonitor {
    long long _alarmFiringState;
    NSObject<OS_dispatch_queue> *_queue;
    MTAlarmManager *_alarmManager;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (long long)alarmState;
- (void)_alarmIsFiring:(id)a0;
- (void)_alarmDismissed:(id)a0;
- (void)_alarmStateReset:(id)a0;
- (void)_notifyObserver:(id)a0 alarmIsFiringState:(long long)a1;
- (void)initializeAlarmState;

@end
