@class NSMutableArray;

@interface SBBluetoothController : NSObject {
    NSMutableArray *_devices;
    BOOL _tetheringConnected;
}

+ (id)sharedInstance;

- (void)bluetoothDeviceEndedVoiceControl:(id)a0;
- (void)startWatchingForDevices;
- (int)batteryLevel;
- (void)iapDeviceChanged:(id)a0;
- (void).cxx_destruct;
- (void)bluetoothDeviceInitiatedVoiceControl:(id)a0;
- (void)dealloc;
- (id)firstBTDeviceToReportBatteryLevel;
- (BOOL)tetheringConnected;
- (void)addDeviceNotification:(id)a0;
- (void)batteryChanged:(id)a0;
- (void)removeDeviceNotification:(id)a0;
- (void)updateBattery;
- (void)connectionChanged:(id)a0;
- (void)stopWatchingForDevices;
- (void)updateTetheringConnected;
- (void)noteDevicesChanged;
- (id)deviceForAudioRoute:(id)a0;
- (BOOL)canReportBatteryLevel;

@end
