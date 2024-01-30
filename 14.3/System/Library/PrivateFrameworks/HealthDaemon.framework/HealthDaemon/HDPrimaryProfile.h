@class HDAWDSubmissionManager, HDNotificationManager, HDAgeGatingManager, HDWorkoutManager, HDCurrentActivitySummaryHelper, HDTinkerPrivacyAlertCoordinator, HDServiceConnectionManager, HDDemoDataManager, HDDataCollectionManager, HDHealthServiceManager, HDAppSubscriptionManager, HDFitnessMachineManager, HDNanoSyncManager;

@interface HDPrimaryProfile : HDProfile {
    HDAgeGatingManager *_ageGatingManager;
    HDAppSubscriptionManager *_appSubscriptionManager;
    HDAWDSubmissionManager *_awdSubmissionManager;
    HDCurrentActivitySummaryHelper *_currentActivitySummaryHelper;
    HDDataCollectionManager *_dataCollectionManager;
    HDFitnessMachineManager *_fitnessMachineManager;
    HDNanoSyncManager *_nanoSyncManager;
    HDNotificationManager *_notificationManager;
    HDHealthServiceManager *_serviceManager;
    HDServiceConnectionManager *_serviceConnectionManager;
    HDWorkoutManager *_workoutManager;
    HDDemoDataManager *_demoDataManager;
    HDTinkerPrivacyAlertCoordinator *_tinkerPrivacyAlertCoordinator;
}

- (id)_newAppSubscriptionManager;
- (id)fitnessMachineManager;
- (void)_applyPPTUpdates;
- (id)_newAWDSubmissionManager;
- (void)unitTest_setNanoSyncManager:(id)a0;
- (id)_newWorkoutManager;
- (void).cxx_destruct;
- (id)initWithDirectoryPath:(id)a0 medicalIDDirectoryPath:(id)a1 daemon:(id)a2;
- (id)serviceManager;
- (id)_newNotificationManager;
- (void)unitTest_setServiceManager:(id)a0;
- (id)_newNanoSyncManager;
- (id)notificationManager;
- (id)currentActivitySummaryHelper;
- (id)dataCollectionManager;
- (id)workoutManager;
- (id)tinkerPrivacyAlertCoordinator;
- (id)appSubscriptionManager;
- (id)serviceConnectionManager;
- (id)awdSubmissionManager;
- (void)terminationCleanup;
- (id)nanoSyncManager;
- (id)activityCacheManager;

@end
