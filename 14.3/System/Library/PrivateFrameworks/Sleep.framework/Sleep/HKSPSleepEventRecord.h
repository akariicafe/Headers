@class NSString, NSSet, NSDate;

@interface HKSPSleepEventRecord : NSObject <BSDescriptionProviding, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long sleepCoachingOnboardingCompletedVersion;
@property (readonly, copy, nonatomic) NSDate *sleepCoachingOnboardingFirstCompletedDate;
@property (readonly, nonatomic) long long sleepTrackingOnboardingCompletedVersion;
@property (readonly, copy, nonatomic) NSDate *sleepTrackingOnboardingFirstCompletedDate;
@property (readonly, nonatomic) long long sleepWindDownShortcutsOnboardingCompletedVersion;
@property (readonly, copy, nonatomic) NSDate *sleepWindDownShortcutsOnboardingFirstCompletedDate;
@property (readonly, nonatomic, getter=isCurrentSleepCoachingOnboardingCompleted) BOOL currentSleepCoachingOnboardingCompleted;
@property (readonly, nonatomic, getter=isCurrentSleepTrackingOnboardingCompleted) BOOL currentSleepTrackingOnboardingCompleted;
@property (readonly, nonatomic, getter=isCurrentSleepWindDownShortcutsOnboardingCompleted) BOOL currentSleepWindDownShortcutsOnboardingCompleted;
@property (readonly, nonatomic, getter=isAnySleepTrackingOnboardingCompleted) BOOL anySleepTrackingOnboardingCompleted;
@property (readonly, nonatomic, getter=isAnySleepCoachingOnboardingCompleted) BOOL anySleepCoachingOnboardingCompleted;
@property (readonly, nonatomic, getter=isAnySleepWindDownShortcutsOnboardingCompleted) BOOL anySleepWindDownShortcutsOnboardingCompleted;
@property (readonly, copy, nonatomic) NSDate *bedtimeDelayedUntilDate;
@property (readonly, copy, nonatomic) NSDate *bedtimeSkippedDate;
@property (readonly, copy, nonatomic) NSDate *wakeUpEarlyNotificationConfirmedDate;
@property (readonly, copy, nonatomic) NSDate *wakeUpConfirmedUntilDate;
@property (readonly, copy, nonatomic) NSDate *wakeUpAlarmDismissedDate;
@property (readonly, copy, nonatomic) NSDate *wakeUpAlarmSnoozedUntilDate;
@property (readonly, copy, nonatomic) NSDate *windDownSkippedDate;
@property (readonly, copy, nonatomic) NSDate *goodMorningDismissedDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSSet *significantChanges;

+ (id)testSleepEventRecord;
+ (id)testSleepEventRecordWithAllPropertiesSet;
+ (id)testSleepEventRecordWithOnboardingCompleted;

- (id)init;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_equateTo:(id)a0 builderBuilderBlock:(id /* block */)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)isEquivalentTo:(id)a0;
- (id)initFromObject:(id)a0;
- (void)copyFromObject:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)_buildForEquivalenceTo:(id)a0 builder:(id)a1;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (BOOL)_needsMigrationForCoder:(id)a0;
- (void)_migrateForCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
