@class HKWorkoutConfiguration, NSUUID, CMWorkout, NSArray;

@interface _HDCoreMotionAssertion : HDAssertion {
    BOOL _enableWorkoutChangeDetection;
    HKWorkoutConfiguration *_workoutConfiguration;
    NSUUID *_sessionUUID;
    CMWorkout *_cmWorkout;
    NSArray *_activityConfigurations;
}

- (void).cxx_destruct;

@end
