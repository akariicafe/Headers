@interface CalEntitlementsVerifier : NSObject

+ (BOOL)currentProcessIsPreferences;
+ (BOOL)currentProcessIsFirstPartyCalendarApp;
+ (BOOL)currentProcessHasSyncClientEntitlement;
+ (BOOL)currentProcessIsDataAccess;
+ (id)currentProcessGetStringEntitlement:(id)a0;
+ (BOOL)currentProcessHasWatchOSMutableDatabaseEntitlement;
+ (BOOL)currentProcessHasContactsUIEntitlement;
+ (BOOL)currentProcessHasBirthdayModificationEntitlement;
+ (BOOL)currentProcessHasAllowSuggestionsEntitlement;
+ (BOOL)currentProcessHasBooleanEntitlement:(id)a0;
+ (BOOL)currentProcessHasLocationdEffectiveBundleEntitlement;
+ (BOOL)currentProcessHasTestingEntitlement;
+ (BOOL)currentProcessIsCalendarDaemon;
+ (id)_currentProcessValueForEntitlement:(id)a0 expectedType:(unsigned long long)a1;

@end
