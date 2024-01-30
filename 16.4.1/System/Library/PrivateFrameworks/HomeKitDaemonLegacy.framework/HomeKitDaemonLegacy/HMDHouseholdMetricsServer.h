@class NSDictionary, HMDHouseholdMetricsRequestContributor, NSObject;
@protocol OS_dispatch_queue, HMDHouseholdMetricsLogEventProviding, HMDHouseholdMetricsDataSource, HMMLogEventSubmitting, HMDHouseholdMetricsMessaging;

@interface HMDHouseholdMetricsServer : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak, nonatomic) id<HMDHouseholdMetricsDataSource> dataSource;
@property (readonly, weak, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, weak, nonatomic) id<HMDHouseholdMetricsLogEventProviding> householdMetricsProvider;
@property (readonly, weak, nonatomic) id<HMDHouseholdMetricsMessaging> remoteMessageDispatcher;
@property (readonly, nonatomic) HMDHouseholdMetricsRequestContributor *requestContributor;
@property (readonly, nonatomic) NSDictionary *logEventFactories;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (BOOL)evaluateHouseholdActivityLogEventForSubmission:(id)a0;
- (BOOL)evaluateMetricResponsesForSubmission:(id)a0;
- (id)initWithDataSource:(id)a0 logEventSubmitter:(id)a1 householdMetricsProvider:(id)a2 remoteMessageDispatcher:(id)a3 logEventFactories:(id)a4 workQueue:(id)a5;
- (void)runHouseholdMetricsDataCollectionAssociatedToDate:(id)a0 forceSubmit:(BOOL)a1;
- (void)sendHouseholdMetricsCollectionRequestToDevices:(id)a0 forHomeWithUUID:(id)a1 associatedToDate:(id)a2 completion:(id /* block */)a3;

@end
