@class SCLSchedule;

@interface SCLMutableScheduleSettings : SCLScheduleSettings

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) SCLSchedule *schedule;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSchedule:(id)a0;
- (void)setEnabled:(BOOL)a0;

@end
