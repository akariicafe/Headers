@class NSArray, NSMutableDictionary, NSDictionary;

@interface VOSBluetoothManager : NSObject {
    struct BTLocalDeviceImpl { } *_localDevice;
    struct BTSessionImpl { } *_session;
    long long _available;
    BOOL _audioConnected;
    BOOL _scanningEnabled;
    struct BTDiscoveryAgentImpl { } *_discoveryAgent;
    struct BTPairingAgentImpl { } *_pairingAgent;
    NSMutableDictionary *_btAddrDict;
    NSMutableDictionary *_btDeviceDict;
    BOOL _wantsScanningEnabled;
    BOOL _wantsDiscoveryEnabled;
    NSDictionary *_brailleDriverDeviceDetectionInfo;
}

@property (nonatomic) unsigned int authorizedServices;
@property (readonly, nonatomic) NSArray *connectingDevices;
@property (readonly, nonatomic) NSArray *pairedDevices;
@property (readonly, nonatomic) NSArray *pairedBrailleDevices;

+ (id)sharedInstance;
+ (int)lastInitError;

- (BOOL)available;
- (BOOL)connected;
- (BOOL)wasDeviceDiscovered:(id)a0;
- (BOOL)enabled;
- (void)_removeDevice:(id)a0;
- (long long)powerState;
- (id)init;
- (BOOL)_attach:(id)a0;
- (BOOL)deviceScanningEnabled;
- (BOOL)powered;
- (void).cxx_destruct;
- (BOOL)audioConnected;
- (void)_restartScan;
- (id)addDeviceIfNeeded:(struct BTDeviceImpl { } *)a0;
- (void)setDiscoverable:(BOOL)a0;
- (BOOL)isDiscoverable;
- (void)dealloc;
- (void)unpairDevice:(id)a0;
- (void)setAudioConnected:(BOOL)a0;
- (void)resetDeviceScanning;
- (void)setConnectable:(BOOL)a0;
- (BOOL)setPowered:(BOOL)a0;
- (void)_powerChanged;
- (void)_discoveryStateChanged;
- (void)acceptSSP:(int)a0 forDevice:(id)a1;
- (void)setDeviceScanningEnabled:(BOOL)a0;
- (void)postNotificationName:(id)a0 object:(id)a1 error:(id)a2;
- (void)postNotificationName:(id)a0 object:(id)a1;
- (void)setDevicePairingEnabled:(BOOL)a0;
- (void)postNotification:(id)a0;
- (BOOL)_setup:(struct BTSessionImpl { } *)a0;
- (void)connectDevice:(id)a0 withServices:(unsigned int)a1;
- (BOOL)isAnyoneScanning;
- (void)cancelPairing;
- (void)_connectabilityChanged;
- (void)_postNotificationWithArray:(id)a0;
- (void)_connectedStatusChanged;
- (BOOL)connectable;
- (void)_postNotification:(id)a0;
- (BOOL)setEnabled:(BOOL)a0;
- (void)connectDevice:(id)a0;
- (BOOL)devicePairingEnabled;
- (void)setPincode:(id)a0 forDevice:(id)a1;
- (void)_cleanup:(BOOL)a0;
- (BOOL)isServiceSupported:(unsigned int)a0;
- (void)_setDiscoveryAgentScanning:(BOOL)a0;
- (BOOL)isValidBrailleDevice:(id)a0;
- (BOOL)_onlySensorsConnected;
- (id)deviceForAddressString:(id)a0;
- (unsigned int)authorizedServicesForDevice:(id)a0;
- (id)alertControllerWithVOSBluetoothResult:(unsigned long long)a0 device:(id)a1 buttonHandler:(id /* block */)a2;

@end
