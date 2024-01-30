@class NSString, NSMigrationManager, NSURL;

@interface CoreThemeDefinitionMigrator : NSObject {
    NSMigrationManager *_migrationManager;
    NSURL *_documentURL;
    long long _oldVersion;
    long long _newVersion;
}

@property (copy) NSString *temporaryMigrationPath;

- (BOOL)migrateWithError:(id *)a0;
- (void)dealloc;
- (BOOL)_checkDiskSpace:(id *)a0;
- (BOOL)_updateMetadata:(id *)a0;
- (id)initWithURL:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (id)mappingModelForMigrationWithError:(id *)a0;

@end
