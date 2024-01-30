@class SCLScheduleTime;

@interface SCLMutableSimpleSchedule : SCLSimpleSchedule

@property (copy, nonatomic) SCLScheduleTime *startTime;
@property (copy, nonatomic) SCLScheduleTime *endTime;
@property (nonatomic) long long repeatSchedule;

- (void)setEndTime:(id)a0;
- (void)setStartTime:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRepeatSchedule:(long long)a0;

@end
