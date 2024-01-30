@interface IMMetricsTimerEvent : IMAMSMetricsEvent

@property (nonatomic) double duration;

- (id)shortDescription;
- (id)init;

@end
