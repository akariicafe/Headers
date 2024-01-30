@class NSDictionary, NSString, NSDateInterval;

@interface _HKSleepQueryResult : NSObject <_HKDateBounded, NSSecureCoding> {
    NSDictionary *_resultsByCategoryValue;
    NSDateInterval *_dateInterval;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDateInterval *resultInterval;
@property (readonly, copy, nonatomic) NSDictionary *samplesBySource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)samplesForSamplesBySource:(id)a0;
+ (id)dateIntervalForSamples:(id)a0;
+ (id)_preferredSourceFromSources:(id)a0 sourceOrder:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dateInterval;
- (id)startDate;
- (id)initWithCoder:(id)a0;
- (id)dateIntervalsForCategoryValue:(long long)a0;
- (id)initWithResultInterval:(id)a0 dateIntervalsByCategoryValue:(id)a1 samplesBySource:(id)a2;
- (id)preferredDateIntervals;
- (BOOL)_calculatePreferredDuration:(double *)a0 categoryValue:(long long *)a1;
- (id)endDate;
- (void)encodeWithCoder:(id)a0;

@end
