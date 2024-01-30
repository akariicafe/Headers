@class NSNumber;

@interface DNDSMutableScheduleSettingsRecord : DNDSScheduleSettingsRecord

@property (copy, nonatomic) NSNumber *lastUpdatedTimestamp;
@property (copy, nonatomic) NSNumber *scheduleEnabledSetting;
@property (copy, nonatomic) NSNumber *timePeriodStartTimeHour;
@property (copy, nonatomic) NSNumber *timePeriodStartTimeMinute;
@property (copy, nonatomic) NSNumber *timePeriodEndTimeHour;
@property (copy, nonatomic) NSNumber *timePeriodEndTimeMinute;
@property (copy, nonatomic) NSNumber *timePeriodWeekdays;
@property (copy, nonatomic) NSNumber *bedtimeBehaviorEnabledSetting;

- (void)setTimePeriodStartTimeHour:(id)a0;
- (void)setScheduleEnabledSetting:(id)a0;
- (void)setTimePeriodWeekdays:(id)a0;
- (void)setTimePeriodEndTimeHour:(id)a0;
- (void)setBedtimeBehaviorEnabledSetting:(id)a0;
- (void)setLastUpdatedTimestamp:(id)a0;
- (void)setTimePeriodEndTimeMinute:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTimePeriodStartTimeMinute:(id)a0;

@end
