@interface AppAttestKeychainCleanupController : NSObject

+ (void)start;
+ (void)_registerActivity;
+ (void)_updateActivityCriteria:(id *)a0;
+ (void)_removeAllKeychainItemsForMissingApps;
+ (id)_listOfInstalledAppHashes;
+ (id)_applicationIdentifierForApplicationProxy:(id)a0;

@end
