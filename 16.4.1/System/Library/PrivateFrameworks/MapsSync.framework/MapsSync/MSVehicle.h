@class NSString, NSData, NSDate, NSNumber;

@interface MSVehicle : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _colorHex;
    void /* unknown type, empty encoding */ _currentVehicleState;
    void /* unknown type, empty encoding */ _dateOfVehicleIngestion;
    void /* unknown type, empty encoding */ _displayName;
    void /* unknown type, empty encoding */ _headUnitBluetoothIdentifier;
    void /* unknown type, empty encoding */ _headUnitMacAddress;
    void /* unknown type, empty encoding */ _iapIdentifier;
    void /* unknown type, empty encoding */ _lastStateUpdateDate;
    void /* unknown type, empty encoding */ _licensePlate;
    void /* unknown type, empty encoding */ _lprPowerType;
    void /* unknown type, empty encoding */ _lprVehicleType;
    void /* unknown type, empty encoding */ _manufacturer;
    void /* unknown type, empty encoding */ _model;
    void /* unknown type, empty encoding */ _pairedAppIdentifier;
    void /* unknown type, empty encoding */ _positionIndex;
    void /* unknown type, empty encoding */ _powerByConnector;
    void /* unknown type, empty encoding */ _siriIntentsIdentifier;
    void /* unknown type, empty encoding */ _supportedConnectors;
    void /* unknown type, empty encoding */ _vehicleIdentifier;
    void /* unknown type, empty encoding */ _vehicleType;
    void /* unknown type, empty encoding */ _year;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic, copy) NSString *colorHex;
@property (nonatomic, copy) NSData *currentVehicleState;
@property (nonatomic, copy) NSDate *dateOfVehicleIngestion;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *headUnitBluetoothIdentifier;
@property (nonatomic, copy) NSString *headUnitMacAddress;
@property (nonatomic, copy) NSString *iapIdentifier;
@property (nonatomic, copy) NSDate *lastStateUpdateDate;
@property (nonatomic, copy) NSString *licensePlate;
@property (nonatomic, copy) NSString *lprPowerType;
@property (nonatomic, copy) NSString *lprVehicleType;
@property (nonatomic, copy) NSString *manufacturer;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *pairedAppIdentifier;
@property (nonatomic) long long positionIndex;
@property (nonatomic, copy) NSData *powerByConnector;
@property (nonatomic, copy) NSString *siriIntentsIdentifier;
@property (nonatomic, retain) NSNumber *supportedConnectors;
@property (nonatomic, copy) NSString *vehicleIdentifier;
@property (nonatomic, retain) NSNumber *vehicleType;
@property (nonatomic, retain) NSNumber *year;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0 store:(id)a1;
- (id)initWithStore:(id)a0 colorHex:(id)a1 currentVehicleState:(id)a2 dateOfVehicleIngestion:(id)a3 displayName:(id)a4 headUnitBluetoothIdentifier:(id)a5 headUnitMacAddress:(id)a6 iapIdentifier:(id)a7 lastStateUpdateDate:(id)a8 licensePlate:(id)a9 lprPowerType:(id)a10 lprVehicleType:(id)a11 manufacturer:(id)a12 model:(id)a13 pairedAppIdentifier:(id)a14 positionIndex:(long long)a15 powerByConnector:(id)a16 siriIntentsIdentifier:(id)a17 supportedConnectors:(id)a18 vehicleIdentifier:(id)a19 vehicleType:(id)a20 year:(id)a21;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0;

@end
