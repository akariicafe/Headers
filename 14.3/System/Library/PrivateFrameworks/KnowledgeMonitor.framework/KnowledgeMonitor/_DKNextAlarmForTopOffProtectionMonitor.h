@class MTAlarmManager, EKEventStore, NSDate, NSObject;
@protocol OS_os_log;

@interface _DKNextAlarmForTopOffProtectionMonitor : _DKMonitor

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) BOOL isPluggedIn;
@property (nonatomic) int pluggedInToken;
@property (retain, nonatomic) NSDate *nextEarliestEvent;
@property (retain, nonatomic) MTAlarmManager *alarmManager;
@property (retain, nonatomic) EKEventStore *eventStore;

+ (id)entitlements;
+ (id)eventStream;
+ (id)_eventWithState:(id)a0;
+ (BOOL)shouldMergeUnchangedEvents;

- (void)registerForChanges;
- (id)nextAlarm;
- (void)recordNextEvent;
- (void).cxx_destruct;
- (void)stop;
- (id)nextCalendarEvent;
- (void)handleAlarmsDidChangeNotification:(id)a0;
- (void)start;
- (void)updateCurrentState;
- (void)handleCalendarEventsChanged:(id)a0;

@end
