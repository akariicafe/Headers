@interface CalEntitlementsVerifier : NSObject

+ (BOOL)currentProcessHasBirthdayModificationEntitlement;
+ (BOOL)currentProcessHasTestingEntitlement;
+ (BOOL)currentProcessIsAutomator;
+ (BOOL)currentProcessHasBooleanEntitlement:(id)a0;
+ (BOOL)currentProcessHasSyncClientEntitlement;
+ (BOOL)currentProcessIsCalendarDaemon;
+ (id)currentProcessGetStringEntitlement:(id)a0;
+ (BOOL)currentProcessHasLocationdEffectiveBundleEntitlement;
+ (id)_currentProcessValueForEntitlement:(id)a0 expectedType:(unsigned long long)a1;
+ (BOOL)currentProcessIsFirstPartyCalendarApp;
+ (BOOL)currentProcessIsPreferences;
+ (BOOL)currentProcessHasWatchOSMutableDatabaseEntitlement;
+ (BOOL)currentProcessHasAllowSuggestionsEntitlement;
+ (BOOL)currentProcessIsDataAccess;
+ (BOOL)currentProcessHasContactsUIEntitlement;

@end
