@class NSMutableArray;

@interface SBBluetoothController : NSObject {
    NSMutableArray *_devices;
    BOOL _tetheringConnected;
}

+ (id)sharedInstance;

- (int)batteryLevel;
- (void)bluetoothDeviceEndedVoiceControl:(id)a0;
- (void)removeDeviceNotification:(id)a0;
- (void)iapDeviceChanged:(id)a0;
- (void)connectionChanged:(id)a0;
- (void)updateBattery;
- (void)batteryChanged:(id)a0;
- (void).cxx_destruct;
- (void)updateTetheringConnected;
- (void)stopWatchingForDevices;
- (id)firstBTDeviceToReportBatteryLevel;
- (id)deviceForAudioRoute:(id)a0;
- (void)bluetoothDeviceInitiatedVoiceControl:(id)a0;
- (BOOL)tetheringConnected;
- (void)noteDevicesChanged;
- (void)dealloc;
- (void)addDeviceNotification:(id)a0;
- (BOOL)canReportBatteryLevel;
- (void)startWatchingForDevices;

@end
