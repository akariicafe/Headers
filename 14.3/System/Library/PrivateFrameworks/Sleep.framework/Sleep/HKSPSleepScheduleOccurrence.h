@class NSString, HKSPSleepScheduleDayOccurrence, HKSPAlarmConfiguration, NSDateComponents, NSDate, NSSet;

@interface HKSPSleepScheduleOccurrence : NSObject <BSDescriptionProviding, HKSPObject, NAEquatable, NAHashable, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HKSPSleepScheduleDayOccurrence *backingOccurrence;
@property (readonly, nonatomic) BOOL usesDefaultBedtimeAndWakeUpComponents;
@property (readonly, nonatomic) BOOL isInitialized;
@property (readonly, nonatomic) BOOL isRepeating;
@property (readonly, nonatomic) BOOL isSingleDayOverride;
@property (readonly, nonatomic) BOOL crossesDayBoundary;
@property (readonly, nonatomic) HKSPAlarmConfiguration *alarmConfiguration;
@property (readonly, copy, nonatomic) NSDateComponents *bedtimeComponents;
@property (readonly, copy, nonatomic) NSDateComponents *wakeUpComponents;
@property (readonly, nonatomic) unsigned long long weekdays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSSet *significantChanges;

+ (id)testSleepScheduleOccurrenceWithAlarmEnabled:(BOOL)a0;
+ (id)testSleepScheduleOccurrence;
+ (id)testOverrideSleepScheduleOccurrence;
+ (id)testSleepScheduleOccurrenceWithAllPropertiesSet;
+ (id)occurrenceWithWeekdays:(unsigned long long)a0 backingOccurrence:(id)a1;
+ (id)testSleepScheduleOccurrenceWithWeekdays:(unsigned long long)a0 alarmEnabled:(BOOL)a1;
+ (id)testSleepScheduleOccurrenceWithWeekdays:(unsigned long long)a0 alarmEnabled:(BOOL)a1 includeToneIds:(BOOL)a2;
+ (id)testSleepScheduleOccurrenceWithWeekdays:(unsigned long long)a0;

- (id)init;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_equateTo:(id)a0 builderBuilderBlock:(id /* block */)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)isEquivalentTo:(id)a0;
- (id)initFromObject:(id)a0;
- (BOOL)isAlarmEquivalentToOverrideOccurrence:(id)a0;
- (void)copyFromObject:(id)a0;
- (id)succinctDescription;
- (id)bedtimeDateForWakeUpDate:(id)a0 gregorianCalendar:(id)a1;
- (id)overrideOccurrenceWithWakeUpComponents:(id)a0 bedtimeComponents:(id)a1;
- (long long)overrideDayInCalendar:(id)a0;
- (id)wakeUpDateForDate:(id)a0 searchBackwards:(BOOL)a1 gregorianCalendar:(id)a2;
- (id)wakeUpDateForDate:(id)a0 day:(long long)a1 searchBackwards:(BOOL)a2 gregorianCalendar:(id)a3;
- (id)overrideOccurrenceTemplateForCurrentDate:(id)a0 gregorianCalendar:(id)a1;
- (BOOL)overridesWakeUpForOccurrenceOnDate:(id)a0 gregorianCalendar:(id)a1;
- (BOOL)isValidOccurrence;
- (BOOL)overrideAppliesToOccurrence:(id)a0 gregorianCalendar:(id)a1;
- (id)nextDateIntervalWithWakeUpAfterDate:(id)a0 gregorianCalendar:(id)a1;
- (BOOL)isEquivalentToOverrideOccurrence:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
