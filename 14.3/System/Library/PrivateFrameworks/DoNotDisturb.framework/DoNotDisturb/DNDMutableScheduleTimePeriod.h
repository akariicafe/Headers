@class DNDScheduleTime;

@interface DNDMutableScheduleTimePeriod : DNDScheduleTimePeriod

@property (copy, nonatomic) DNDScheduleTime *startTime;
@property (copy, nonatomic) DNDScheduleTime *endTime;

- (void)setStartTime:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setEndTime:(id)a0;

@end
