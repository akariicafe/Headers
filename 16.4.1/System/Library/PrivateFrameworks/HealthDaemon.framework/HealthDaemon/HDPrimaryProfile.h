@class HDAWDSubmissionManager, HDNotificationManager, HDAgeGatingManager, HDWorkoutManager, HDSummarySharingEntryIDSManager, HDAttachmentManager, HDSummarySharingEntryManager, HDAssertionManager, HDCurrentActivitySummaryHelper, HDTinkerPrivacyAlertCoordinator, HDRestorableAlarmScheduler, HDServiceConnectionManager, HDDemoDataManager, HDDataCollectionManager, HDWorkoutCondenser, HDHealthServiceManager, HDAppSubscriptionManager, HDFitnessMachineManager, HDPeriodicCountryMonitor, HDNanoSyncManager;

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
    HDAttachmentManager *_attachmentManager;
}

- (id)alarmScheduler;
- (id)_newWorkoutManager;
- (id)awdSubmissionManager;
- (id)serviceManager;
- (id)notificationManager;
- (id)ageGatingManager;
- (void)unitTest_setServiceManager:(id)a0;
- (id)workoutCondenser;
- (id)initWithDirectoryPath:(id)a0 medicalIDDirectoryPath:(id)a1 daemon:(id)a2;
- (id)attachmentManager;
- (id)currentActivitySummaryHelper;
- (id)serviceConnectionManager;
- (id)fitnessMachineManager;
- (id)workoutManager;
- (id)_newPeriodicCountryMonitorWithNanoSyncManager:(id)a0;
- (id)_newNanoSyncManager;
- (id)dataCollectionManager;
- (id)sharingEntryManager;
- (id)appSubscriptionManager;
- (id)tinkerPrivacyAlertCoordinator;
- (id)periodicCountryMonitor;
- (void)terminationCleanup;
- (id)_newAWDSubmissionManager;
- (id)_initWithDirectoryPath:(id)a0 medicalIDDirectoryPath:(id)a1 daemon:(id)a2 profileIdentifier:(id)a3;
- (id)summarySharingEntryIDSManager;
- (void)unitTest_setNanoSyncManager:(id)a0;
- (id)activityCacheManager;
- (id)sessionAssertionManager;
- (void).cxx_destruct;
- (id)nanoSyncManager;

@end
