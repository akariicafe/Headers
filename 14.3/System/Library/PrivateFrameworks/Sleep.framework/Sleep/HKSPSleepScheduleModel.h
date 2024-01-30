@class HKSPSleepSettings, HKSPSleepSchedule, NSString, HKSPSleepEventRecord, NSDate;

@interface HKSPSleepScheduleModel : NSObject <NSCopying, NAEquatable, NAHashable>

@property (readonly, nonatomic) BOOL goodMorningAlertNotificationEnabled;
@property (readonly, nonatomic) BOOL goodMorningScreenEnabled;
@property (readonly, nonatomic) BOOL chargingRemindersEnabled;
@property (readonly, copy, nonatomic) HKSPSleepSchedule *sleepSchedule;
@property (readonly, copy, nonatomic) HKSPSleepSettings *sleepSettings;
@property (readonly, copy, nonatomic) HKSPSleepEventRecord *sleepEventRecord;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sleepScheduleModelWithSleepSchedule:(id)a0 sleepSettings:(id)a1 sleepEventRecord:(id)a2;
+ (id)testSleepScheduleModelForMigratedUserPriorToOnboardingWithSingularWaketime;
+ (id)testSleepScheduleModelWithSchedule:(id)a0 settings:(id)a1;
+ (id)testSleepScheduleModelForMigratedUserPriorToOnboarding;
+ (id)testSleepScheduleModelForFullyOnboardedUserWithSingularBedtime;
+ (id)testSleepScheduleModelWithAlarmEnabled:(BOOL)a0;
+ (id)testSleepScheduleModel;
+ (id)testSleepScheduleModelForFullyOnboardedUser;
+ (id)testSleepScheduleModelWithSchedule:(id)a0;

- (id)upcomingEventsDueAfterDate:(id)a0;
- (id)nextEventWithIdentifier:(id)a0 dueAfterDate:(id)a1;
- (id)_timelineResultsDueAfterDate:(id)a0;
- (id)previousEventsDueBeforeDate:(id)a0;
- (id)nextOccurrenceAfterDate:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)chargingRemindersEnabledWithLogObject:(id)a0;
- (id)previousOccurrenceBeforeDate:(id)a0;
- (id)nextOccurrenceAfterDate:(id)a0 repeatingWithinInterval:(double)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)upcomingResolvedOccurrenceAfterDate:(id)a0;
- (BOOL)isEquivalentTo:(id)a0;
- (id)previousEventWithIdentifier:(id)a0 dueBeforeDate:(id)a1;
- (id)_upcomingResolvedOccurrencesDueAfterDate:(id)a0 searchBackwards:(BOOL)a1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)upcomingOccurrenceAfterDate:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)nextResolvedOccurrenceAfterDate:(id)a0;
- (long long)alarmStatusForOccurrence:(id)a0;
- (BOOL)goodMorningScreenEnabledWithLogObject:(id)a0;
- (id)_upcomingEventsDueAfterDate:(id)a0 searchBackwards:(BOOL)a1;
- (id)timelineForDate:(id)a0;
- (id)nextResolvedOccurrenceAfterDate:(id)a0 repeatingWithinInterval:(double)a1;
- (BOOL)goodMorningAlertNotificationsEnabledWithLogObject:(id)a0;
- (id)previousResolvedOccurrenceBeforeDate:(id)a0;
- (id)nextEventDueAfterDate:(id)a0;

@end
