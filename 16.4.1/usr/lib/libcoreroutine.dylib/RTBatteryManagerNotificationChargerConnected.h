@interface RTBatteryManagerNotificationChargerConnected : RTNotification

@property (readonly, nonatomic) BOOL connected;

- (id)initWithChargerConnected:(BOOL)a0;

@end
