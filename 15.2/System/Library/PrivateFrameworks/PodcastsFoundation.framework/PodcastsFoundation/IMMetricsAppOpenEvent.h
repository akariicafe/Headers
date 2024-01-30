@class NSString;

@interface IMMetricsAppOpenEvent : IMAMSMetricsEvent

@property (retain, nonatomic) NSString *referringAppName;
@property (retain, nonatomic) NSString *referringURL;

- (void)setEnterTypeWithLaunchReason:(long long)a0;
- (id)initWithReason:(long long)a0;

@end
