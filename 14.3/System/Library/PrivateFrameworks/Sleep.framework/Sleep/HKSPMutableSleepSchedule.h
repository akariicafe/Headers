@class HKSPChangeSet, NSSet, HKSPSleepScheduleDayOccurrence, NSString, NSDate;

@interface HKSPMutableSleepSchedule : HKSPSleepSchedule <HKSPMutableObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long windDownMinutes;
@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *mondayOccurrence;
@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *tuesdayOccurrence;
@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *wednesdayOccurrence;
@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *thursdayOccurrence;
@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *fridayOccurrence;
@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *saturdayOccurrence;
@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *sundayOccurrence;
@property (retain, nonatomic) HKSPSleepScheduleDayOccurrence *overrideDayOccurrence;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) double windDownTime;
@property (nonatomic) double sleepDurationGoal;
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
- (void)saveOccurrence:(id)a0;
- (void)setWindDownMinutes:(unsigned long long)a0;
- (void)_modifyDayOccurrencesForWeekdays:(unsigned long long)a0 block:(id /* block */)a1;
- (void)removeOccurrence:(id)a0;
- (void)saveOccurrence:(id)a0 options:(unsigned long long)a1;
- (void)_updateOverrideOccurrenceForOccurrence:(id)a0;
- (void)_updateBackingOccurrencesForOccurrence:(id)a0;
- (BOOL)_shouldRemoveOverrideOccurrence:(id)a0;
- (BOOL)hasChangeToWindDownTime;
- (BOOL)_hasChangeToScheduleEnabled;
- (BOOL)_hasChangeForDayOccurrenceKey:(id)a0 dayOccurrence:(id)a1;
- (BOOL)hasChangeAffectingScheduling;
- (BOOL)hasOverrideOccurrenceRemoval;
- (BOOL)hasChangeToSleepDurationGoal;
- (id)lastOverrideOccurrenceWakeUpComponents;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
