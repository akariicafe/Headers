@class NSURL, NSString, MTIntentAlarm, NSUUID, NSDate, NSNumber, MTSound;

@interface MTAlarm : NSObject <MTScheduleable, MTDictionarySerializable, MTSerializable, BSDescriptionProviding, NAEquatable, NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) MTIntentAlarm *intentAlarm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long hour;
@property (nonatomic) unsigned long long minute;
@property (nonatomic) unsigned long long bedtimeHour;
@property (nonatomic) unsigned long long day;
@property (nonatomic) unsigned long long month;
@property (nonatomic) unsigned long long year;
@property (nonatomic) unsigned long long bedtimeMinute;
@property (nonatomic) unsigned long long bedtimeReminderMinutes;
@property (copy, nonatomic) NSNumber *bedtimeReminder;
@property (nonatomic) BOOL sleepMode;
@property (nonatomic) unsigned long long sleepModeOptions;
@property (nonatomic) BOOL sleepTracking;
@property (copy, nonatomic) NSDate *overriddenForDate;
@property (nonatomic) BOOL timeInBedTracking;
@property (nonatomic) BOOL sleepSchedule;
@property (nonatomic) unsigned long long repeatSchedule;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) unsigned long long playOptions;
@property (nonatomic, getter=isSleepAlarm) BOOL sleepAlarm;
@property (nonatomic) BOOL allowsSnooze;
@property (copy, nonatomic) NSDate *snoozeFireDate;
@property (copy, nonatomic) NSDate *bedtimeSnoozeFireDate;
@property (copy, nonatomic) NSDate *firedDate;
@property (copy, nonatomic) NSDate *dismissedDate;
@property (nonatomic) unsigned long long dismissedAction;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (copy, nonatomic) NSDate *bedtimeFiredDate;
@property (copy, nonatomic) NSDate *bedtimeDismissedDate;
@property (nonatomic) unsigned long long bedtimeDismissedAction;
@property (copy, nonatomic) NSDate *keepOffUntilDate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) MTSound *sound;
@property (nonatomic) unsigned long long onboardingVersion;
@property (copy, nonatomic) id /* block */ currentDateProvider;
@property (readonly, nonatomic) NSUUID *alarmID;
@property (readonly, nonatomic) NSURL *alarmURL;
@property (readonly, nonatomic) BOOL repeats;
@property (readonly, nonatomic) BOOL playsOnThisDevice;
@property (readonly, nonatomic, getter=isFiring) BOOL firing;
@property (readonly, nonatomic, getter=isSnoozed) BOOL snoozed;
@property (readonly, nonatomic) NSString *displayTitle;
@property (readonly, nonatomic) unsigned long long sleepDuration;
@property (readonly, nonatomic) NSDate *nextFireDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sleepAlarm;
+ (id)sleepScheduleString:(unsigned long long)a0;
+ (id)sleepAlarmWithHour:(long long)a0 minute:(long long)a1 year:(long long)a2 month:(long long)a3 day:(long long)a4 bedtimeHour:(long long)a5 bedtimeMinute:(long long)a6;
+ (unsigned long long)defaultSleepModeOptions;
+ (id)sleepAlarmWithHour:(long long)a0 minute:(long long)a1;
+ (id)sleepAlarmWithId:(id)a0;
+ (id)propertiesAffectingSnooze;
+ (unsigned long long)defaultPlayOptions;
+ (unsigned long long)defaultPlayOptionsIsSleepAlarm:(BOOL)a0;
+ (BOOL)_isInternalBuild;
+ (id)sleepAlarmWithSchedule:(unsigned long long)a0;
+ (id)propertiesAffectingSync;
+ (BOOL)_date:(id)a0 isOnDay:(long long)a1 calendar:(id)a2;
+ (id)propertiesAffectingBedtime;
+ (id)sleepAlarmWithHour:(long long)a0 minute:(long long)a1 bedtimeHour:(long long)a2 bedtimeMinute:(long long)a3;
+ (id)propertiesAffectingNotification;
+ (id)mostRecentlyUpdatedAlarmForAlarms:(id)a0;
+ (id)alarmWithHour:(unsigned long long)a0 minute:(unsigned long long)a1;
+ (id)propertiesAffectingWaketime;
+ (id)alarm;

