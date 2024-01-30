@interface SDSeedProgramMigrator : NSObject

+ (BOOL)_enrollInSeedProgramFromCookie;
+ (void)_removeObsoleteAudiences;
+ (void)_removeObsoleteCatalogs;
+ (BOOL)fixupSeedProgramSettings;
+ (void)migrateSeedProgramSettings;

@end
