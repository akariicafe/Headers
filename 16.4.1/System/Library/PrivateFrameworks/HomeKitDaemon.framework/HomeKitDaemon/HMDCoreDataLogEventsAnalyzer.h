@class NSString, HMDEventCounterGroup, HMDEventCountersManager;
@protocol HMMLogEventSubmitting;

@interface HMDCoreDataLogEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing, HMDLogEventDailyTaskRunner>

@property (readonly, nonatomic) HMDEventCounterGroup *aggregationEventGroup;
@property (readonly, nonatomic) HMDEventCounterGroup *cloudStoreReasonsEventGroup;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, nonatomic) HMDEventCountersManager *countersManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)resetAggregationAnalysisContext;
- (id)initWithEventCountersManager:(id)a0 logEventSubmitter:(id)a1 dailyScheduler:(id)a2;
- (void)populateAggregationAnalysisLogEvent:(id)a0;
- (void)runDailyTask;
- (void)handleCloudKitOperationEvent:(id)a0;
- (void)handleCloudStoreTransactionEvent:(id)a0;
- (void)handleWorkingStoreTransactionEvent:(id)a0;

@end
