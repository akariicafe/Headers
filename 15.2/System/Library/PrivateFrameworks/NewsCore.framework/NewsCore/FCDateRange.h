@class NSDate;

@interface FCDateRange : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSDate *earlierDate;
@property (readonly, nonatomic) NSDate *laterDate;
@property (readonly, nonatomic) BOOL isFinite;
@property (readonly, nonatomic) BOOL isFromInfinity;
@property (readonly, nonatomic) BOOL isToInfinity;
@property (readonly, nonatomic) double timeInterval;
@property (readonly, nonatomic) double absoluteTimeInterval;
@property (readonly, nonatomic) unsigned long long minMillisecondsTimeIntervalSince1970;
@property (readonly, nonatomic) unsigned long long maxMillisecondsTimeIntervalSince1970;

+ (id)dateRangeWithStartDate:(id)a0 endDate:(id)a1;
+ (id)dateRangeWithEarlierDate:(id)a0 laterDate:(id)a1;

- (long long)compare:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)containsDate:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEarlierDate:(id)a0 laterDate:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)timestampDescription;
- (id)initWithStartDate:(id)a0 timeInterval:(double)a1;
- (BOOL)isWithinTimeInterval:(double)a0 ofDateRange:(id)a1;
- (BOOL)startsLaterThanDateRange:(id)a0;
- (id)slicesWithTimeInterval:(double)a0;
- (id)sliceForDate:(id)a0 withInterval:(double)a1;
- (long long)sliceIndexForDate:(id)a0 withInterval:(double)a1;
- (id)intersectionWithDateRange:(id)a0;

@end
