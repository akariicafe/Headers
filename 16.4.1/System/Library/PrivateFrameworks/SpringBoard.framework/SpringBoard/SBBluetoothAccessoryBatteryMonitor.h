@class NSString, NSMutableSet, BCBatteryDeviceController;

@interface SBBluetoothAccessoryBatteryMonitor : NSObject <BCBatteryDeviceObserving> {
    NSMutableSet *_accessoryNamesInLowPower;
    BCBatteryDeviceController *_batteryDeviceController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connectedDevicesDidChange:(id)a0;
- (id)descriptionBuilder;
- (void)_popLowPowerAlertForAccessoryIfNecessary:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
