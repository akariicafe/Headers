@class NSArray, HKSPSleepScheduleDayOccurrence, NSString, HKSPSleepScheduleOccurrence, NSDate, NSSet;

@interface HKSPSleepSchedule : NSObject <BSDescriptionProviding, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *mondayOccurrence;
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *tuesdayOccurrence;
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *wednesdayOccurrence;
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *thursdayOccurrence;
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *fridayOccurrence;
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *saturdayOccurrence;
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *sundayOccurrence;
@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *overrideDayOccurrence;
@property (readonly, nonatomic) unsigned long long windDownMinutes;
@property (readonly, nonatomic) double sleepDurationGoal;
@property (readonly, nonatomic) BOOL isDefaultSchedule;
@property (readonly, nonatomic) HKSPSleepScheduleOccurrence *overrideOccurrence;
@property (readonly, nonatomic) unsigned long long weekdaysWithOccurrences;
@property (readonly, nonatomic) unsigned long long weekdaysWithoutOccurrences;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSArray *occurrences;
@property (readonly, nonatomic) double windDownTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSSet *significantChanges;

+ (id)testWeekdayWeekendSleepSchedule;
+ (id)testSleepScheduleWithOverride;
+ (id)testSleepScheduleWithWindDownMinutes:(unsigned long long)a0;
+ (id)testSleepScheduleWithBedtimeHour:(unsigned long long)a0 bedtimeMinute:(unsigned long long)a1 wakeUpHour:(unsigned long long)a2 wakeUpMinute:(unsigned long long)a3 weekdays:(unsigned long long)a4;
+ (id)testSleepScheduleWithWindDownTimeInterval:(double)a0 alarmEnabled:(BOOL)a1;
+ (id)testSleepScheduleWithBedtimeHour:(unsigned long long)a0 bedtimeMinute:(unsigned long long)a1 wakeUpHour:(unsigned long long)a2 wakeUpMinute:(unsigned long long)a3 weekdays:(unsigned long long)a4 windDownMinutes:(unsigned long long)a5;
+ (id)testSleepSchedule;
+ (id)testWeekdayWeekendSleepScheduleWithOverride;
+ (id)testSleepScheduleWithWindDownTimeInterval:(double)a0;
+ (id)testSleepScheduleWithAlarmEnabled:(BOOL)a0;
+ (id)testSleepScheduleWithAllPropertiesSet;
+ (id)testSleepScheduleWithAllOccurrencePropertiesSet;

- (id)emptyCopy;
- (id)init;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_equateTo:(id)a0 builderBuilderBlock:(id /* block */)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)isEquivalentTo:(id)a0;
- (id)initFromObject:(id)a0;
- (id)overridenOccurrenceForOverrideOccurrence:(id)a0;
- (void)copyFromObject:(id)a0;
- (BOOL)isEnabledAndHasOccurrences;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_enumerateDayOccurrencesWithBlock:(id /* block */)a0;
- (id)_unsortedOccurrences;
- (id)occurrencesOnDays:(unsigned long long)a0;
- (id)_wakeUpComponentsByAddingSleepDurationGoalToBedtimeComponents:(id)a0;
- (id)occurrenceOnDay:(long long)a0;
- (id)allowableRangeForWeekdays:(unsigned long long)a0;
- (id)occurrencesAfterDate:(id)a0 gregorianCalendar:(id)a1;
- (id)mutableOccurrenceTemplate;
- (id)allowableRangeForModifiedOccurrence:(id)a0 gregorianCalendar:(id)a1;
- (double)maximumAllowableWindDown;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
