@class NSObject;
@protocol OS_dispatch_queue, HMMLogEventSubmitting;

@interface HMDHH2AutoMigrationEligibilityLogEventSubmitter : HMFObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;

- (void).cxx_destruct;
- (id)initWithLogEventSubmitter:(id)a0;
- (void)submitHH2AutoMigrationEligibilityStatesUsingDataSource:(id)a0;

@end
