@class WBSSQLiteDatabase, NSURL, WBSSafariBookmarksSyncAgentProxy, NSObject;
@protocol OS_dispatch_queue;

@interface WBSPerSitePreferencesSQLiteStore : NSObject {
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteDatabase *_database;
}

@property (retain, nonatomic) WBSSafariBookmarksSyncAgentProxy *syncProxy;

+ (id)staticSyncablePerSiteSettings;
+ (id)defaultDatabaseURL;
+ (id)sharedStore;
+ (BOOL)isPreferenceSyncable:(id)a0;

- (void)removePreferenceValuesForDomains:(id)a0 fromPreference:(id)a1 completionHandler:(id /* block */)a2;
- (void)_openDatabaseIfNecessary;
- (void)_closeDatabase;
- (void)getTimestampAndValueOfPreference:(id)a0 forDomain:(id)a1 completionHandler:(id /* block */)a2;
- (void)_setDeletedCloudKitSyncData:(id)a0 forRecordName:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_tryToPerformTransactionInBlock:(id /* block */)a0;
- (void)removeAllPreferenceValuesFromPreferences:(id)a0 completionHandler:(id /* block */)a1;
- (int)_migrateToCurrentSchemaVersionIfNecessary;
- (void)setValue:(id)a0 ofPreference:(id)a1 forDomain:(id)a2 includeTimestamp:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)getAllDomainsConfiguredForPreference:(id)a0 completionHandler:(id /* block */)a1;
- (void)getAllPreferenceInformationForPreference:(id)a0 completionHandler:(id /* block */)a1;
- (void)setValue:(id)a0 ofPreference:(id)a1 forDomain:(id)a2 completionHandler:(id /* block */)a3;
- (int)_createFreshDatabaseSchema;
- (void)_setSyncData:(id)a0 forPreference:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithDatabaseURL:(id)a0;
- (void)getValuesOfPreference:(id)a0 forDomains:(id)a1 withTimeoutInterval:(double)a2 completionHandler:(id /* block */)a3;
- (void)getValuesOfPreferences:(id)a0 forDomain:(id)a1 withTimeoutInterval:(double)a2 completionHandler:(id /* block */)a3;
- (void)setDefaultValue:(id)a0 forPreference:(id)a1 completionHandler:(id /* block */)a2;
- (void)dealloc;
- (void)removePreferenceValueWithRecordName:(id)a0 completionHandler:(id /* block */)a1;
- (void)_openDatabase;
- (BOOL)_isDatabaseOpen;
- (void)closeDatabase;
- (void)_setSyncData:(id)a0 forPreference:(id)a1 domain:(id)a2 recordName:(id)a3 completionHandler:(id /* block */)a4;
- (int)_setDatabaseSchemaVersion:(int)a0;
- (void)removePreferenceValuesForDomainPrefixes:(id)a0 fromPreferences:(id)a1 completionHandler:(id /* block */)a2;
- (int)_migrateToSchemaVersion_3;
- (void)getSyncDataForPreference:(id)a0 completionHandler:(id /* block */)a1;
- (void)savePerSiteSettingCloudKitRecordToDisk:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeTombstoneWithRecordName:(id)a0 completionHandler:(id /* block */)a1;
- (int)_migrateToSchemaVersion_2;
- (void)getValueOfPreference:(id)a0 forDomain:(id)a1 withTimeoutInterval:(double)a2 completionHandler:(id /* block */)a3;
- (int)_migrateToSchemaVersion_5;
- (BOOL)_migrateToSchemaVersion:(int)a0;
- (id)init;
- (id)_queryListForPreferences:(id)a0;
- (void)removeAllCloudKitRecordsWithCompletionHandler:(id /* block */)a0;
- (void)getDefaultValueForPreference:(id)a0 completionHandler:(id /* block */)a1;
- (void)setValue:(id)a0 ofPreference:(id)a1 forDomain:(id)a2 withTimestamp:(id)a3 completionHandler:(id /* block */)a4;
- (void)removeAllPreferenceValuesFromPreference:(id)a0 completionHandler:(id /* block */)a1;
- (void)getSyncDataForPreference:(id)a0 domain:(id)a1 completionHandler:(id /* block */)a2;
- (int)_migrateToSchemaVersion_4;
- (void).cxx_destruct;
- (void)getDeletedCloudKitSyncDataForRecordName:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAllSyncData;

@end
