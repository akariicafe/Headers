@class NSArray, NSString, HDSPEnvironment;
@protocol HDSPSleepEventDelegate;

@interface HDSPSleepNotificationManager : NSObject <HDSPGoodMorningAlertObserver, HDSPEnvironmentAware, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPSleepScheduleModelObserver, HDSPSleepActionObserver, HDSPSleepNotificationPublisher, HDSPSleepScheduleStateObserver, HDSPTimeChangeObserver>

@property (readonly, nonatomic) NSArray *notificationPublishers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<HDSPSleepEventDelegate> sleepEventDelegate;

- (void)significantTimeChangeDetected:(id)a0;
- (id)eventIdentifiers;
- (void)wakeNotificationWasDismissed;
- (void)dismissAlertForGoodMorning;
- (void)wakeNotificationWasConfirmed;
- (void)presentAlertForGoodMorning;
- (void)environmentDidBecomeReady:(id)a0;
- (void)goodMorningWasDismissed;
- (id)upcomingEventsDueAfterDate:(id)a0;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)publishNotificationForEvent:(id)a0 userInfo:(id)a1;
- (void)_tearDownMorningNotification;
- (void)_rescheduleEvents;
- (void)environmentWillBecomeReady:(id)a0;
- (BOOL)_bedtimeOrWindDownNotificationsEnabled;
- (id)_windDownNotificationEventAfterDate:(id)a0;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepSchedule:(id)a1;
- (void)_bedtimeOrWindDownNotificationEventIsDue:(id)a0;
- (void)sleepEventIsDue:(id)a0;
- (void)tearDownNotificationForEventIdentifier:(id)a0;
- (void)_tearDownWakeDetectionNotification;
- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0;
- (void)tearDownNotifications;
- (void)_tearDownBedtimeReminder;
- (id)_sleepScheduleModel;
- (id)_bedtimeNotificationEventAfterDate:(id)a0;
- (id)initWithEnvironment:(id)a0 notificationPublishers:(id)a1;
- (void)_tearDownChargingReminder;
- (void)bedtimeReminderWasDismissed;
- (void)bedtimeReminderWasConfirmed;
- (void)_tearDownWindDownReminder;

@end
