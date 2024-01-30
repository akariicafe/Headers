@class HKWorkoutConfiguration, NSUUID;

@interface HKWorkoutSessionTaskConfiguration : HKTaskConfiguration

@property (copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration;
@property (copy, nonatomic) NSUUID *sessionUUID;
@property (nonatomic) BOOL requiresCoreLocationAssertion;
@property (nonatomic) BOOL requiresRecovery;
@property (nonatomic) BOOL supportsAppRelaunchForRecovery;
@property (nonatomic) BOOL shouldStopPreviousSession;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
