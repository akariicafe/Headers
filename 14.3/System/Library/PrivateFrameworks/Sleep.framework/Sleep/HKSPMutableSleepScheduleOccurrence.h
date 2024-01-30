@class HKSPChangeSet, NSSet, HKSPSleepScheduleDayOccurrence, HKSPAlarmConfiguration, NSDateComponents, NSDate, NSString;

@interface HKSPMutableSleepScheduleOccurrence : HKSPSleepScheduleOccurrence <HKSPMutableObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *backingOccurrence;
@property (copy, nonatomic) NSDateComponents *bedtimeComponents;
@property (copy, nonatomic) NSDateComponents *wakeUpComponents;
@property (nonatomic) unsigned long long weekdays;
@property (retain, nonatomic) HKSPAlarmConfiguration *alarmConfiguration;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) HKSPChangeSet *changeSet;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSSet *significantChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)occurrenceWithWeekdays:(unsigned long long)a0 bedtimeHour:(long long)a1 bedtimeMinute:(long long)a2 wakeUpHour:(long long)a3 wakeUpMinute:(long long)a4;

- (id)init;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)freeze;
- (id)alarmConfiguration;
- (void)setBedtimeComponents:(id)a0;
- (void)setWakeUpComponents:(id)a0;
- (void)turnOnAlarm;
- (id)initWithTemplateOccurrence:(id)a0;
- (void)turnOffAlarm;
- (void)turnOnWeekdays:(unsigned long long)a0;
- (void)setAlarmConfiguration:(id)a0;
- (void)turnOffWeekdays:(unsigned long long)a0;
- (void)applyHourAndMinuteFromBedtimeComponents:(id)a0 wakeUpComponents:(id)a1 gregorianCalendar:(id)a2;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
