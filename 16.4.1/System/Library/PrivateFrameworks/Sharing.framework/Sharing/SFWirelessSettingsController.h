@interface SFWirelessSettingsController : NSObject {
    BOOL _wifiEnabled;
    BOOL _airplaneModeEnabled;
    BOOL _bluetoothEnabled;
    BOOL _deviceSupportsWAPI;
    unsigned long long _uwbStatus;
    BOOL _firstCallbackCompleted;
    BOOL _wirelessCarPlayEnabled;
    BOOL _wirelessAccessPointEnabled;
    struct __SFOperation { } *_information;
}

@property (weak) id delegate;
@property (getter=isAirplaneModeEnabled) BOOL airplaneModeEnabled;
@property (getter=isBluetoothEnabled) BOOL bluetoothEnabled;
@property (getter=isWifiEnabled) BOOL wifiEnabled;
@property (readonly) unsigned long long ultraWideBandStatus;
@property (getter=isWirelessAccessPointEnabled) BOOL wirelessAccessPointEnabled;
@property (readonly, getter=isWirelessCarPlayEnabled) BOOL wirelessCarPlayEnabled;
@property (readonly) BOOL deviceSupportsWAPI;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)handleOperationCallback:(struct __SFOperation { } *)a0 event:(long long)a1 withResults:(id)a2;

@end
