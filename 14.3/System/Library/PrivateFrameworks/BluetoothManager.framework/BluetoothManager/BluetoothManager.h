@class NSMutableDictionary;

@interface BluetoothManager : NSObject {
    struct BTLocalDeviceImpl { } *_localDevice;
    struct BTSessionImpl { } *_session;
    int _available;
    int _state;
    BOOL _airplaneMode;
    BOOL _audioConnected;
    BOOL _scanningEnabled;
    BOOL _scanningInProgress;
    unsigned int _scanningServiceMask;
    struct BTDiscoveryAgentImpl { } *_discoveryAgent;
    struct BTPairingAgentImpl { } *_pairingAgent;
    struct BTAccessoryManagerImpl { } *_accessoryManager;
    NSMutableDictionary *_btAddrDict;
    NSMutableDictionary *_btDeviceDict;
}

@property (nonatomic) BOOL blacklistEnabled;

+ (id)sharedInstance;
+ (void)setSharedInstanceQueue:(id)a0;
+ (int)lastInitError;

- (BOOL)available;
- (BOOL)connected;
- (BOOL)isAnyoneAdvertising;
- (void)_updateBlacklistMode;
- (int)bluetoothState;
- (BOOL)wasDeviceDiscovered:(id)a0;
- (BOOL)_attach;
- (void)_advertisingChanged;
- (BOOL)enabled;
- (id)localAddress;
- (void)_removeDevice:(id)a0;
- (void)_updateBluetoothState;
- (void)enableTestMode;
- (void)startVoiceCommand:(id)a0;
- (int)powerState;
- (void)disconnectDevice:(id)a0;
- (id)init;
- (BOOL)deviceScanningEnabled;
- (BOOL)powered;
- (BOOL)audioConnected;
- (void)_restartScan;
- (id)addDeviceIfNeeded:(struct BTDeviceImpl { } *)a0;
- (void)setDiscoverable:(BOOL)a0;
- (BOOL)isDiscoverable;
- (id)connectingDevices;
- (id)pairedDevices;
- (void)dealloc;
- (void)unpairDevice:(id)a0;
- (void)setAudioConnected:(BOOL)a0;
- (void)resetDeviceScanning;
- (void)setConnectable:(BOOL)a0;
- (BOOL)setPowered:(BOOL)a0;
- (void)_powerChanged;
- (void)_discoveryStateChanged;
- (void)showPowerPrompt;
- (void)acceptSSP:(long long)a0 forDevice:(id)a1;
- (void)setDeviceScanningEnabled:(BOOL)a0;
- (id)connectedDevices;
- (void)scanForConnectableDevices:(unsigned int)a0;
- (id)connectedDeviceNamesThatMayBeBlacklisted;
- (void)postNotificationName:(id)a0 object:(id)a1 error:(id)a2;
- (void)postNotificationName:(id)a0 object:(id)a1;
- (void)scanForServices:(unsigned int)a0;
- (void)bluetoothStateAction;
- (void)setDevicePairingEnabled:(BOOL)a0;
- (void)disconnectDevicePhysicalLink:(id)a0;
- (void)_scanForServices:(unsigned int)a0 withMode:(int)a1;
- (void)postNotification:(id)a0;
- (void)_updateAirplaneModeStatus;
- (void)_pairedStatusChanged;
- (BOOL)_setup:(struct BTSessionImpl { } *)a0;
- (BOOL)deviceScanningInProgress;
- (void)connectDevice:(id)a0 withServices:(unsigned int)a1;
- (BOOL)isAnyoneScanning;
- (void)cancelPairing;
- (void)_connectabilityChanged;
- (void)bluetoothStateActionWithCompletion:(id /* block */)a0;
- (void)_postNotificationWithArray:(id)a0;
- (id)pairedNonAppleHAEDevices;
- (void)_connectedStatusChanged;
- (void)_setScanState:(int)a0;
- (id)deviceFromIdentifier:(id)a0;
- (BOOL)connectable;
- (void)_postNotification:(id)a0;
- (BOOL)setEnabled:(BOOL)a0;
- (void)connectDevice:(id)a0;
- (BOOL)devicePairingEnabled;
- (struct BTAccessoryManagerImpl { } *)_accessoryManager;
- (void)setPincode:(id)a0 forDevice:(id)a1;
- (void)_notifyFirstDeviceUnlockCompleted;
- (int)maskLocalDeviceEvents:(unsigned int)a0;
- (void)_cleanup:(BOOL)a0;
- (BOOL)isServiceSupported:(unsigned int)a0;
- (void)endVoiceCommand:(id)a0;

@end
