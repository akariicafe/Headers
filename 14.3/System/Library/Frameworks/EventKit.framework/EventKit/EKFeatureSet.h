@interface EKFeatureSet : NSObject

+ (BOOL)calendarListViewCellsFeaturesExtraContent;
+ (BOOL)isContinuitySupported;
+ (BOOL)isTravelAdvisorySupported;
+ (BOOL)areContextualRemindersSupported;
+ (BOOL)automaticGeocodingEnabled;
+ (BOOL)isSuggestionsEnabled;
+ (BOOL)areApplicationBadgesSupported;
+ (BOOL)eventDetailsDayPreviewEnabled;
+ (BOOL)isConservativeEntryEnabled;
+ (BOOL)areQuickActionsSupported;
+ (unsigned long long)_currentSplashScreenVersion;
+ (BOOL)mustDisplaySplashScreenToUser;
+ (BOOL)calendarListViewCellsFeaturesAttendeeInformation;
+ (void)userAcknowledgedSplashScreen;
+ (BOOL)areVehicleTriggersEnabled;
+ (BOOL)eventsFoundInAppsEnabled;

@end
