@interface RTBluetoothManagerNotificationCarKitConnectionStateChanged : RTNotification

@property (readonly, nonatomic) long long carKitConnectionState;

- (id)initWithCarKitConnectionState:(long long)a0;

@end
