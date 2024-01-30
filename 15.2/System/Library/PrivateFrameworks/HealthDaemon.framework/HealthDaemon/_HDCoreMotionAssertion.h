@class HKWorkoutConfiguration, NSUUID, CMWorkout;

@interface _HDCoreMotionAssertion : HDAssertion {
    HKWorkoutConfiguration *_workoutConfiguration;
    NSUUID *_sessionUUID;
    CMWorkout *_cmWorkout;
}

- (void).cxx_destruct;

@end
