@class NSUUID, NSString, HKQuantity;

@interface HKWorkoutConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL shouldUseLowPowerMode;
@property (retain, nonatomic) NSUUID *fitnessMachineSessionUUID;
@property (retain, nonatomic) NSUUID *predictionSessionUUID;
@property (nonatomic) BOOL shouldDisambiguateLocation;
@property (nonatomic) BOOL shouldUseExtendedMode;
@property (copy, nonatomic) NSString *fitnessPlusCatalogWorkoutId;
@property (nonatomic) long long fitnessPlusMediaType;
@property (copy, nonatomic) NSUUID *suggestedActivityUUID;
@property unsigned long long activityType;
@property long long locationType;
@property long long swimmingLocationType;
@property (copy) HKQuantity *lapLength;

+ (id)_workoutConfigurationFromDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)validateIgnoringDeviceSupport:(BOOL)a0 error:(id *)a1;

@end
