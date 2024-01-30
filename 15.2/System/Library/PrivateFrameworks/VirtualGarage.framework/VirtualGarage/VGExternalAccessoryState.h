@class NSString, NSMeasurement, NSDictionary, NSNumber;

@interface VGExternalAccessoryState : NSObject {
    NSString *_displayName;
    NSString *_mapsDisplayName;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *manufacturer;
@property (retain, nonatomic) NSString *model;
@property (retain, nonatomic) NSString *year;
@property (retain, nonatomic) NSString *colorHex;
@property (retain, nonatomic) NSMeasurement *currentEVRange;
@property (retain, nonatomic) NSMeasurement *maxEVRange;
@property (retain, nonatomic) NSString *consumptionArguments;
@property (retain, nonatomic) NSString *chargingArguments;
@property (retain, nonatomic) NSNumber *batteryCharge;
@property (retain, nonatomic) NSMeasurement *minBatteryCapacity;
@property (retain, nonatomic) NSMeasurement *currentBatteryCapacity;
@property (retain, nonatomic) NSMeasurement *maxBatteryCapacity;
@property (nonatomic) NSNumber *supportedConnectors;
@property (readonly, nonatomic) BOOL isCharging;
@property (readonly, nonatomic) NSNumber *activeConnector;
@property (readonly, nonatomic) NSDictionary *powerByConnector;

- (id)description;
- (void).cxx_destruct;
- (void)_updateWithVehicleInfo:(id)a0;

@end
