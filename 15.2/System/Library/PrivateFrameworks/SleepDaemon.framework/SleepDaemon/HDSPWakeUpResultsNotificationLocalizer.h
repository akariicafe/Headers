@class HDSPWakeUpResultsNotification, HKHealthStore;

@interface HDSPWakeUpResultsNotificationLocalizer : NSObject

@property (readonly, nonatomic) HDSPWakeUpResultsNotification *notification;
@property (readonly, nonatomic) HKHealthStore *healthStore;

- (unsigned long long)category;
- (void).cxx_destruct;
- (id)localizedBody;
- (id)localizedTitle;
- (id)userFirstName;
- (id)_localizedBodyForOneDayNotification;
- (id)_localizedBodyForOneWeekDayNotification;
- (id)_localizedBodyForTwoWeekNotification;
- (double)dailySleepDurationGoal;
- (id)_embeddedNameLocalizedStringKey;
- (id)_embeddedNameSubstitutionStringKey;
- (id)_regularLocalizedStringKey;
- (id)_regularSubstitutionStringKey;
- (long long)weeklyGoalAchieved;
- (long long)notificationVariant;
- (id)_localizedStringKeyBase;
- (id)initWithNotification:(id)a0 healthStore:(id)a1;

@end
