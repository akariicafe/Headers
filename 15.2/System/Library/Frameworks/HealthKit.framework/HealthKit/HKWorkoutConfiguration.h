@class NSUUID, HKQuantity;

@interface HKWorkoutConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *fitnessMachineSessionUUID;
@property (retain, nonatomic) NSUUID *predictionSessionUUID;
@property (nonatomic) BOOL shouldDisambiguateLocation;
@property unsigned long long activityType;
@property long long locationType;
@property long long swimmingLocationType;
@property (copy) HKQuantity *lapLength;

+ (id)_workoutConfigurationFromDictionary:(id)a0;

- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)validateAndReturnError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
