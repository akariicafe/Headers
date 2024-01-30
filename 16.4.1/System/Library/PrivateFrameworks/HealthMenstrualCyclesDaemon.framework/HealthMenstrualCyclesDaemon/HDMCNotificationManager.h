@class NSDate, NSString, HDMCOvulationConfirmationStateManager, HDRestorableAlarm, HKMCAnalysis, HDPrimaryProfile, HDMCAnalysisManager, NSObject, HKMCSettingsManager, NSNumber, HDKeyValueDomain;
@protocol OS_dispatch_queue;

@interface HDMCNotificationManager : NSObject <HDMCAnalysisManagerObserver, HKMCSettingsManagerObserver> {
    HDPrimaryProfile *_profile;
    HDMCAnalysisManager *_analysisManager;
    HKMCSettingsManager *_settingsManager;
    NSObject<OS_dispatch_queue> *_queue;
    HDKeyValueDomain *_keyValueDomain;
    HDMCOvulationConfirmationStateManager *_ovulationConfirmationStateManager;
    HDKeyValueDomain *_unconfirmedDeviationStateKeyValueDomain;
    HDKeyValueDomain *_protectedKeyValueDomain;
    NSNumber *_lastDismissalDayIndex;
    HKMCAnalysis *_lastAnalysis;
    NSDate *_currentDateOverride;
}

@property (readonly, nonatomic) HDRestorableAlarm *scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_notificationCategoriesWithBasicAnalytics;
- (void)_queue_alarm:(id)a0 didReceiveDueEvents:(id)a1;
- (void)settingsManagerDidUpdateNotificationSettings:(id)a0;
- (void)_queue_removeAllScheduledNotificationsIfNotEnabled;
- (void)_setCurrentDate:(id)a0;
- (id)scheduledNotificationsWithError:(id *)a0;
- (id)_requestFromAlarmEvent:(id)a0;
- (void)_queue_rescheduleNotificationsForAnalysis:(id)a0;
- (id)initWithProfile:(id)a0 analysisManager:(id)a1 settingsManager:(id)a2;
- (id)_periodEventFromNotificationCategory:(id)a0 notificationFireDayIndex:(long long)a1;
- (void)start;
- (id)_currentDate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)analysisManager:(id)a0 didUpdateAnalysis:(id)a1;

@end
