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

- (id)upcomingEventsDueAfterDate:(id)a0;
- (void)goodMorningWasDismissed:(id)a0;
- (void)wakeNotificationWasConfirmed:(id)a0;
- (void)bedtimeWasDelayed:(id)a0;
- (void)windDownWasSkipped:(id)a0;
- (id)eventIdentifiers;
- (void)significantTimeChangeDetected:(id)a0;
- (void)bedtimeReminderWasDismissed;
- (void)presentAlertForGoodMorning;
- (void)_tearDownWindDownReminder;
- (void)dismissAlertForGoodMorning;
- (void)environmentDidBecomeReady:(id)a0;
- (BOOL)_bedtimeOrWindDownNotificationsEnabled;
- (void).cxx_destruct;
- (void)_tearDownMorningNotification;
- (void)_bedtimeOrWindDownNotificationEventIsDue:(id)a0;
- (void)tearDownNotificationForEventIdentifier:(id)a0;
- (void)_tearDownWakeDetectionNotification;
- (id)initWithEnvironment:(id)a0;
- (void)_tearDownChargingReminder;
- (id)_windDownNotificationEventAfterDate:(id)a0;
- (void)publishNotificationForEvent:(id)a0 userInfo:(id)a1;
- (id)_bedtimeNotificationEventAfterDate:(id)a0;
- (id)initWithEnvironment:(id)a0 notificationPublishers:(id)a1;
- (void)_tearDownBedtimeReminder;
- (void)sleepScheduleModelManager:(id)a0 source:(id)a1 didUpdateSleepSchedule:(id)a2;
- (void)tearDownNotifications;
- (void)_rescheduleEvents;
- (void)bedtimeReminderWasConfirmed;
- (void)sleepEventIsDue:(id)a0;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)wakeNotificationWasDismissed;
- (void)environmentWillBecomeReady:(id)a0;
- (id)_sleepScheduleModel;

@end
