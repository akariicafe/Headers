@class MTAlarmManager, NSObject;
@protocol OS_dispatch_queue;

@interface CSAlarmMonitor : CSEventMonitor {
    long long _alarmFiringState;
    NSObject<OS_dispatch_queue> *_queue;
    MTAlarmManager *_alarmManager;
}

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_alarmDismissed:(id)a0;
- (void)_stopMonitoring;
- (void)initializeAlarmState;
- (void)_notifyObserver:(id)a0 alarmIsFiringState:(long long)a1;
- (void)_alarmStateReset:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_alarmIsFiring:(id)a0;
- (long long)alarmState;

@end
