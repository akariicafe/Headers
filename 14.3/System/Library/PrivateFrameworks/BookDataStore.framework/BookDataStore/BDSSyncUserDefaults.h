@interface BDSSyncUserDefaults : NSObject

+ (id)iCloudIdentity;
+ (BOOL)isGlobalICloudDriveSyncOptedIn;
+ (BOOL)_isBundleIdentifierInArray:(struct __CFArray { } *)a0;
+ (BOOL)isSignedIntoICloud;
+ (BOOL)isCloudKitSyncOptedIn;
+ (BOOL)_isServiceEnabledAlternative:(struct __CFString { } *)a0;
+ (BOOL)_isServiceDisabledAlternative:(struct __CFString { } *)a0;
+ (void)_setService:(struct __CFString { } *)a0 enabled:(BOOL)a1;

@end
