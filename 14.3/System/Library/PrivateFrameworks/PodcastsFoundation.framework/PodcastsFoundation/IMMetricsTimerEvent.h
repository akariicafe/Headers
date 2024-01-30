@interface IMMetricsTimerEvent : IMAMSMetricsEvent

@property (nonatomic) double duration;

- (id)init;
- (id)shortDescription;

@end
