@class SCLScheduleTime;

@interface SCLSimpleSchedule : SCLSchedule

@property (readonly, copy, nonatomic) SCLScheduleTime *startTime;
@property (readonly, copy, nonatomic) SCLScheduleTime *endTime;
@property (readonly, nonatomic) long long repeatSchedule;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)recurrences;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSimpleSchedule:(id)a0;

@end
