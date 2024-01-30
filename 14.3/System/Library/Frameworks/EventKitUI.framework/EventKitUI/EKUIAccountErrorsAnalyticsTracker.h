@interface EKUIAccountErrorsAnalyticsTracker : NSObject

+ (void)_trackErrorShown:(unsigned long long)a0;
+ (void)trackRootUIDisplayedError;
+ (void)trackRootUIInteractedWithError;
+ (void)trackCalendarListDisplayedActionableError;
+ (void)trackCalendarListDisplayedUnknownError;
+ (void)trackCalendarListDisplayedOfflineError;
+ (void)trackCalendarListDisplayedOtherError;
+ (void)trackCalendarListInteractedWithError;
+ (void)trackRefreshedWhileOffline;

@end
