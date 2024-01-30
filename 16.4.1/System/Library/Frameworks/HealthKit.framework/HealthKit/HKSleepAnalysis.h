@class NSArray;

@interface HKSleepAnalysis : NSObject

@property (readonly, copy, nonatomic) NSArray *sleepDays;
@property (readonly, nonatomic) long long numberOfAsleepSamples;
@property (readonly, nonatomic) double averageTimeInBed;
@property (readonly, nonatomic) double averageTimeAsleep;

+ (id)emptyAnalysis;

- (void).cxx_destruct;
- (id)initWithSleepDays:(id)a0 numberOfAsleepSamples:(long long)a1 averageTimeInBed:(double)a2 averageTimeAlseep:(double)a3;

@end
