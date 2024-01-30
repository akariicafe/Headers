@class NSString, NSMeasurement, NSDictionary, NSDateComponents, NSNumber;

@interface INGetCarPowerLevelStatusIntentResponse : INIntentResponse <INGetCarPowerLevelStatusIntentResponseExport>

@property (readonly, nonatomic) long long code;
@property (copy, nonatomic) NSString *carIdentifier;
@property (copy, nonatomic) NSNumber *fuelPercentRemaining;
@property (copy, nonatomic) NSNumber *chargePercentRemaining;
@property (copy, nonatomic) NSMeasurement *distanceRemaining;
@property (copy, nonatomic) NSNumber *charging;
@property (copy, nonatomic) NSNumber *minutesToFull;
@property (copy, nonatomic) NSMeasurement *maximumDistance;
@property (copy, nonatomic) NSMeasurement *distanceRemainingElectric;
@property (copy, nonatomic) NSMeasurement *maximumDistanceElectric;
@property (copy, nonatomic) NSMeasurement *distanceRemainingFuel;
@property (copy, nonatomic) NSMeasurement *maximumDistanceFuel;
@property (copy, nonatomic) NSDictionary *consumptionFormulaArguments;
@property (copy, nonatomic) NSDictionary *chargingFormulaArguments;
@property (copy, nonatomic) NSDateComponents *dateOfLastStateUpdate;
@property (copy, nonatomic) NSString *activeConnector;
@property (copy, nonatomic) NSMeasurement *maximumBatteryCapacity;
@property (copy, nonatomic) NSMeasurement *currentBatteryCapacity;
@property (copy, nonatomic) NSMeasurement *minimumBatteryCapacity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (int)_typeFromCode:(long long)a0;
+ (long long)_codeFromType:(int)a0 errorCode:(int)a1 appLaunchRequested:(BOOL)a2;
+ (int)_errorCodeFromCode:(long long)a0;
+ (BOOL)_appLaunchRequestedFromCode:(long long)a0;

- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (long long)_codeWithName:(id)a0;
- (id)initWithBackingStore:(id)a0;
- (id)propertiesByName;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)_initWithCode:(long long)a0 userActivity:(id)a1;
- (long long)_intentResponseCode;
- (void)setPropertiesByName:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
