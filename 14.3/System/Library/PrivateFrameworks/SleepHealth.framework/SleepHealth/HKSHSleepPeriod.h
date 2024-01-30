@class NSArray, NSString, NSDateInterval;

@interface HKSHSleepPeriod : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy, nonatomic) NSArray *segments;
@property (readonly, copy) NSString *hk_redactedDescription;

+ (id)sleepPeriodWithDateInterval:(id)a0 segments:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (double)durationForCategory:(long long)a0 overlappingDateInterval:(id)a1;

@end
