@class DNDScheduleTimePeriod;

@interface DNDMutableScheduleSettings : DNDScheduleSettings

@property (nonatomic) unsigned long long scheduleEnabledSetting;
@property (copy, nonatomic) DNDScheduleTimePeriod *timePeriod;
@property (nonatomic) unsigned long long bedtimeBehaviorEnabledSetting;

- (void)setTimePeriod:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setScheduleEnabledSetting:(unsigned long long)a0;
- (void)setBedtimeBehaviorEnabledSetting:(unsigned long long)a0;

@end
