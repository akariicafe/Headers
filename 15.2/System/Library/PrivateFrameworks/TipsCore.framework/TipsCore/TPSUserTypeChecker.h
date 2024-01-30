@interface TPSUserTypeChecker : NSObject

+ (int)_majorVersionForBuildVersion:(id)a0;
+ (id)_previousBuildVersion;
+ (long long)userType;
+ (long long)userTypeFromMigratorData;
+ (long long)userTypeFromCloudDataWithKey:(id)a0;

@end
