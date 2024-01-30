@class NSDictionary, NSString, MTUserNotificationActionDispatcher;

@interface MTUserNotificationCenter : NSObject <MTNotificationCenter>

@property (retain, nonatomic) NSDictionary *notificationCenters;
@property (retain, nonatomic) MTUserNotificationActionDispatcher *actionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_snoozeCountdownIdentifier:(id)a0;
+ (id)_timeFormatter;
+ (id)categoryForScheduledAlarm:(id)a0;
+ (id)_allIdentifiersForAlarm:(id)a0 includeMainIdentifier:(BOOL)a1;
+ (void)_setGoToBedTitleAndBody:(id)a0 forGoToBedNotification:(id)a1;
+ (id)userInfoForTimer:(id)a0;
+ (void)_setSpecificContent:(id)a0 forScheduledAlarm:(id)a1;
+ (void)_setSpecificContent:(id)a0 forSnoozeCountdownNotification:(id)a1;
+ (id)_allIdentifiersForAlarm:(id)a0;
+ (id)_mutableContentForScheduledAlarmWithCommonSettings:(id)a0;
+ (id)contentForScheduledTimer:(id)a0;
+ (id)launchURLForScheme:(id)a0;
+ (id)categoryForScheduledTimer:(id)a0;
+ (id)_durationComponentsFormatter;
+ (id)notificationPrefixes;
+ (void)_setSnoozeCountdownTitleAndBody:(id)a0 forSnoozeCountdownNotification:(id)a1;
+ (id)userInfoForAlarm:(id)a0;
+ (id)_goToBedIdentifier:(id)a0;
+ (void)_setSpecificContent:(id)a0 forNormalScheduledAlarm:(id)a1;
+ (id)requestIdentifierForScheduledAlarm:(id)a0;
+ (id)contentForScheduledAlarm:(id)a0;
+ (id)_wakeUpAlarmStringForAlarm:(id)a0;
+ (id)_allIdentifiersForAlarm:(id)a0 includeMainIdentifier:(BOOL)a1 includeSnooze:(BOOL)a2;
+ (void)_setSpecificContent:(id)a0 forGoToBedNotification:(id)a1;

- (id)timerCategories;
- (void)removeAllDeliveredNotifications;
- (void)dismissNotificationsForAlarm:(id)a0 includeSnooze:(BOOL)a1;
- (id)notificationCategories;
- (void)dismissNotificationsForAlarm:(id)a0 includeMainIdentifier:(BOOL)a1 includeSnooze:(BOOL)a2;
- (void)dismissNotificationsForTimer:(id)a0;
- (void)postBedtimeNotificationForAlarm:(id)a0 date:(id)a1;
- (void)dismissNotificationsForAlarm:(id)a0 includeMainIdentifier:(BOOL)a1;
- (void)interruptAudioAndLockDeviceWithCompletionBlock:(id /* block */)a0;
- (void)tearDownNotificationsForEventIdentifiers:(id)a0;
- (void)dismissNotificationsForAlarm:(id)a0;
- (void)postNotificationForScheduledTimer:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dismissRelatedNotificationsForScheduledAlarm:(id)a0;
- (void)registerActionHandler:(id)a0;
- (void)dismissNotificationsWithIdentifiers:(id)a0;
- (void)postNotificationForScheduledAlarm:(id)a0 completionBlock:(id /* block */)a1;
- (id)_notificationCenterForScheduledAlarm:(id)a0;
- (void)dismissNotificationsForAlarm:(id)a0 dismissAction:(unsigned long long)a1;
- (void)postNotificationForScheduledAlarm:(id)a0 content:(id)a1 completionBlock:(id /* block */)a2;
- (id)alarmCategories;
- (void)setupNotificationCenter;
- (id)bedtimeCategories;
- (id)_notificationCenterForScheduledTimer;

@end
