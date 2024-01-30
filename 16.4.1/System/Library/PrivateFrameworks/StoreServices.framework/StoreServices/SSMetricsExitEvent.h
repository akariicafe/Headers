@class NSString;

@interface SSMetricsExitEvent : SSMetricsBaseEvent

@property (retain, nonatomic) NSString *exitType;
@property (retain, nonatomic) NSString *exitURL;

- (id)init;
- (id)description;
- (void)setExitTypeWithSuspendReason:(long long)a0;

@end
