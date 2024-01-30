@class KVDictionaryLog;

@interface CKVGlobalInfoLog : NSObject {
    KVDictionaryLog *_log;
}

- (id)schemaVersion;
- (id)allLanguageCodes;
- (unsigned char)enablementOptions;
- (void).cxx_destruct;
- (id)initWithRootDirectory:(id)a0;
- (id)lastMigration;
- (id)migratedBuildVersion;
- (id)migratedProjectVersion;
- (id)migrationAttempts;
- (BOOL)recordMigrationAttempt;
- (BOOL)recordMigrationWithBuildVersion:(id)a0 projectVersion:(id)a1 enablementOptions:(unsigned char)a2 allLanguageCodes:(id)a3;
- (BOOL)updateAllLanguageCodes:(id)a0;
- (BOOL)updateEnablementOptions:(unsigned char)a0;
- (BOOL)updateSchemaVersion:(id)a0;

@end
