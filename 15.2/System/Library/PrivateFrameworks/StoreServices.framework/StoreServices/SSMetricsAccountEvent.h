@class NSString;

@interface SSMetricsAccountEvent : SSMetricsBaseEvent

@property (retain, nonatomic) NSString *accountEventType;

- (id)init;
- (void)setAccountEventTypeWithEventIdentifier:(long long)a0;

@end
