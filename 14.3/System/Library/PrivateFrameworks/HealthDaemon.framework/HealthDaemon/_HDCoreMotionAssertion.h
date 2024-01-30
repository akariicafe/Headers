@class HKWorkoutConfiguration, NSUUID, CMWorkout;

@interface _HDCoreMotionAssertion : HDAssertion

@property (readonly, nonatomic) HKWorkoutConfiguration *workoutConfiguration;
@property (readonly, nonatomic) NSUUID *sessionUUID;
@property (retain, nonatomic) CMWorkout *cmWorkout;

- (void).cxx_destruct;
- (id)initWithOwnerIdentifier:(id)a0 sessionUUID:(id)a1 workoutConfiguration:(id)a2;

@end
