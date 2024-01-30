@interface MXUtilities : NSObject

+ (id)osVersion;
+ (id)containerPath;
+ (id)modelIdentifier;
+ (BOOL)isAppAnalyticsEnabled;
+ (id)regionFormat;
+ (id)platformArchitecture;
+ (BOOL)verifySDKVersionForClient:(id)a0;
+ (id)getServicesWhitelist;

@end
