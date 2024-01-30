@interface APConfigurationMigrator : NSObject

+ (id)pathToResources;
+ (void)_removeItemAtPath:(id)a0 fileManager:(id)a1;
+ (long long)traverseDirectoryAtPath:(id)a0 replacingConfigurationAtPath:(id)a1;
+ (id)versionNumberFromJSONFileAtPath:(id)a0;
+ (id)versionNumberFromPlistFileAtPath:(id)a0;

@end
