@interface GKBluetoothSupport : NSObject

+ (void)cleanup;
+ (int)_determineBluetoothStatus;
+ (void)_btPowerStateChanged:(id)a0;
+ (Class)_bluetoothManagerClass;
+ (int)bluetoothStatus;
+ (void)turnBluetoothOn;
+ (int)_directBTStatus;

@end
