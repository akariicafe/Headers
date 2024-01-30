@class NSArray, NSString, NSDateInterval;

@interface HKSleepPeriodSegment : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy, nonatomic) NSArray *sampleIntervals;
@property (readonly, nonatomic) long long category;
@property (readonly, nonatomic) BOOL containsAppleSleepTrackingData;
@property (readonly, copy) NSString *hk_redactedDescription;

+ (id)sleepPeriodSegmentWithDateInterval:(id)a0 category:(long long)a1;
+ (id)sleepPeriodSegmentWithDateInterval:(id)a0 sampleIntervals:(id)a1 category:(long long)a2 containsAppleSleepTrackingData:(BOOL)a3;
+ (id)sleepPeriodSegmentWithDateInterval:(id)a0 sampleIntervals:(id)a1 category:(long long)a2;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
