@class HDAWDSubmissionManager, HDNotificationManager, HDAgeGatingManager, HDWorkoutManager, HDSummarySharingEntryIDSManager, HDSummarySharingEntryManager, HDAssertionManager, HDCurrentActivitySummaryHelper, HDTinkerPrivacyAlertCoordinator, HDRestorableAlarmScheduler, HDServiceConnectionManager, HDDemoDataManager, HDDataCollectionManager, HDWorkoutCondenser, HDHealthServiceManager, HDAppSubscriptionManager, HDFitnessMachineManager, HDPeriodicCountryMonitor, HDNanoSyncManager;

@interface HDPrimaryProfile : HDProfile {
    HDAgeGatingManager *_ageGatingManager;
    HDAppSubscriptionManager *_appSubscriptionManager;
    HDAWDSubmissionManager *_awdSubmissionManager;
    HDCurrentActivitySummaryHelper *_currentActivitySummaryHelper;
    HDDataCollectionManager *_dataCollectionManager;
    HDFitnessMachineManager *_fitnessMachineManager;
    HDNanoSyncManager *_nanoSyncManager;
    HDNotificationManager *_notificationManager;
    HDPeriodicCountryMonitor *_periodicCountryMonitor;
    HDHealthServiceManager *_serviceManager;
    HDRestorableAlarmScheduler *_alarmScheduler;
    HDServiceConnectionManager *_serviceConnectionManager;
    HDAssertionManager *_sessionAssertionManager;
    HDWorkoutManager *_workoutManager;
    HDWorkoutCondenser *_workoutCondenser;
    HDDemoDataManager *_demoDataManager;
    HDTinkerPrivacyAlertCoordinator *_tinkerPrivacyAlertCoordinator;
    HDSummarySharingEntryManager *_summarySharingEntryManager;
    HDSummarySharingEntryIDSManager *_summarySharingEntryIDSManager;
}

- (id)notificationManager;
- (id)sharingEntryManager;
- (id)sessionAssertionManager;
- (void)unitTest_setNanoSyncManager:(id)a0;
- (id)workoutManager;
- (id)serviceManager;
- (id)summarySharingEntryIDSManager;
- (id)periodicCountryMonitor;
- (id)_newNanoSyncManager;
- (id)nanoSyncManager;
- (id)_newAWDSubmissionManager;
- (id)alarmScheduler;
- (id)ageGatingManager;
- (id)fitnessMachineManager;
- (void).cxx_destruct;
- (void)unitTest_setServiceManager:(id)a0;
- (id)serviceConnectionManager;
- (id)workoutCondenser;
- (id)currentActivitySummaryHelper;
- (id)initWithDirectoryPath:(id)a0 medicalIDDirectoryPath:(id)a1 daemon:(id)a2;
- (id)_initWithDirectoryPath:(id)a0 medicalIDDirectoryPath:(id)a1 daemon:(id)a2 profileIdentifier:(id)a3;
- (void)terminationCleanup;
- (id)_newPeriodicCountryMonitorWithNanoSyncManager:(id)a0;
- (id)awdSubmissionManager;
- (id)dataCollectionManager;
- (id)appSubscriptionManager;
- (id)activityCacheManager;
- (id)_newWorkoutManager;
- (id)tinkerPrivacyAlertCoordinator;

@end
