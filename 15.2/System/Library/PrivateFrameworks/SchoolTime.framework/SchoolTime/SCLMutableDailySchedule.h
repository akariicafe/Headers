@interface SCLMutableDailySchedule : SCLDailySchedule

+ (BOOL)supportsSecureCoding;

- (void)setStartTime:(id)a0 endTime:(id)a1 forDay:(long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeScheduleForDay:(long long)a0;

@end
