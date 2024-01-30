@class HKQuantity, NSMutableData, NSMutableArray, NSDate;

@interface _HDDemoDataActivityWorkoutState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableData *associatedObjectUUIDs;
@property (retain, nonatomic) NSMutableArray *workoutEvents;
@property (nonatomic) unsigned long long workoutActivityType;
@property (nonatomic) unsigned long long goalType;
@property (retain, nonatomic) HKQuantity *goal;
@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) double totalEnergyBurnedInKilocalories;
@property (nonatomic) double totalDistanceWalkingInMeters;
@property (nonatomic) double totalDistanceCyclingInMeters;
@property (nonatomic) double totalDistanceSwimmingInYards;
@property (nonatomic) double totalSwimmingStrokes;
@property (nonatomic) long long swimmingStrokeStyle;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (long long)lapCount;
- (void)encodeWithCoder:(id)a0;
- (void)addAssociatedObjectUUID:(id)a0;
- (id)generateWorkoutWithEndDate:(id)a0 profile:(id)a1 provenance:(id)a2;
- (void)addWorkoutEvent:(id)a0;
- (void)addWorkoutRouteFromFilePath:(id)a0 profile:(id)a1 provenance:(id)a2 workout:(id)a3;

@end
