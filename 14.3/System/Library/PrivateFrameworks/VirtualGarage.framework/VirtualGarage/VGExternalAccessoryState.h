@class NSString, NSMeasurement, NSDictionary, NSNumber;

@interface VGExternalAccessoryState : NSObject {
    NSString *_displayName;
    NSString *_mapsDisplayName;
    int _engineType;
    NSDictionary *_rangesByEngineType;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *manufacturer;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *year;
@property (readonly, nonatomic) NSString *colorHex;
@property (readonly, nonatomic) BOOL isPureElectricVehicle;
@property (readonly, nonatomic) NSMeasurement *currentEVRange;
@property (readonly, nonatomic) NSMeasurement *maxEVRange;
@property (readonly, nonatomic) NSString *consumptionArguments;
@property (readonly, nonatomic) NSString *chargingArguments;
@property (readonly, nonatomic) NSNumber *batteryCharge;
@property (readonly, nonatomic) NSMeasurement *minBatteryCapacity;
@property (readonly, nonatomic) NSMeasurement *currentBatteryCapacity;
@property (readonly, nonatomic) NSMeasurement *maxBatteryCapacity;
@property (readonly, nonatomic) NSNumber *supportedConnectors;
@property (readonly, nonatomic) BOOL isCharging;
@property (readonly, nonatomic) NSNumber *activeConnector;
@property (readonly, nonatomic) NSDictionary *powerByConnector;

- (void).cxx_destruct;
- (id)description;
- (void)_updateWithVehicleInfo:(id)a0;

@end
