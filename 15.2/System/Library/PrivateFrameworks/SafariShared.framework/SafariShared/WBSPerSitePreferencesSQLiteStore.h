@class NSURL, WBSSQLiteDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface WBSPerSitePreferencesSQLiteStore : NSObject {
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteDatabase *_database;
}

+ (id)sharedStore;

- (id)initWithDatabaseURL:(id)a0;
- (void)_openDatabaseIfNecessary;
- (void)setValue:(id)a0 ofPreference:(long long)a1 forDomain:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)_isDatabaseOpen;
- (void)setValue:(id)a0 ofPreference:(long long)a1 forDomain:(id)a2 includeTimestamp:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)getDefaultValueForPreference:(long long)a0 completionHandler:(id /* block */)a1;
- (void)getAllPreferenceInformationForPreference:(long long)a0 completionHandler:(id /* block */)a1;
- (void)getValuesOfPreferences:(id)a0 forDomain:(id)a1 withTimeoutInterval:(double)a2 completionHandler:(id /* block */)a3;
- (void)removePreferenceValuesForDomains:(id)a0 fromPreference:(long long)a1 completionHandler:(id /* block */)a2;
- (id)_queryListForPreferences:(id)a0;
- (void)getAllDomainsConfiguredForPreference:(long long)a0 completionHandler:(id /* block */)a1;
- (void)removePreferenceValuesForDomainPrefixes:(id)a0 fromPreferences:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_tryToPerformTransactionInBlock:(id /* block */)a0;
- (int)_setDatabaseSchemaVersion:(int)a0;
- (void).cxx_destruct;
- (void)getValueOfPreference:(long long)a0 forDomain:(id)a1 withTimeoutInterval:(double)a2 completionHandler:(id /* block */)a3;
- (void)getTimestampAndValueOfPreference:(long long)a0 forDomain:(id)a1 completionHandler:(id /* block */)a2;
- (void)_closeDatabase;
- (id)init;
- (void)removeAllPreferenceValuesFromPreferences:(id)a0 completionHandler:(id /* block */)a1;
- (void)getValuesOfPreference:(long long)a0 forDomains:(id)a1 withTimeoutInterval:(double)a2 completionHandler:(id /* block */)a3;
- (BOOL)_migrateToSchemaVersion:(int)a0;
- (void)_openDatabase;
- (void)closeDatabase;
- (void)dealloc;
- (void)setDefaultValue:(id)a0 forPreference:(long long)a1 completionHandler:(id /* block */)a2;
- (int)_migrateToCurrentSchemaVersionIfNecessary;
- (void)removeAllPreferenceValuesFromPreference:(long long)a0 completionHandler:(id /* block */)a1;
- (int)_migrateToSchemaVersion_2;
- (int)_createFreshDatabaseSchema;

@end
