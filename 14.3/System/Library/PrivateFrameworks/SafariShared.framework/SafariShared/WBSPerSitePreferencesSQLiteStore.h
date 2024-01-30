@class NSURL, WBSSQLiteDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface WBSPerSitePreferencesSQLiteStore : NSObject {
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteDatabase *_database;
}

+ (id)sharedStore;

- (void)getDefaultValueForPreference:(long long)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (BOOL)_migrateToSchemaVersion:(int)a0;
- (void).cxx_destruct;
- (id)initWithDatabaseURL:(id)a0;
- (void)setValue:(id)a0 ofPreference:(long long)a1 forDomain:(id)a2 includeTimestamp:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)dealloc;
- (void)removePreferenceValuesForDomains:(id)a0 fromPreference:(long long)a1 completionHandler:(id /* block */)a2;
- (void)getTimestampAndValueOfPreference:(long long)a0 forDomain:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeAllPreferenceValuesFromPreference:(long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)_tryToPerformTransactionInBlock:(id /* block */)a0;
- (void)setDefaultValue:(id)a0 forPreference:(long long)a1 completionHandler:(id /* block */)a2;
- (void)closeDatabase;
- (void)getValueOfPreference:(long long)a0 forDomain:(id)a1 withTimeoutInterval:(double)a2 completionHandler:(id /* block */)a3;
- (void)_openDatabase;
- (int)_migrateToSchemaVersion_2;
- (void)getAllPreferenceInformationForPreference:(long long)a0 completionHandler:(id /* block */)a1;
- (int)_migrateToCurrentSchemaVersionIfNecessary;
- (void)getAllDomainsConfiguredForPreference:(long long)a0 completionHandler:(id /* block */)a1;
- (int)_createFreshDatabaseSchema;
- (BOOL)_isDatabaseOpen;
- (void)setValue:(id)a0 ofPreference:(long long)a1 forDomain:(id)a2 completionHandler:(id /* block */)a3;
- (void)_openDatabaseIfNecessary;
- (void)_closeDatabase;
- (int)_setDatabaseSchemaVersion:(int)a0;
- (void)getValuesOfPreferences:(id)a0 forDomain:(id)a1 withTimeoutInterval:(double)a2 completionHandler:(id /* block */)a3;

@end
