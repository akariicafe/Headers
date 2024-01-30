@class NSString;

@interface SSMetricsExitEvent : SSMetricsBaseEvent

@property (retain, nonatomic) NSString *exitType;
@property (retain, nonatomic) NSString *exitURL;

- (void)setExitTypeWithSuspendReason:(long long)a0;
- (id)init;
- (id)description;

@end