- (id)nextTriggerAfterDate:(id)a0;
- (void)setFiring:(BOOL)a0;
- (void)serializeWithSerializer:(id)a0;
- (BOOL)shouldBeScheduled;
- (BOOL)isEqualIgnoringLastModifiedDate:(id)a0;
- (id)_earliestTriggerDateForDate:(id)a0;
- (id)upcomingTriggersAfterDate:(id)a0;
- (id)_initCommon;
- (id)dateComponents;
- (id)initFromDeserializer:(id)a0;
- (id)nextTrigger;
- (id)init;
- (void).cxx_destruct;
- (id)alarmIDIntentObject;
- (BOOL)isValidDateComponent:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)alarmIDString;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)setOverriddenDate:(id)a0;
- (BOOL)isEqualToAlarm:(id)a0;
- (id)nextExpectedBedtimeDateAfterDate:(id)a0;
- (id)nextFireDateAfterDate:(id)a0 includeBedtimeNotification:(BOOL)a1;
- (id)nextExpectedWakeUpDateAfterDate:(id)a0;
- (BOOL)isItemEnabled;
- (id)succinctDescription;
- (id)bedtimeComponents;
- (long long)compare:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)nextTriggersAfterDate:(id)a0;
- (id)nextTriggersAfterDate:(id)a0 includeSnooze:(BOOL)a1 includeBedtimeNotification:(BOOL)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isSingleTime;
- (id)nextTriggersAfterDate:(id)a0 inclusionOptions:(unsigned long long)a1;
- (BOOL)overridesScheduledObject:(id)a0 calendar:(id)a1;
- (id)intentLabel;
- (id)succinctDescriptionBuilder;
- (void)_updatePropertiesFromDeserializer:(id)a0;
- (BOOL)_isEqualToAlarm:(id)a0 checkLastModified:(BOOL)a1;
- (BOOL)confirmedLastBedtimeReminder;
- (BOOL)isEqual:(id)a0;
- (BOOL)overridesNextAlarm:(id)a0 date:(id)a1 calendar:(id)a2;
- (id)nextTriggerAfterDate:(id)a0 includeBedtimeNotification:(BOOL)a1;
- (id)nextFireDateAfterDate:(id)a0;
- (BOOL)isSleepItem;
- (id)_nextDateHelperWithDate:(id)a0 calendar:(id)a1;
- (id)alarmIntentDisplayString;
- (void)scheduleOverridenForDate:(id)a0;
- (id)initWithCurrentTimeFromCurrentDateProvider:(id /* block */)a0;
- (id)initWithHour:(unsigned long long)a0 minute:(unsigned long long)a1;
- (id)singleTimeOverrideDateInCalendar:(id)a0;
- (void)_copyStateOntoAlarm:(id)a0;
- (BOOL)isBedtimeSnoozed;
- (id)nextTriggerAfterDate:(id)a0 ofType:(unsigned long long)a1;
- (double)sleepDurationSeconds;
- (BOOL)overridesAlarm:(id)a0 trigger:(id)a1 calendar:(id)a2;
- (id)getOverriddenDate;
- (BOOL)isSingleTimeAlarm;
- (id)timeObject;
- (id)nextTriggerAfterDate:(id)a0 includeSnooze:(BOOL)a1 includeBedtimeNotification:(BOOL)a2;
- (id)nextTriggersAfterDate:(id)a0 includeBedtime:(BOOL)a1;
- (id)initWithHour:(unsigned long long)a0 minute:(unsigned long long)a1 currentDateProvider:(id /* block */)a2;
- (id)identifier;
- (void)encodeWithCoder:(id)a0;

@end
