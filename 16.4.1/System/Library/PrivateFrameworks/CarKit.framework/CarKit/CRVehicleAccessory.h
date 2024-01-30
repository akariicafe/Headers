@class NSString, NSArray, NSData, NSDictionary, NSNumber, EAAccessory;

@interface CRVehicleAccessory : NSObject <CRMessagingServiceVehicleRepresenting>

@property (retain, nonatomic) NSString *vehicleName;
@property (retain, nonatomic) NSString *vehicleModelName;
@property (retain, nonatomic) NSData *certificateSerialNumber;
@property (retain, nonatomic) NSArray *accessoryProtocols;
@property (retain, nonatomic) NSString *bluetoothAddress;
@property (nonatomic) long long transportType;
@property (retain, nonatomic) NSNumber *connectionID;
@property (nonatomic) BOOL supportsUSBCarPlay;
@property (nonatomic) BOOL supportsWirelessCarPlay;
@property (nonatomic) BOOL supportsWiredBluetoothPairing;
@property (nonatomic) BOOL supportsCarPlayConnectionRequest;
@property (nonatomic) BOOL supportsEnhancedIntegration;
@property (weak, nonatomic) EAAccessory *accessory;
@property (retain, nonatomic) NSString *PPID;
@property (copy, nonatomic) NSDictionary *vehicleInfoDataCache;
@property (copy, nonatomic) NSDictionary *vehicleAccessoryInfoKeysCache;
@property (readonly, nonatomic) NSString *radarDescription;
@property (readonly, nonatomic) NSDictionary *analyticsDescription;
@property (readonly, nonatomic) NSDictionary *vehicleAccessoryInfoKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_transportTypeForExternalAccessoryTransportType:(int)a0;

- (id)displayName;
- (void).cxx_destruct;
- (BOOL)_updateName;
- (void)beginWiredBluetoothPairing:(id /* block */)a0;
- (BOOL)isBluetoothConnected;
- (void)requestWiFiCredentials;
- (void)sendDeviceTransportIdentifiers;
- (void)sendWiredCarPlayAvailable:(id)a0 usbIdentifier:(id)a1 wirelessCarPlayAvailable:(id)a2 bluetoothIdentifier:(id)a3;

@end
