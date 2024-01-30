@class HDPeriodicActivity, HDHealthRecordsProfileExtension, HDProfile, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HDClinicalDailyAnalyticsManager : NSObject <HDPeriodicActivityDelegate, HDAnalyticsSubmissionCoordinatorDelegate> {
    HDPeriodicActivity *_periodicActivity;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, weak, nonatomic) HDHealthRecordsProfileExtension *profileExtension;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performPeriodicActivity:(id)a0 completion:(id /* block */)a1;
- (BOOL)periodicActivityRequiresProtectedData:(id)a0;
- (id)initWithProfileExtension:(id)a0;
- (void).cxx_destruct;
- (void)reportDailyAnalyticsWithCoordinator:(id)a0 completion:(id /* block */)a1;
- (void)_queue_didTriggerClinicalAnalyticsForReason:(long long)a0 success:(BOOL)a1 error:(id)a2;
- (void)periodicActivity:(id)a0 configureXPCActivityCriteria:(id)a1;
- (void)_queue_triggerClinicalContentAnalyticsWithCompletion:(id /* block */)a0;
- (BOOL)_queue_collectAccountCreationDateAnalyticsWithError:(id *)a0;
- (void)triggerDailyAnalyticsForReason:(long long)a0 completion:(id /* block */)a1;

@end
