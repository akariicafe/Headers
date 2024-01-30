@class NSArray, NSString, NSDateInterval;

@interface HKSHSleepPeriodSegment : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy, nonatomic) NSArray *sampleIntervals;
@property (readonly, nonatomic) long long category;
@property (readonly, copy) NSString *hk_redactedDescription;

+ (id)sleepPeriodSegmentWithDateInterval:(id)a0 sampleIntervals:(id)a1 category:(long long)a2;
+ (id)sleepPeriodSegmentWithDateInterval:(id)a0 category:(long long)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
