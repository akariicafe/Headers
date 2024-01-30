@interface RTDataProtectionManagerNotificationEncryptedDataAvailability : RTNotification

@property (readonly, nonatomic) long long availability;

- (id)initWithEncryptedDataAvailability:(long long)a0;

@end
