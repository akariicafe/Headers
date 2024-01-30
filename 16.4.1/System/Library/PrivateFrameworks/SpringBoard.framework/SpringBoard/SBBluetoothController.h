@class NSMutableArray;

@interface SBBluetoothController : NSObject {
    NSMutableArray *_devices;
    BOOL _tetheringConnected;
}

+ (id)sharedInstance;

- (int)batteryLevel;
- (void)batteryChanged:(id)a0;
- (void)updateBattery;
- (void)stopWatchingForDevices;
- (void)noteDevicesChanged;
- (id)firstBTDeviceToReportBatteryLevel;
- (void)bluetoothDeviceInitiatedVoiceControl:(id)a0;
- (void)addDeviceNotification:(id)a0;
- (void)removeDeviceNotification:(id)a0;
- (void)dealloc;
- (void)updateTetheringConnected;
- (BOOL)tetheringConnected;
- (void)bluetoothDeviceEndedVoiceControl:(id)a0;
- (void)startWatchingForDevices;
- (void)connectionChanged:(id)a0;
- (void)iapDeviceChanged:(id)a0;
- (id)deviceForAudioRoute:(id)a0;
- (BOOL)canReportBatteryLevel;
- (void).cxx_destruct;

@end
