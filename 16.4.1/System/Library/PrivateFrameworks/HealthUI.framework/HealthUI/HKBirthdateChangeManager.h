@class HKHealthStore;

@interface HKBirthdateChangeManager : NSObject

@property (retain, nonatomic) HKHealthStore *healthStore;

+ (id)_birthdayCalendar;
+ (void)showDisabledWarningWithAge:(long long)a0 presentingViewController:(id)a1;
+ (void)showDisabledWarningWithHealthChecklistWithAge:(long long)a0 presentingViewController:(id)a1 openHealthChecklistInContext:(BOOL)a2;
+ (void)showDisabledWarningWithAge:(long long)a0 presentingViewController:(id)a1 withAlertActions:(id)a2;

- (id)initWithHealthStore:(id)a0;
- (void).cxx_destruct;
- (id)setBirthdate:(id)a0 withError:(id *)a1;
- (id)_nowDate;
- (long long)_ageFromBirthDate:(id)a0;
- (long long)_ageFromBirthDateComponents:(id)a0;

@end
