@interface SDSeedProgramMigrator : NSObject

+ (void)migrateSeedProgramSettings;
+ (BOOL)fixupSeedProgramSettings;
+ (void)_removeObsoleteCatalogs;
+ (void)_removeObsoleteAudiences;
+ (BOOL)_enrollInSeedProgramFromCookie;

@end
