@class NSString, NSDictionary, NSData, NSDate, VGVehicleState;

@interface VGVehicle : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *pairedAppInstallDeviceIdentifier;
@property (retain, nonatomic) NSData *pairedAppInstallSessionIdentifier;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSDate *lastStateUpdateDate;
@property (copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *year;
@property (readonly, copy, nonatomic) NSString *manufacturer;
@property (readonly, copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *colorHex;
@property (readonly, copy, nonatomic) NSString *headUnitBluetoothIdentifier;
@property (readonly, copy, nonatomic) NSString *headUnitIdentifier;
@property (copy, nonatomic) NSString *licensePlate;
@property (copy, nonatomic) NSString *lprVehicleType;
@property (copy, nonatomic) NSString *lprPowerType;
@property (nonatomic) unsigned long long supportedConnectors;
@property (readonly, copy, nonatomic) NSDictionary *powerByConnector;
@property (readonly, nonatomic) VGVehicleState *currentVehicleState;
@property (readonly, nonatomic) BOOL isPureElectricVehicle;
@property (retain, nonatomic) NSString *pairedAppIdentifier;
@property (retain, nonatomic) NSString *iapIdentifier;
@property (retain, nonatomic) NSString *siriIntentsIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)displayedBatteryPercentage;
- (void)_updateWithVehicleState:(id)a0;
- (id)combinedDisplayName;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 year:(id)a2 manufacturer:(id)a3 model:(id)a4 colorHex:(id)a5 licensePlate:(id)a6 lprVehicleType:(id)a7 lprPowerType:(id)a8;
- (BOOL)_canBeUpdatedFromState:(id)a0;
- (id)_identifierForVehicleStateOrigin:(long long)a0;
- (void)_setVehicleState:(id)a0;
- (id)_vehicleByUpdatingWithVehicle:(id)a0;
- (double)batteryPercentageBasedOfCapacity;
- (id)initWithDisplayName:(id)a0 year:(id)a1 manufacturer:(id)a2 model:(id)a3 colorHex:(id)a4 headUnitIdentifier:(id)a5 headUnitBluetoothIdentifier:(id)a6 supportedConnectors:(unsigned long long)a7 powerByConnector:(id)a8;
- (id)initWithLicensePlate:(id)a0 lprVehicleType:(id)a1 lprPowerType:(id)a2;
- (id)initWithMapsSyncVehicle:(id)a0;
- (void)pairToIapIdentifier:(id)a0 bluetoothIdentifier:(id)a1;

@end
