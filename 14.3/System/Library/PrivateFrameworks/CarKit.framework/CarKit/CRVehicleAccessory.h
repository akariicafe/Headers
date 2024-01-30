@class NSString, NSArray, NSData, NSDictionary, NSNumber, EAAccessory;

@interface CRVehicleAccessory : NSObject

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

+ (id)_descriptionForTransportType:(long long)a0;
+ (long long)_transportTypeForExternalAccessoryTransportType:(int)a0;

- (void).cxx_destruct;
- (id)radarDescription;
- (id)description;
- (BOOL)_updateName;
- (id)vehicleAccessoryInfoKeys;
- (BOOL)isBluetoothConnected;
- (id)analyticsDescription;
- (void)beginWiredBluetoothPairing:(id /* block */)a0;
- (void)requestWiFiCredentials;
- (void)sendDeviceTransportIdentifiers;
- (void)sendWiredCarPlayAvailable:(id)a0 wirelessCarPlayAvailable:(id)a1;
- (id)displayName;

@end
