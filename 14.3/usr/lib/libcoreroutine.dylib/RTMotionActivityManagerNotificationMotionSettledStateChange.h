@interface RTMotionActivityManagerNotificationMotionSettledStateChange : RTNotification

@property (readonly, nonatomic) unsigned long long settledState;

- (id)init;
- (id)description;
- (id)initWithSettledState:(unsigned long long)a0;

@end
