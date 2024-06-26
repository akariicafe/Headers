@class NSString, NSDictionary, NSArray, NSNumber;

@interface HKSPAnalyticsDailyReportEvent : NSObject <HKSPAnalyticsEvent>

@property (nonatomic) BOOL isImproveHealthAndActivitySubmissionAllowed;
@property (copy, nonatomic) NSNumber *userAge;
@property (copy, nonatomic) NSString *biologicalSex;
@property (copy, nonatomic) NSNumber *weeksSinceOnboardedSleepSchedule;
@property (copy, nonatomic) NSNumber *weeksSinceOnboardedSleepTracking;
@property (copy, nonatomic) NSNumber *weeksSinceOnboardedWindDownActions;
@property (copy, nonatomic) NSString *activeWatchProductType;
@property (nonatomic) double sleepGoal;
@property (nonatomic) BOOL watchSleepTrackingEnabled;
@property (nonatomic) BOOL timeInBedTrackingEnabled;
@property (nonatomic) BOOL bedTimeWindDownRemindersEnabled;
@property (nonatomic) BOOL wakeUpResultsEnabled;
@property (nonatomic) BOOL scheduledSleepModeEnabled;
@property (nonatomic) BOOL chargeRemindersEnabled;
@property (nonatomic) BOOL scheduleDisabled;
@property (nonatomic) BOOL scheduleMigration;
@property (nonatomic) BOOL scheduleChangePast24Hours;
@property (nonatomic) BOOL scheduleChangePast7days;
@property (nonatomic) BOOL interactedWithWindDownLast24Hrs;
@property (nonatomic) BOOL useSleepScreen;
@property (nonatomic) BOOL alarmFriday;
@property (nonatomic) BOOL alarmMonday;
@property (nonatomic) BOOL alarmSaturday;
@property (nonatomic) BOOL alarmSunday;
@property (nonatomic) BOOL alarmThursday;
@property (nonatomic) BOOL alarmTuesday;
@property (nonatomic) BOOL alarmWednesday;
@property (nonatomic) BOOL scheduleFriday;
@property (nonatomic) BOOL scheduleMonday;
@property (nonatomic) BOOL scheduleSaturday;
@property (nonatomic) BOOL scheduleSunday;
@property (nonatomic) BOOL scheduleThursday;
@property (nonatomic) BOOL scheduleTuesday;
@property (nonatomic) BOOL scheduleWednesday;
@property (copy, nonatomic) NSString *hapticToneIdentifierFriday;
@property (copy, nonatomic) NSString *hapticToneIdentifierMonday;
@property (copy, nonatomic) NSString *hapticToneIdentifierSaturday;
@property (copy, nonatomic) NSString *hapticToneIdentifierSunday;
@property (copy, nonatomic) NSString *hapticToneIdentifierThursday;
@property (copy, nonatomic) NSString *hapticToneIdentifierTuesday;
@property (copy, nonatomic) NSString *hapticToneIdentifierWednesday;
@property (nonatomic) BOOL isDefaultScheduleFriday;
@property (nonatomic) BOOL isDefaultScheduleMonday;
@property (nonatomic) BOOL isDefaultScheduleSaturday;
@property (nonatomic) BOOL isDefaultScheduleSunday;
@property (nonatomic) BOOL isDefaultScheduleThursday;
@property (nonatomic) BOOL isDefaultScheduleTuesday;
@property (nonatomic) BOOL isDefaultScheduleWednesday;
@property (copy, nonatomic) NSNumber *stddevActualTimeAsleep;
@property (copy, nonatomic) NSNumber *stddevScheduledTimeAsleep;
@property (copy, nonatomic) NSNumber *stddevActualVsScheduledTimeAsleep;
@property (nonatomic) long long daysWornWatchToSleepInLast7Days;
@property (nonatomic) long long weekendDaysWornWatchToSleepInLast7Days;
@property (nonatomic) BOOL didWearWatchToSleepLastNight;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *eventPayload;
@property (readonly, nonatomic) NSArray *keysRequiringIHAGating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
