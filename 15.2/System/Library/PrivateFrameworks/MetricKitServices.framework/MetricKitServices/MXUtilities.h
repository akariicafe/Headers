@interface MXUtilities : NSObject

+ (id)modelIdentifier;
+ (id)osVersion;
+ (id)containerPath;
+ (BOOL)isAppAnalyticsEnabled;
+ (id)regionFormat;
+ (id)platformArchitecture;
+ (BOOL)verifySDKVersionForClient:(id)a0;
+ (id)getServicesWhitelist;

@end
