@interface ISFileProtectionClassMigrator : NSObject

+ (BOOL)migrate;
+ (BOOL)isMigrationNeeded;
+ (void)setMigrationNeededIfNotSet:(BOOL)a0;

@end
