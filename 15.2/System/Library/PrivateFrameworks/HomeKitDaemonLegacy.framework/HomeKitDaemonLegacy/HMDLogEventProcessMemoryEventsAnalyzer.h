@class HMDEventCountersManager;

@interface HMDLogEventProcessMemoryEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing>

@property (readonly) HMDEventCountersManager *eventCountersManager;

+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)populateAggregationAnalysisLogEvent:(id)a0;
- (void)resetAggregationAnalysisContext;
- (id)initWithEventCountersManager:(id)a0;
- (void)_handleMemoryPressureNotificationLogEvent:(id)a0;
- (void)_handleMemorySampleLogEvent:(id)a0;

@end
