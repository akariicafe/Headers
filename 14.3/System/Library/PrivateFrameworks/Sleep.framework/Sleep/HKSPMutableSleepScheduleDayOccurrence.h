@class HKSPChangeSet, NSSet, NSString, HKSPAlarmConfiguration, NSDateComponents, NSDate;

@interface HKSPMutableSleepScheduleDayOccurrence : HKSPSleepScheduleDayOccurrence <HKSPMutableObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDateComponents *bedtimeComponents;
@property (copy, nonatomic) NSDateComponents *wakeUpComponents;
@property (retain, nonatomic) HKSPAlarmConfiguration *alarmConfiguration;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) HKSPChangeSet *changeSet;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSSet *significantChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)freeze;
- (id)generateSleepScheduleOccurrenceWithWeekdays:(unsigned long long)a0;
- (BOOL)hasChangeAffectingScheduling;
- (id)initWithCoder:(id)a0;
- (void)testTurnOnAlarm;
- (void)testTurnOffAlarm;
- (void)encodeWithCoder:(id)a0;

@end
