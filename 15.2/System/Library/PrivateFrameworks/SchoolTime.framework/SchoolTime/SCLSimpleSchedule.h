@class SCLScheduleTime;

@interface SCLSimpleSchedule : SCLSchedule

@property (readonly, copy, nonatomic) SCLScheduleTime *startTime;
@property (readonly, copy, nonatomic) SCLScheduleTime *endTime;
@property (readonly, nonatomic) long long repeatSchedule;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)recurrences;
- (id)initWithSimpleSchedule:(id)a0;

@end
