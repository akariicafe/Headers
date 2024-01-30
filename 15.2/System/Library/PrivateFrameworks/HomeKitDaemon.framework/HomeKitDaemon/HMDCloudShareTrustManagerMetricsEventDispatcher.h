@class NSUUID, NSString, HMDLogEventDailyScheduler, NSArray;
@protocol HMMLogEventSubmitting, HMDCloudShareTrustManagerMetricsEventDispatcherDataSource;

@interface HMDCloudShareTrustManagerMetricsEventDispatcher : HMFObject <HMFLogging, HMDLogEventDailyProvider>

@property (readonly) NSUUID *identifier;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) HMDLogEventDailyScheduler *logEventDailyScheduler;
@property (readonly, weak) id<HMDCloudShareTrustManagerMetricsEventDispatcherDataSource> dataSource;
@property BOOL registered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)submitFailureEventWithEventErrorCode:(long long)a0 error:(id)a1;
- (id)initWithIdentifier:(id)a0 logEventSubmitter:(id)a1 logEventDailyScheduler:(id)a2 dataSource:(id)a3;
- (void)registerForDailyTrustManagerEvents;
- (void)submitTrustZoneCreatedEvent;
- (void)submitTrustZoneRemovedEvent;
- (void)submitTrustActivityEvent:(long long)a0;
- (void)submitFailureEventWithEventErrorCode:(long long)a0;
- (void)submitCloudShareTrustStatusDailyEvent;
- (void)triggerLogEventProviderDailySubmissionBlocks;

@end
