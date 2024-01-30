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

- (BOOL)connected;
- (BOOL)isDiscoverable;
- (BOOL)available;
- (long long)powerState;
- (BOOL)setPowered:(BOOL)a0;
- (BOOL)enabled;
- (BOOL)isServiceSupported:(unsigned int)a0;
- (void)setDiscoverable:(BOOL)a0;
- (void)_cleanup:(BOOL)a0;
- (void)dealloc;
- (BOOL)setEnabled:(BOOL)a0;
- (BOOL)powered;
- (void)_postNotification:(id)a0;
- (void)postNotification:(id)a0;
- (id)init;
- (BOOL)_setup:(struct BTSessionImpl { } *)a0;
- (void).cxx_destruct;
- (BOOL)connectable;
- (void)postNotificationName:(id)a0 object:(id)a1;
- (void)connectDevice:(id)a0;
- (BOOL)_attach:(id)a0;
- (void)cancelPairing;
- (BOOL)devicePairingEnabled;
- (void)setDevicePairingEnabled:(BOOL)a0;
- (void)_connectabilityChanged;
- (void)_connectedStatusChanged;
- (void)_discoveryStateChanged;
- (void)setConnectable:(BOOL)a0;
- (void)_postNotificationWithArray:(id)a0;
- (void)_powerChanged;
- (void)_removeDevice:(id)a0;
- (void)_restartScan;
- (void)acceptSSP:(int)a0 forDevice:(id)a1;
- (id)addDeviceIfNeeded:(struct BTDeviceImpl { } *)a0;
- (BOOL)audioConnected;
- (void)connectDevice:(id)a0 withServices:(unsigned int)a1;
- (BOOL)deviceScanningEnabled;
- (BOOL)isAnyoneScanning;
- (void)postNotificationName:(id)a0 object:(id)a1 error:(id)a2;
- (void)resetDeviceScanning;
- (void)setAudioConnected:(BOOL)a0;
- (void)setDeviceScanningEnabled:(BOOL)a0;
- (void)setPincode:(id)a0 forDevice:(id)a1;
- (void)unpairDevice:(id)a0;
- (BOOL)wasDeviceDiscovered:(id)a0;
- (BOOL)_onlySensorsConnected;
- (void)_setDiscoveryAgentScanning:(BOOL)a0;
- (id)alertControllerWithVOSBluetoothResult:(unsigned long long)a0 device:(id)a1 buttonHandler:(id /* block */)a2;
- (unsigned int)authorizedServicesForDevice:(id)a0;
- (id)deviceForAddressString:(id)a0;
- (BOOL)isValidBrailleDevice:(id)a0;

@end
