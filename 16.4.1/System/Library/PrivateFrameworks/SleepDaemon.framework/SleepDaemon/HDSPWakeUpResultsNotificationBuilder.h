@class NSArray, NSString;

@interface HDSPWakeUpResultsNotificationBuilder : NSObject

@property (readonly, nonatomic) NSArray *daySummaries;
@property (readonly, nonatomic) struct { long long start; long long duration; } morningIndexRange;
@property (readonly, nonatomic) NSString *userFirstName;

- (void).cxx_destruct;
- (BOOL)_didMeetSleepDurationGoalLastNight;
- (id)_notificationForCategory:(unsigned long long)a0 morningIndexRange:(struct { long long x0; long long x1; })a1 goalAchieved:(id)a2;
- (long long)_randomNotificationVariantForCategory:(unsigned long long)a0;
- (id)_sleepDurationGoalAchievedLastNightNotification;
- (id)_sleepDurationGoalAchievedShortWeekNotification;
- (id)_sleepDurationGoalAchievedTwoWeekNotification;
- (id)buildNotification;
- (id)initWithDaySummaries:(id)a0 morningIndexRange:(struct { long long x0; long long x1; })a1 userFirstName:(id)a2;

@end
