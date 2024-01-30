@class NSDictionary, NSString, MTUserNotificationActionDispatcher;

@interface MTUserNotificationCenter : NSObject <MTNotificationCenter>

@property (retain, nonatomic) NSDictionary *notificationCenters;
@property (retain, nonatomic) MTUserNotificationActionDispatcher *actionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_mutableContentForScheduledAlarmWithCommonSettings:(id)a0;
+ (id)notificationPrefixes;
+ (id)_snoozeCountdownIdentifier:(id)a0;
+ (id)requestIdentifierForScheduledAlarm:(id)a0;
+ (void)_setGoToBedTitleAndBody:(id)a0 forGoToBedNotification:(id)a1;
+ (id)_timeFormatter;
+ (void)_setSpecificContent:(id)a0 forScheduledAlarm:(id)a1;
+ (void)_setSpecificContent:(id)a0 forGoToBedNotification:(id)a1;
+ (id)contentForScheduledAlarm:(id)a0;
+ (id)userInfoForTimer:(id)a0;
+ (id)categoryForScheduledAlarm:(id)a0;
+ (void)_setSpecificContent:(id)a0 forSnoozeCountdownNotification:(id)a1;
+ (id)_allIdentifiersForAlarm:(id)a0 includeMainIdentifier:(BOOL)a1 includeSnooze:(BOOL)a2;
+ (id)userInfoForAlarm:(id)a0;
+ (id)launchURLForScheme:(id)a0;
+ (id)_allIdentifiersForAlarm:(id)a0;
+ (id)_wakeUpAlarmStringForAlarm:(id)a0;
+ (id)_allIdentifiersForAlarm:(id)a0 includeMainIdentifier:(BOOL)a1;
+ (id)_goToBedIdentifier:(id)a0;
+ (id)_durationComponentsFormatter;
+ (id)categoryForScheduledTimer:(id)a0;
+ (void)_setSpecificContent:(id)a0 forNormalScheduledAlarm:(id)a1;
+ (id)contentForScheduledTimer:(id)a0;
+ (void)_setSnoozeCountdownTitleAndBody:(id)a0 forSnoozeCountdownNotification:(id)a1;

- (void)interruptAudioAndLockDeviceWithCompletionBlock:(id /* block */)a0;
- (void)postNotificationForScheduledAlarm:(id)a0 content:(id)a1 completionBlock:(id /* block */)a2;
- (void)registerActionHandler:(id)a0;
- (void)dismissNotificationsForAlarm:(id)a0 includeMainIdentifier:(BOOL)a1;
- (void)dismissRelatedNotificationsForScheduledAlarm:(id)a0;
- (void)postNotificationForScheduledAlarm:(id)a0 completionBlock:(id /* block */)a1;
- (void)dismissNotificationsForAlarm:(id)a0 dismissAction:(unsigned long long)a1;
- (id)alarmCategories;
- (void)dismissNotificationsForAlarm:(id)a0 includeSnooze:(BOOL)a1;
- (void)setupNotificationCenter;
- (void)removeAllDeliveredNotifications;
- (id)notificationCategories;
- (id)timerCategories;
- (void)tearDownNotificationsForEventIdentifiers:(id)a0;
- (void)dismissNotificationsWithIdentifiers:(id)a0;
- (id)init;
- (id)bedtimeCategories;
- (void)dismissNotificationsForAlarm:(id)a0 includeMainIdentifier:(BOOL)a1 includeSnooze:(BOOL)a2;
- (id)_notificationCenterForScheduledAlarm:(id)a0;
- (void)dismissNotificationsForAlarm:(id)a0;
- (id)_notificationCenterForScheduledTimer;
- (void)dismissNotificationsForTimer:(id)a0;
- (void).cxx_destruct;
- (void)postBedtimeNotificationForAlarm:(id)a0 date:(id)a1;
- (void)postNotificationForScheduledTimer:(id)a0 completionBlock:(id /* block */)a1;

@end
