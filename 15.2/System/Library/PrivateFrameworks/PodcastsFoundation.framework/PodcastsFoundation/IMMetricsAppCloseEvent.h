@class NSString;

@interface IMMetricsAppCloseEvent : IMAMSMetricsEvent

@property (retain, nonatomic) NSString *exitURL;

- (void)setExitTypeWithSuspendReason:(long long)a0;
- (id)initWithReason:(long long)a0;

@end
