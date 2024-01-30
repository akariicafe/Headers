@class NSArray, NSString, NSDateInterval;

@interface HKSleepPeriod : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy, nonatomic) NSArray *segments;
@property (readonly, nonatomic) BOOL containsSegmentsWithAppleSleepTrackingData;
@property (readonly, copy) NSString *hk_redactedDescription;

+ (id)sleepPeriodWithDateInterval:(id)a0 segments:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (double)durationForCategory:(long long)a0 overlappingDateInterval:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
