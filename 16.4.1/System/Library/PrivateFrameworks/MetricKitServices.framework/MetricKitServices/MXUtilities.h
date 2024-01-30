@interface MXUtilities : NSObject

+ (id)modelIdentifier;
+ (id)regionFormat;
+ (id)osVersion;
+ (BOOL)isAppAnalyticsEnabled;
+ (id)containerPath;
+ (id)platformArchitecture;
+ (BOOL)isAppInstalledForBundleID:(id)a0;
+ (BOOL)verifySDKVersionForClient:(id)a0;
+ (id)getServicesWhitelist;

@end
