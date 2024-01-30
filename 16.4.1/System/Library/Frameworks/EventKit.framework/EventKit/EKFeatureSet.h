@interface EKFeatureSet : NSObject

+ (BOOL)isTravelAdvisorySupported;
+ (BOOL)mustDisplaySplashScreenToUser;
+ (BOOL)calendarListViewCellsFeaturesAttendeeInformation;
+ (BOOL)automaticGeocodingEnabled;
+ (BOOL)eventsFoundInAppsEnabled;
+ (BOOL)areQuickActionsSupported;
+ (BOOL)calendarListViewCellsFeaturesExtraContent;
+ (void)userAcknowledgedSplashScreen;
+ (BOOL)isConservativeEntryEnabled;
+ (BOOL)areContextualRemindersSupported;
+ (BOOL)eventDetailsDayPreviewEnabled;
+ (BOOL)isContinuitySupported;
+ (BOOL)isSuggestionsEnabled;
+ (BOOL)areApplicationBadgesSupported;
+ (unsigned long long)_currentSplashScreenVersion;
+ (BOOL)areVehicleTriggersEnabled;

@end
