@interface RTMotionActivityManagerNotificationMotionSettledStateChange : RTNotification

@property (readonly, nonatomic) unsigned long long settledState;

- (id)initWithSettledState:(unsigned long long)a0;
- (id)description;
- (id)init;

@end
