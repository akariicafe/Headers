@class HKQuantity;

@interface HDDemoDataWorkoutPrototype : NSObject

@property (nonatomic) unsigned long long workoutActivityType;
@property (nonatomic) unsigned long long goalType;
@property (retain, nonatomic) HKQuantity *goal;
@property (nonatomic) double startTimeOffsetInDay;
@property (nonatomic) double duration;
@property (nonatomic) double totalEnergyBurnedInKcal;
@property (nonatomic) double totalDistanceWalkingInMiles;
@property (nonatomic) double totalDistanceCyclingInMiles;
@property (nonatomic) double totalDistanceSwimmingInYards;
@property (nonatomic) double swimmingSegmentDistanceInYards;
@property (nonatomic) long long totalSwimmingSegments;
@property (nonatomic) long long numLapsPerSegment;
@property (nonatomic) double swimTimePerSegment;
@property (nonatomic) double restTimePerSegment;
@property (nonatomic) long long swimmingStrokeStyle;

+ (id)HIITPrototype;
+ (id)hikingPrototype;
+ (id)coolDownPrototype;
+ (id)coreTrainingPrototype;
+ (id)dancePrototype;
+ (id)ellipticalPrototype;
+ (id)functionalStrengthTrainingPrototype;
+ (id)pickRandomWorkoutFrom:(id)a0;
+ (id)runningPrototype;
+ (id)swimmingPrototype;
+ (id)thirdPartyWorkoutPrototype;
+ (id)walkingPrototype;
+ (id)workoutPrototypeWithActivityType:(unsigned long long)a0 goalType:(unsigned long long)a1 goal:(id)a2 startTime:(double)a3 duration:(double)a4 energyBurned:(double)a5 distanceWalking:(double)a6 distanceCycling:(double)a7;
+ (id)workoutPrototypeWithActivityType:(unsigned long long)a0 goalType:(unsigned long long)a1 goal:(id)a2 startTime:(double)a3 duration:(double)a4 energyBurned:(double)a5 distanceWalking:(double)a6 distanceCycling:(double)a7 distanceSwimming:(double)a8 distanceSwimmingSegment:(double)a9 totalSwimmingSegments:(long long)a10 numLapsPerSegment:(long long)a11 swimTimePerSegment:(double)a12 restTimePerSegment:(double)a13 swimmingStrokeStyle:(long long)a14;
+ (id)yogaAndRunningPrototypes;
+ (id)yogaPrototype;

- (void).cxx_destruct;

@end
