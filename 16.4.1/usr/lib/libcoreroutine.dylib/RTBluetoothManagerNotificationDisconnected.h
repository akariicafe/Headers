@class NSString;

@interface RTBluetoothManagerNotificationDisconnected : RTNotification

@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *deviceAddress;

- (void).cxx_destruct;
- (id)initWithDeviceName:(id)a0 andDeviceAddress:(id)a1;

@end
