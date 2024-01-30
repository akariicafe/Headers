@interface IMPageAMSMetricsEvent : IMAMSMetricsEvent

@property (nonatomic) double pageRenderTime;

- (double)timeIntervalFromMilliseconds:(id)a0;
- (id)millisecondsFromTimeInterval:(double)a0;
- (id)init;

@end
