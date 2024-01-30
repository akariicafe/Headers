@interface RTLearnedLocationManagerNotificationDidUpdate : RTNotification

@property (nonatomic) double intervalSinceLastUpdate;

- (id)description;
- (id)initWithIntervalSinceLastUpdate:(double)a0;

@end
