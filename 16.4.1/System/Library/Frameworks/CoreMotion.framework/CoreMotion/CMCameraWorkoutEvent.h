@interface CMCameraWorkoutEvent : NSObject

@property (nonatomic) double localMachtime;
@property (nonatomic) double globalMachtime;
@property (nonatomic) int eventType;
@property (nonatomic) long long workoutType;

@end
