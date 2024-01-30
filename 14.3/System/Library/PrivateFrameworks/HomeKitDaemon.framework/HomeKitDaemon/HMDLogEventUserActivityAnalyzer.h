@class HMDEventFlagsManager, HMDEventCountersManager;

@interface HMDLogEventUserActivityAnalyzer : HMDLogEventAnalyzer

@property (retain, nonatomic) HMDEventFlagsManager *eventFlagsManager;
@property (retain, nonatomic) HMDEventCountersManager *eventCountersManager;

- (void).cxx_destruct;
- (id)initWithSupportedEventTypes:(id)a0 context:(id)a1 eventCountersManager:(id)a2 eventFlagsManager:(id)a3;
- (id)initWithSupportedEventTypes:(id)a0 context:(id)a1;
- (void)processLogEvent:(id)a0;
- (void)_handleReadWriteLogEvent:(id)a0;
- (void)_handleAccessoryPairingLogEvent:(id)a0;
- (void)_handleAddActionSetLogEvent:(id)a0;
- (void)_handleAddTriggerLogEvent:(id)a0;
- (void)_handleActionSetRunLogEvent:(id)a0;
- (void)_handleCameraStreamLogEvent:(id)a0;
- (void)_handleCameraClipRequestLogEvent:(id)a0;
- (void)_markUserActivityEventForEventName:(id)a0;
- (BOOL)_isUserSource:(unsigned long long)a0;
- (BOOL)_isTriggerSource:(unsigned long long)a0;

@end
