@class NSArray, HKActivityCache;

@interface HKCurrentActivityCacheQueryResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HKActivityCache *currentActivityCache;
@property (copy, nonatomic) NSArray *activeEnergyResults;
@property (copy, nonatomic) NSArray *appleMoveTimeResults;
@property (copy, nonatomic) NSArray *appleExerciseTimeResults;
@property (copy, nonatomic) NSArray *appleStandHourResults;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
