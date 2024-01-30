@class NSArray, NSString, HMDEventCountersManager;
@protocol HMMLogEventSubmitting;

@interface HMDLogEventErrorEventsAnalyzer : HMDLogEventAnalyzer <HMDLogEventDailyProvider>

@property (class, readonly) NSArray *errorEventsRequestGroupKeys;

@property (readonly, nonatomic) HMDEventCountersManager *eventCountersManager;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)_handleReadWriteLogEvent:(id)a0;
- (void)_handleAccessoryPairingLogEvent:(id)a0;
- (id)currentErrorEventsAnalyzedSummary;
- (id)initWithEventCountersManager:(id)a0 logEventSubmitter:(id)a1;
- (id)eventCounterNameForError:(id)a0;
- (id)eventCounterRequestGroupNameForLogEvent:(id)a0;
- (id)eventCounterRequestGroupNameForLogEvent:(id)a0 underlyingError:(BOOL)a1;
- (void)_handleCloudShareTrustManagerFailureLogEvent:(id)a0;
- (void)submitAllFormattedErrorAggregationLogEvents;
- (void)submitErrorAggregationLogEventsForErrorEventGroup:(id)a0;
- (void)resetEventCountersForAllErrorEventRequestGroups;

@end
