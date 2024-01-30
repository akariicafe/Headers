@class HKQuantity, HKWorkoutConfiguration, HKDevice, NSUUID;

@interface HKWorkoutBuilderConfiguration : HKTaskConfiguration

@property (copy, nonatomic) HKDevice *device;
@property (copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration;
@property (nonatomic) unsigned long long goalType;
@property (copy, nonatomic) HKQuantity *goal;
@property (copy, nonatomic) NSUUID *associatedSessionUUID;
@property (nonatomic) BOOL shouldCollectWorkoutEvents;
@property (nonatomic) BOOL requiresRecovery;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
