@class NSDate, HKSPSleepScheduleDayOccurrence, NSString, HKSPAlarmConfiguration, NSSet, NSDictionary, HKSPChangeSet, NSDateComponents;
@protocol HKSPObject;

@interface HKSPMutableSleepScheduleOccurrence : HKSPSleepScheduleOccurrence <HKSPMutableObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *backingOccurrence;
@property (copy, nonatomic) NSDateComponents *bedtimeComponents;
@property (copy, nonatomic) NSDateComponents *wakeUpComponents;
@property (nonatomic) unsigned long long weekdays;
@property (retain, nonatomic) HKSPAlarmConfiguration *alarmConfiguration;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) HKSPChangeSet *changeSet;
@property (readonly, nonatomic) id<HKSPObject> originalObject;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSSet *significantChanges;
@property (readonly, nonatomic) NSDictionary *relationshipChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void)freeze;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)alarmConfiguration;
- (id)initWithTemplateOccurrence:(id)a0;
- (void)setWakeUpComponents:(id)a0;
- (void)setBedtimeComponents:(id)a0;
- (void)setAlarmConfiguration:(id)a0;
- (void)turnOnWeekdays:(unsigned long long)a0;
- (void)turnOffWeekdays:(unsigned long long)a0;
- (void)turnOnAlarm;
- (void)turnOffAlarm;
- (void)applyHourAndMinuteFromBedtimeComponents:(id)a0 wakeUpComponents:(id)a1 gregorianCalendar:(id)a2;

@end
