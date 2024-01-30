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

- (void)dismissAlertForGoodMorning;
- (id)upcomingEventsDueAfterDate:(id)a0;
- (void)presentAlertForGoodMorning;
- (void)goodMorningWasDismissed;
- (id)_sleepScheduleModel;
- (id)_bedtimeNotificationEventAfterDate:(id)a0;
- (id)eventIdentifiers;
- (void)publishNotificationForEvent:(id)a0 userInfo:(id)a1;
- (void)_rescheduleEvents;
- (id)initWithEnvironment:(id)a0;
- (void)sleepEventIsDue:(id)a0;
- (void)environmentDidBecomeReady:(id)a0;
- (void)wakeNotificationWasConfirmed;
- (void)_tearDownWakeDetectionNotification;
- (void)bedtimeReminderWasConfirmed;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)environmentWillBecomeReady:(id)a0;
- (void)bedtimeReminderWasDismissed;
- (void)significantTimeChangeDetected:(id)a0;
- (void)tearDownNotificationForEventIdentifier:(id)a0;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepSchedule:(id)a1;
- (void)_tearDownChargingReminder;
- (void)_tearDownBedtimeReminder;
- (void)_tearDownMorningNotification;
- (void)_tearDownWindDownReminder;
- (void)wakeNotificationWasDismissed;
- (id)initWithEnvironment:(id)a0 notificationPublishers:(id)a1;
- (void).cxx_destruct;
- (void)_bedtimeOrWindDownNotificationEventIsDue:(id)a0;
- (BOOL)_bedtimeOrWindDownNotificationsEnabled;
- (void)tearDownNotifications;
- (id)_windDownNotificationEventAfterDate:(id)a0;

@end
