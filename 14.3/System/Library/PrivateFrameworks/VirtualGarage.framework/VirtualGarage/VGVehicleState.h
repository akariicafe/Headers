@class NSString, NSMeasurement, NSDate, NSNumber;

@interface VGVehicleState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *batteryPercentage;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *dateOfUpdate;
@property (readonly, nonatomic) long long origin;
@property (readonly, nonatomic) NSMeasurement *currentEVRange;
@property (readonly, nonatomic) NSMeasurement *maxEVRange;
@property (readonly, nonatomic) NSMeasurement *minBatteryCapacity;
@property (readonly, nonatomic) NSMeasurement *currentBatteryCapacity;
@property (readonly, nonatomic) NSMeasurement *maxBatteryCapacity;
@property (readonly, nonatomic) NSString *consumptionArguments;
@property (readonly, nonatomic) NSString *chargingArguments;
@property (readonly, nonatomic) BOOL isCharging;
@property (readonly, nonatomic) unsigned long long activeConnector;

+ (id)_vehicleStateFromStorage:(id)a0;

- (id)_storage;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 dateOfUpdate:(id)a1 origin:(long long)a2 batteryPercentage:(id)a3 currentEVRange:(id)a4 maxEVRange:(id)a5 minBatteryCapacity:(id)a6 currentBatteryCapacity:(id)a7 maxBatteryCapacity:(id)a8 consumptionArguments:(id)a9 chargingArguments:(id)a10 isCharging:(BOOL)a11 activeConnector:(unsigned long long)a12;
- (BOOL)isSignificantlyDifferentFromVehicleState:(id)a0;

@end
