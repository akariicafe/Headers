@interface HMDLogEventProcessMemoryEventsAnalyzer : HMDLogEventAnalyzer

- (void)processLogEvent:(id)a0;
- (void)_handleMemoryPressureNotificationLogEvent:(id)a0;
- (void)_handleMemorySampleLogEvent:(id)a0;

@end
