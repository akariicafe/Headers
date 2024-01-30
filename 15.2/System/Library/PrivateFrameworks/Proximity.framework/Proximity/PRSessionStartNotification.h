@class NSNumber;

@interface PRSessionStartNotification : NSObject

@property (readonly) long long notificationType;
@property (readonly) NSNumber *bluetoothConnectionEventCounterValue;

+ (id)createWithBluetoothConnectionEventCounterValue:(id)a0;

- (void)_setType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_setBluetoothConnectionEventCounterValue:(id)a0;

@end
