@class SCLTimeInterval;

@interface SCLScheduleRecurrence : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) SCLTimeInterval *timeInterval;
@property (readonly, nonatomic) long long day;

+ (id /* block */)dayOfWeekAndStartTimeComparator;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dateIntervalForActiveScheduleOnOrAfterDate:(id)a0 calendar:(id)a1;
- (id)initWithTimeInterval:(id)a0 day:(long long)a1;
- (BOOL)intersectsRecurrence:(id)a0;
- (BOOL)isActiveAtDate:(id)a0 calendar:(id)a1;
- (BOOL)isContiguousWithRecurrence:(id)a0;

@end
