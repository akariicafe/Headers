@interface ATXAppPanelLaunchRatioLogger : NSObject

+ (void)logAppPanelAppLaunchWithSBPageIndex:(unsigned long long)a0;
+ (void)logNonAppPanelAppLaunchFromDockWithUserDefaults:(id)a0;
+ (void)logNonAppPanelAppLaunchWithSBPageIndex:(unsigned long long)a0 userDefaults:(id)a1;
+ (void)logAppPanelAppLaunchWithSBPageIndex:(unsigned long long)a0 userDefaults:(id)a1;
+ (void)logCountedAppLaunchesToEventTracker:(id)a0 homeScreenConfigCache:(id)a1 userDefaults:(id)a2;
+ (id)_getOrCreateDataDictionaryFromDefaults:(id)a0;
+ (void)_writeDataDictionaryToDefaults:(id)a0 dataDictionary:(id)a1;
+ (void)logCountedAppLaunchesToEventTracker:(id)a0 homeScreenPage:(id)a1 dataDictionary:(id)a2;
+ (void)logCountedDockLaunchesToEventTracker:(id)a0 dockAppList:(id)a1 dataDictionary:(id)a2;
+ (void)_logRatioMetricToTracker:(id)a0 location:(int)a1 ratioType:(int)a2 numAppLaunches:(unsigned long long)a3 numAppsShown:(unsigned long long)a4;
+ (int)_homeScreenLocationFromPageIndex:(unsigned long long)a0;
+ (void)logNonAppPanelAppLaunchFromDock;
+ (void)logNonAppPanelAppLaunchWithSBPageIndex:(unsigned long long)a0;
+ (void)logCountedAppLaunchesToEventTracker;

@end
