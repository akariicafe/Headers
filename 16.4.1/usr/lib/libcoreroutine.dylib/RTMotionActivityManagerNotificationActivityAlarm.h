@interface RTMotionActivityManagerNotificationActivityAlarm : RTNotification

@property (readonly, nonatomic) long long trigger;

- (id)initWithActivityAlarmTrigger:(long long)a0;
- (id)init;
- (id)description;

@end
