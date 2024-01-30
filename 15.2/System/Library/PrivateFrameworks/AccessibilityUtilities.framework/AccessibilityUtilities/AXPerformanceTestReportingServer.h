@interface AXPerformanceTestReportingServer : AXServer

+ (id)server;

- (id)_serviceName;
- (void)assistiveTouchDidLaunch;
- (void)voiceOverTouchDidLaunch;
- (void)voiceOverDidSpeak:(id)a0;

@end
