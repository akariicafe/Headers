@interface IMPageAMSMetricsEvent : IMAMSMetricsEvent

@property (nonatomic) double pageRenderTime;

- (id)init;
- (double)timeIntervalFromMilliseconds:(id)a0;
- (id)millisecondsFromTimeInterval:(double)a0;

@end
