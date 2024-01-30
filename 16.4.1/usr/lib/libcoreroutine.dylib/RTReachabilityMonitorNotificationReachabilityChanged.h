@interface RTReachabilityMonitorNotificationReachabilityChanged : RTNotification

@property (readonly, nonatomic) unsigned long long reachability;

- (id)initWithReachability:(unsigned long long)a0;

@end
