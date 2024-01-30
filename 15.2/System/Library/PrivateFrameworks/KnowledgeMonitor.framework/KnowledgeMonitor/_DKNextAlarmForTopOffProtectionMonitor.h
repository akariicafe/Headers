@class MTAlarmManager, EKEventStore, NSDate, NSObject;
@protocol OS_os_log;

@interface _DKNextAlarmForTopOffProtectionMonitor : _DKMonitor

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) BOOL isPluggedIn;
@property (nonatomic) int pluggedInToken;
@property (retain, nonatomic) NSDate *nextEarliestEvent;
@property (retain, nonatomic) MTAlarmManager *alarmManager;
@property (retain, nonatomic) EKEventStore *eventStore;

+ (BOOL)shouldMergeUnchangedEvents;
+ (id)eventStream;
+ (id)_eventWithState:(id)a0;
+ (id)entitlements;

- (void)handleAlarmsDidChangeNotification:(id)a0;
- (void)registerForChanges;
- (void)handleCalendarEventsChanged:(id)a0;
- (id)nextAlarm;
- (void)recordNextEvent;
- (void)start;
- (void)updateCurrentState;
- (void).cxx_destruct;
- (id)nextCalendarEvent;
- (void)stop;

@end
