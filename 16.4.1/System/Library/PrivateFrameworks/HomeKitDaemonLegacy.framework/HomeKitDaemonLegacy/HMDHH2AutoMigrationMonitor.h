@class HMDHomeManager, NSString, HMDFMFHandler, HMDHH2AutoMigrationEligibilityChecker;
@protocol HMDFeaturesDataSource, HMDBackgroundSystemTaskSchedulerInterfacing, HMMLogEventSubmitting;

@interface HMDHH2AutoMigrationMonitor : HMFObject <HMFLogging> {
    HMDHomeManager *_homeManager;
    HMDFMFHandler *_fmfHandler;
    id<HMDBackgroundSystemTaskSchedulerInterfacing> _taskScheduler;
    HMDHH2AutoMigrationEligibilityChecker *_eligibilityChecker;
    id<HMDFeaturesDataSource> _featuresDataSource;
    id<HMMLogEventSubmitting> _logEventSubmitter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)startMonitoring;
- (void).cxx_destruct;
- (void)stopMonitoring;
- (void)attemptAutoMigrationWithCompletionHandler:(id /* block */)a0;
- (void)handleFMFStatusUpdatedNotification:(id)a0;
- (id)initWithHomeManager:(id)a0 eligibilityChecker:(id)a1;
- (id)initWithHomeManager:(id)a0 fmfHandler:(id)a1 backgroundTaskScheduler:(id)a2 eligibilityChecker:(id)a3 featuresDataSource:(id)a4 logEventSubmitter:(id)a5;

@end
