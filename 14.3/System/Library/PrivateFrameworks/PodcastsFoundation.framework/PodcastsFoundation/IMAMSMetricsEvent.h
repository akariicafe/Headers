@class NSString;

@interface IMAMSMetricsEvent : AMSMetricsEvent

@property (retain, nonatomic) NSString *pageType;

- (void)setEventType:(id)a0;
- (id)init;
- (id)eventType;

@end
