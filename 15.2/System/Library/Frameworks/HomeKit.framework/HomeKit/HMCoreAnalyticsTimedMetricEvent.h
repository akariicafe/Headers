@class NSNumber, NSDate;

@interface HMCoreAnalyticsTimedMetricEvent : HMCoreAnalyticsMetricEvent

@property (copy) NSDate *startedDate;
@property (copy) NSDate *finishedDate;
@property (readonly) NSNumber *duration;

- (void)finish;
- (id)eventPayload;
- (void)start;
- (void).cxx_destruct;
- (id)durationData;

@end
