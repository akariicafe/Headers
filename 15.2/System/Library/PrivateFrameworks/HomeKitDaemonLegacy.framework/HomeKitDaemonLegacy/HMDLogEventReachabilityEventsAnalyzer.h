@class HMDEventCountersManager;

@interface HMDLogEventReachabilityEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing>

@property (readonly, nonatomic) HMDEventCountersManager *eventCountersManager;

+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)populateAggregationAnalysisLogEvent:(id)a0;
- (void)resetAggregationAnalysisContext;
- (id)initWithEventCountersManager:(id)a0;
- (void)_handleReachabiltiyAddRemoveEvent:(id)a0;
- (void)_handleRemoteDeviceReachabilityChangedLogEvent:(id)a0;
- (void)_handleCameraRecordingReachabilityLogEvent:(id)a0;

@end
