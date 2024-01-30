@class NSString;

@interface WorkoutCore.MultiSportWorkoutConfiguration : WorkoutCore.WorkoutConfiguration {
    void /* unknown type, empty encoding */ _subConfigs;
    void /* unknown type, empty encoding */ _title;
    void /* unknown type, empty encoding */ _shouldTrackTransitions;
    void /* unknown type, empty encoding */ _automaticallySwitchLegs;
    void /* unknown type, empty encoding */ overrideDeviceCapability;
}

@property (nonatomic, readonly) NSString *analyticsSubActivities;
@property (nonatomic, readonly) long long hash;

- (void).cxx_destruct;

@end
