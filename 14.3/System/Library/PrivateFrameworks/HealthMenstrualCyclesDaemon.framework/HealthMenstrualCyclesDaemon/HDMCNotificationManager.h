@class HKMCSettingsManager, NSString, HDProfile, HKMCAnalysis, HDRestorableAlarm, NSObject, HDMCAnalysisManager;
@protocol OS_dispatch_queue;

@interface HDMCNotificationManager : NSObject <HDMCAnalysisManagerObserver, HKMCSettingsManagerObserver> {
    HDProfile *_profile;
    HDMCAnalysisManager *_analysisManager;
    HKMCSettingsManager *_settingsManager;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _observingAnalysisUpdates;
    HKMCAnalysis *_lastAnalysis;
}

@property (readonly, nonatomic) HDRestorableAlarm *scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)analysisManager:(id)a0 didUpdateAnalysis:(id)a1;
- (id)initWithProfile:(id)a0 analysisManager:(id)a1 settingsManager:(id)a2;
- (void).cxx_destruct;
- (void)_queue_removeAllScheduledNotifications;
- (void)_queue_rescheduleNotificationsForAnalysis:(id)a0;
- (id)scheduledNotificationsWithError:(id *)a0;
- (void)start;
- (void)_queue_alarm:(id)a0 didReceiveDueEvents:(id)a1;
- (void)settingsManagerDidUpdateNotificationSettings:(id)a0;
- (void)invalidate;

@end
