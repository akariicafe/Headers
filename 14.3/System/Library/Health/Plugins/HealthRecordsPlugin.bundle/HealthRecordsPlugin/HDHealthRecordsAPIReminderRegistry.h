@class _HDHealthRecordsAPIReminderRegistryEventListener, HDHealthRecordsProfileExtension, HDProfile, NSMutableDictionary, HDXPCScheduler, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface HDHealthRecordsAPIReminderRegistry : NSObject

@property (readonly, weak, nonatomic) HDHealthRecordsProfileExtension *profileExtension;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) double deferralPeriod;
@property (readonly, nonatomic) double schedulerGracePeriod;
@property (readonly, nonatomic) double throttlingInterval;
@property (retain, nonatomic) NSNumber *_unitTesting_deferralPeriodOverride;
@property (retain, nonatomic) NSNumber *_unitTesting_schedulerGracePeriodOverride;
@property (retain, nonatomic) NSNumber *_unitTesting_throttlingIntervalOverride;
@property (retain, nonatomic, setter=_unitTesting_setTestingEventListener:) _HDHealthRecordsAPIReminderRegistryEventListener *_unitTesting_testingEventListener;
@property (readonly, nonatomic) NSMutableDictionary *pendingReminderIDsToReminders;
@property (readonly, nonatomic) HDXPCScheduler *triggerScheduler;

+ (void)initialize;

- (id)initWithProfileExtension:(id)a0;
- (BOOL)_readAuthorizationAllowedForAnyTypeInRecordsByType:(id)a0;
- (void)_handleUserNotificationResponse:(long long)a0 pendingReminderID:(id)a1 transaction:(id)a2;
- (void)_queue_performUserActionForReminder:(id)a0 userResponse:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (double)_timeIntervalForDefaultsKey:(id)a0 fallbackInterval:(double)a1;
- (void)_handleFirstUnlock;
- (void)_queue_scheduleTriggers;
- (BOOL)_queue_isAnyReminderInFlight;
- (void)_queue_stopListeningForHomescreenUnlockNotifications;
- (void)_checkInForFirstUnlockActivity;
- (void)_unitTesting_setSchedulerGracePeriodOverride:(double)a0;
- (void)_queue_firePendingReminderIfEligibleUsingPendingReminderID:(id)a0 transaction:(id)a1;
- (id)_criteriaForFirstUnlockActivity;
- (void)_firePendingReminderIfEligible;
- (void)_startObservingApplicationsUninstalledNotification;
- (void)_unitTesting_setDeferralPeriodOverride:(double)a0;
- (void)_showClinicalAPISettingsForAppSource:(id)a0;
- (void)_handleHomescreenUnlockedNotification:(id)a0;
- (void)_displayUnlimitedAuthorizationModeConfirmationForPendingReminderID:(id)a0 transaction:(id)a1 reminder:(id)a2;
- (id)_criteriaForFirstUnlockActivityCompleted;
- (BOOL)_queue_shouldDropUnlimitedAuthorizationModeReminder:(id)a0;
- (void)_queue_startListeningForHomescreenUnlockNotifications;
- (BOOL)_queue_deregisterAppWithBundleIdentifier:(id)a0 error:(id *)a1;
- (id)_newQueue;
- (long long)_authorizationModeForRecordsByType:(id)a0;
- (void)_queue_scheduleFireOnHomescreenUnlockIfEligibleWithNow:(id)a0;
- (void)_didProcessPendingReminderID:(id)a0 transaction:(id)a1;
- (id)_eligibilityStartDateForUnpostedReminder:(id)a0;
- (id)_queue_nextEligibleFireDate;
- (void)_displayStopAlertForPendingReminderID:(id)a0 transaction:(id)a1 title:(id)a2 body:(id)a3 defaultButtonTitle:(id)a4 alternateButtonTitle:(id)a5;
- (void)deregisterAppSourceFromUnlimitedAuthorizationModeConfirmation:(id)a0 completion:(id /* block */)a1;
- (void)_scheduleTriggers;
- (void)_applicationsUninstalledNotification:(id)a0;
- (id)_eligibilityStartDateAfterPostedReminder:(id)a0;
- (void)registerAppSourceForUnlimitedAuthorizationModeConfirmation:(id)a0 completion:(id /* block */)a1;
- (void)_unitTesting_setThrottlingIntervalOverride:(double)a0;
- (void)_queue_handleUserNotificationResponse:(long long)a0 pendingReminderID:(id)a1 transaction:(id)a2;
- (void)_queue_scheduleNextTriggerWithNow:(id)a0;
- (void)_queue_dropReminder:(id)a0;
- (id)_queue_firstEligibleReminderAfterDate:(id)a0;

@end
