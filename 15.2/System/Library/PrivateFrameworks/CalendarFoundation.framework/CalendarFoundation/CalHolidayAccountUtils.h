@interface CalHolidayAccountUtils : NSObject

+ (id)logHandle;
+ (void)ensureHolidayAccountExistsWithAccountStore:(id)a0;
+ (BOOL)holidayCalendarIsEnabledWithAccountStore:(id)a0;
+ (id)_createUnsavedHolidayAccountWithAccountStore:(id)a0;
+ (BOOL)_isEnabledWithAccount:(id)a0;
+ (id)_holidayAccountWithAccountStore:(id)a0;
+ (id)holidayAccountDescription;
+ (void)setHolidayCalendarIsEnabled:(BOOL)a0 withAccountStore:(id)a1;

@end
