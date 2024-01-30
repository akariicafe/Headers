@interface BatteryCenterUI.BatteryCenterObserver : NSObject <BCBatteryDeviceObserving> {
    void /* unknown type, empty encoding */ dispatchQueue;
    void /* unknown type, empty encoding */ batteryController;
    void /* unknown type, empty encoding */ subject;
}

- (void)connectedDevicesDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
