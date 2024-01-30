@interface CalEntitlementsVerifier : NSObject

+ (BOOL)currentProcessHasWatchOSMutableDatabaseEntitlement;
+ (BOOL)currentProcessHasBooleanEntitlement:(id)a0;
+ (BOOL)currentProcessHasContactsUIEntitlement;
+ (BOOL)currentProcessIsCalendarDaemon;
+ (BOOL)currentProcessHasBirthdayModificationEntitlement;
+ (BOOL)currentProcessIsFirstPartyCalendarApp;
+ (BOOL)currentProcessHasLocationdEffectiveBundleEntitlement;
+ (BOOL)currentProcessHasAllowSuggestionsEntitlement;
+ (BOOL)currentProcessHasSyncClientEntitlement;
+ (BOOL)currentProcessIsDataAccess;

@end
