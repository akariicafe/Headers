@interface IMMetricsMemoryEvent : IMAMSMetricsEvent

@property (nonatomic) unsigned long long usedBytes;
@property (nonatomic) unsigned long long totalBytes;

- (id)shortDescription;
- (id)init;

@end
