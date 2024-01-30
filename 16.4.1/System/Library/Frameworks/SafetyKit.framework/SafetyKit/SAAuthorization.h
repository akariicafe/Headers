@interface SAAuthorization : NSObject

@property (class, readonly, nonatomic, getter=isInFlight) BOOL inFlight;

+ (id)SASyncedBundleId;
+ (void *)_copyPrefsValueForKey:(id)a0;
+ (void)_setPrefsValue:(id)a0 forKey:(id)a1;
+ (BOOL)_synchronizePrefs;
+ (id)approvedAppExcludingBundleId:(id)a0;
+ (id)approvedBundleId;
+ (BOOL)auditTokenAuthorizedForAnyEmergency:(struct { unsigned int x0[8]; })a0;
+ (BOOL)auditTokenAuthorizedForCrashDetection:(struct { unsigned int x0[8]; })a0;
+ (long long)authorizationStatusForCurrentConnection;
+ (long long)authorizationStatusWithTCCPreflightResult:(int)a0;
+ (BOOL)connectionAuthorizedForAnyEmergency:(id)a0;
+ (BOOL)connectionAuthorizedForCrashDetection:(id)a0;
+ (BOOL)currentConnectionAuthorizedForAnyEmergency;
+ (BOOL)currentConnectionAuthorizedForCrashDetection;
+ (BOOL)setAccess:(BOOL)a0 forBundleId:(id)a1;
+ (void)setThirdPartyBundleId:(id)a0;
+ (void)showAuthorizationPrompt;
+ (BOOL)startAuthorizationForBundleURL:(id)a0 preflightAuthorizationStatus:(long long)a1 completionHandler:(id /* block */)a2;

@end
