@class HKWorkoutConfiguration, NSUUID;

@interface HKWorkoutSessionTaskConfiguration : HKTaskConfiguration

@property (copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration;
@property (copy, nonatomic) NSUUID *sessionUUID;
@property (nonatomic) BOOL requiresCoreLocationAssertion;
@property (nonatomic) BOOL requiresRecovery;
@property (nonatomic) BOOL supportsAppRelaunchForRecovery;
@property (nonatomic) BOOL shouldStopPreviousSession;
@property (nonatomic) BOOL supports3rdPartyAOT;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
