@interface RTStoreNotificationAvailabilityDidChange : RTNotification

@property (readonly, nonatomic) unsigned long long availability;

- (id)description;
- (id)initWithAvailability:(unsigned long long)a0;

@end
