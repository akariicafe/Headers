@interface TPSUserTypeChecker : NSObject

+ (long long)userType;
+ (int)_majorVersionForBuildVersion:(id)a0;
+ (id)_previousBuildVersion;
+ (long long)userTypeFromCloudDataWithKey:(id)a0;
+ (long long)userTypeFromMigratorData;

@end
