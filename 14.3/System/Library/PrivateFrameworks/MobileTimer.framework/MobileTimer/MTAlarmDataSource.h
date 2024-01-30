@class MTAlarm, MTAlarmManager, NSMutableArray, MTObserverStore;

@interface MTAlarmDataSource : NSObject

@property (retain, nonatomic) MTAlarmManager *alarmManager;
@property (retain, nonatomic) MTObserverStore *observers;
@property (retain, nonatomic) NSMutableArray *alarms;
@property (retain, nonatomic) MTAlarm *sleepAlarm;
@property (retain, nonatomic) NSMutableArray *sleepAlarms;

- (id)initWithAlarmManager:(id)a0;
- (id)updateAlarm:(id)a0;
- (id)removeAlarm:(id)a0;
- (void)_registerForNotifications;
- (id)addAlarm:(id)a0;
- (void)registerObserver:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_stateReset;
- (unsigned long long)rowForAlarm:(id)a0;
- (void)unregisterObserver:(id)a0;
- (id)alarmAtRow:(unsigned long long)a0;
- (void)_iterateObserversWithBlock:(id /* block */)a0;
- (id)reloadAlarms;
- (void)_handleAlarmNotification:(id)a0 block:(id /* block */)a1;
- (unsigned long long)numberOfAlarms;
- (unsigned long long)rowForAlarmWithID:(id)a0;

@end
