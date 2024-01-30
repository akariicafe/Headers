@class NSString, NSData, NSDate, NSNumber;

@interface MapsSync.MapsSyncVehicle : MapsSync.MapsSyncBaseItem {
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
    void /* unknown type, empty encoding */ _powerByConnector;
    void /* unknown type, empty encoding */ _siriIntentsIdentifier;
    void /* unknown type, empty encoding */ _supportedConnectors;
    void /* unknown type, empty encoding */ _vehicleIdentifier;
    void /* unknown type, empty encoding */ _vehicleType;
    void /* unknown type, empty encoding */ _year;
}

@property (nonatomic, readonly) NSString *colorHex;
@property (nonatomic, readonly) NSData *currentVehicleState;
@property (nonatomic, readonly) NSDate *dateOfVehicleIngestion;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *headUnitBluetoothIdentifier;
@property (nonatomic, readonly) NSString *headUnitMacAddress;
@property (nonatomic, readonly) NSString *iapIdentifier;
@property (nonatomic, readonly) NSDate *lastStateUpdateDate;
@property (nonatomic, readonly) NSString *licensePlate;
@property (nonatomic, readonly) NSString *lprPowerType;
@property (nonatomic, readonly) NSString *lprVehicleType;
@property (nonatomic, readonly) NSString *manufacturer;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *pairedAppIdentifier;
@property (nonatomic, readonly) NSData *powerByConnector;
@property (nonatomic, readonly) NSString *siriIntentsIdentifier;
@property (nonatomic, readonly) NSNumber *supportedConnectors;
@property (nonatomic, readonly) NSString *vehicleIdentifier;
@property (nonatomic, readonly) NSNumber *vehicleType;
@property (nonatomic, readonly) NSNumber *year;
@property (nonatomic, readonly) NSString *description;

+ (void)fetch:(long long)a0 :(long long)a1 :(id)a2 sort:(long long)a3 ascending:(BOOL)a4 completion:(id /* block */)a5;
+ (void)fetchForIdentifier:(id)a0 completion:(id /* block */)a1;

- (void)addEditWithBlock:(id /* block */)a0;
- (void)setPropertiesWithObject:(id)a0;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (Class)mutableObjectClass;
- (Class)managedObjectClass;

@end
