@class NSMutableDictionary, NSDate;

@interface _HKSleepStageBucket : NSObject

@property (readonly, nonatomic) double bucketSize;
@property (readonly, nonatomic) double distanceFromStart;
@property (readonly, nonatomic) NSDate *startOfSleep;
@property (readonly, nonatomic) long long numberOfDays;
@property (nonatomic) BOOL hasSleepStagesData;
@property (retain, nonatomic) NSMutableDictionary *sleepStageCounts;

+ (id)bucketsWithSize:(double)a0 startOfSleep:(id)a1 maxSleepDuration:(double)a2 numberOfDays:(long long)a3;

- (void).cxx_destruct;
- (id)initWithBucketSize:(double)a0 distanceFromStart:(double)a1 startOfSleep:(id)a2 numberOfDays:(long long)a3;
- (long long)_probableSleepStage;
- (id)probableSleepPeriodSegment;
- (void)updateWithSegment:(id)a0;

@end
