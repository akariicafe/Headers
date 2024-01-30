@class HMDEventFlagsManager, HMDEventCountersManager;
@protocol HMMLogEventSubmitting;

@interface HMDCloudSyncLogEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing>

@property (retain, nonatomic) HMDEventCountersManager *eventCountersManager;
@property (retain, nonatomic) HMDEventFlagsManager *eventFlagsManager;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property unsigned long long dataSyncState;

+ (id)managedEventCounterRequestGroups;

- (void)resetDataSource;
- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)populateAggregationAnalysisLogEvent:(id)a0;
- (void)resetAggregationAnalysisContext;
- (id)initWithEventCountersManager:(id)a0 eventFlagsManager:(id)a1 logEventSubmitter:(id)a2;
- (id)cloudSyncAnalysisResult;
- (void)handleIncomingCloudPushLogEvent:(id)a0;
- (void)handleFetchLogEvent:(id)a0;
- (void)handleUploadLogEvent:(id)a0;
- (void)handleUploadReasonLogEvent:(id)a0;
- (void)handleMaximumDelayLogEvent:(id)a0;
- (void)handleDecryptionCompletedEvent:(id)a0;
- (void)handleDataSyncStateEvent:(id)a0;
- (void)handleRecordOperationLogEvent:(id)a0;

@end
