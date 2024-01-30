@class SCLSchedule;

@interface SCLScheduleSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly, nonatomic) unsigned long long version;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) SCLSchedule *schedule;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)dateIntervalForActiveScheduleOnOrAfterDate:(id)a0 calendar:(id)a1;
- (BOOL)isActiveAtDate:(id)a0 calendar:(id)a1;
- (id)startTimeForDay:(long long)a0;
- (id)endTimeForDay:(long long)a0;
- (id)recurrenceForActiveScheduleOnOrAfterDate:(id)a0 calendar:(id)a1;
- (id)initWithSchoolModeScheduleSettings:(id)a0;

@end
