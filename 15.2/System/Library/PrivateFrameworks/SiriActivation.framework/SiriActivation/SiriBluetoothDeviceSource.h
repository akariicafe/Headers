@class SiriBluetoothContext;

@interface SiriBluetoothDeviceSource : SiriLongPressButtonSource

@property (nonatomic) long long buttonIdentifier;
@property (nonatomic) double longPressInterval;
@property (retain, nonatomic) SiriBluetoothContext *context;

+ (id)bluetoothDeviceForIdentifier:(long long)a0 bluetoothDevice:(id)a1;

- (void).cxx_destruct;
- (void)activate;
- (void)deactivate;

@end
