@interface EKFeatureSet : NSObject

+ (BOOL)mustDisplaySplashScreenToUser;
+ (BOOL)areVehicleTriggersEnabled;
+ (BOOL)isTravelAdvisorySupported;
+ (unsigned long long)_currentSplashScreenVersion;
+ (BOOL)isConservativeEntryEnabled;
+ (BOOL)eventsFoundInAppsEnabled;
+ (BOOL)automaticGeocodingEnabled;
+ (BOOL)isContinuitySupported;
+ (BOOL)eventDetailsDayPreviewEnabled;
+ (BOOL)isSuggestionsEnabled;
+ (BOOL)calendarListViewCellsFeaturesExtraContent;
+ (BOOL)areQuickActionsSupported;
+ (void)userAcknowledgedSplashScreen;
+ (BOOL)calendarListViewCellsFeaturesAttendeeInformation;
+ (BOOL)areContextualRemindersSupported;
+ (BOOL)areApplicationBadgesSupported;

@end
