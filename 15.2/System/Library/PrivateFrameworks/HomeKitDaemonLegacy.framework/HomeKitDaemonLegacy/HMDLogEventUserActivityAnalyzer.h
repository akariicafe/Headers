@class HMDEventFlagsManager, HMDEventCountersManager;

@interface HMDLogEventUserActivityAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing>

@property (retain, nonatomic) HMDEventFlagsManager *eventFlagsManager;
@property (retain, nonatomic) HMDEventCountersManager *eventCountersManager;

+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)populateAggregationAnalysisLogEvent:(id)a0;
- (void)resetAggregationAnalysisContext;
- (id)initWithEventCountersManager:(id)a0 eventFlagsManager:(id)a1;
- (void)_handleReadWriteLogEvent:(id)a0;
- (void)_handleAccessoryPairingLogEvent:(id)a0;
- (void)_handleAddActionSetLogEvent:(id)a0;
- (void)_handleAddTriggerLogEvent:(id)a0;
- (void)_handleActionSetRunLogEvent:(id)a0;
- (void)_handleCameraStreamLogEvent:(id)a0;
- (void)_handleCameraClipRequestLogEvent:(id)a0;
- (BOOL)_isUserSource:(unsigned long long)a0;
- (BOOL)_isTriggerSource:(unsigned long long)a0;
- (void)_markUserActivityEventForEventName:(id)a0;

@end
