@class HKQuantity;

@interface HKHeartRateSummaryWorkoutStatistics : HKHeartRateSummaryStatistics

@property (retain, nonatomic, setter=_setAverageHeartRate:) HKQuantity *averageHeartRate;
@property (retain, nonatomic, setter=_setMaximumHeartRate:) HKQuantity *maximumHeartRate;
@property (readonly, nonatomic) unsigned long long workoutActivityType;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithDateInterval:(id)a0 numberOfBuckets:(long long)a1 workoutUUID:(id)a2 workoutActivityType:(unsigned long long)a3;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
