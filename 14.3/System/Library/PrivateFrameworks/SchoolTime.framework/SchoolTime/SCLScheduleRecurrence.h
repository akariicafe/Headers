@class SCLTimeInterval;

@interface SCLScheduleRecurrence : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) SCLTimeInterval *timeInterval;
@property (readonly, nonatomic) long long day;

+ (id /* block */)dayOfWeekAndStartTimeComparator;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTimeInterval:(id)a0 day:(long long)a1;
- (id)dateIntervalForActiveScheduleOnOrAfterDate:(id)a0 calendar:(id)a1;
- (BOOL)isActiveAtDate:(id)a0 calendar:(id)a1;
- (BOOL)intersectsRecurrence:(id)a0;
- (BOOL)isContiguousWithRecurrence:(id)a0;

@end
