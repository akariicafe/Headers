@class HMDEventCountersManager;

@interface HMDLogEventAccessoryFirmwareUpdateEventAnalyzer : HMDLogEventAnalyzer

@property (readonly, nonatomic) HMDEventCountersManager *eventCountersManager;

- (void).cxx_destruct;
- (id)initWithSupportedEventTypes:(id)a0 context:(id)a1;
- (void)processLogEvent:(id)a0;
- (id)initWithSupportedEventTypes:(id)a0 context:(id)a1 eventCountersManager:(id)a2;

@end
