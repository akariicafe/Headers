@class HKQuantity;

@interface HDDemoDataGeneratorWorkoutConfiguration : NSObject <NSSecureCoding> {
    BOOL _createdFromNSKeyedUnarchiver;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long activityType;
@property (nonatomic) BOOL indoor;
@property (nonatomic) unsigned long long goalType;
@property (retain, nonatomic) HKQuantity *goal;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double kcalRate;
@property (nonatomic) double distanceWalkingRateInMiles;
@property (nonatomic) double distanceCyclingRateInMiles;
@property (nonatomic) double distanceSwimmingRateInYards;
@property (nonatomic) double distanceSwimmingSegmentInYards;
@property (nonatomic) long long numSwimmingSegments;
@property (nonatomic) long long swimmingNumLapsPerSegment;
@property (nonatomic) double swimmingSwimSegmentTime;
@property (nonatomic) double swimmingRestSegmentTime;
@property (nonatomic) long long swimmingStrokeStyle;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)createdFromNSKeyedUnarchiver;
- (id)initWithPrototype:(id)a0 currentDemoDataTime:(double)a1;

@end
