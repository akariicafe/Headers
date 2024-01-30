@interface WLKSettingsCloudUtilities : NSObject

+ (id)_queue;
+ (void)forceUpdateWithCompletion:(id /* block */)a0;
+ (BOOL)cloudSyncEnabled;
+ (id)_connection;
+ (void)deleteAllHistoryWithCompletion:(id /* block */)a0;
+ (BOOL)synchronizeSettingsFromCloudIfNeeded:(id *)a0;
+ (void)updateCloudStoreAppSettings:(id)a0 deleteHistory:(BOOL)a1 completion:(id /* block */)a2;
+ (id)_syncDictionaryForLocalStore;
+ (void)_postChangeDictionaryToCloud:(id)a0 completion:(id /* block */)a1;
+ (void)updateCloudStoreAppSettings:(id)a0 deleteHistory:(BOOL)a1 removeEntry:(BOOL)a2 completion:(id /* block */)a3;
+ (id)_syncDictionaryForAppSettings:(id)a0;
+ (void)updateCloudStoreAccountLevelSetting:(id)a0 value:(id)a1 completion:(id /* block */)a2;
+ (void)_fetchSyncDictionary:(id /* block */)a0;
+ (void)synchronizeSettingsFromCloudIfNeededWithCompletion:(id /* block */)a0;
+ (void)updateCloudStoreWithCompletion:(id /* block */)a0;
+ (void)resetAccountWithCompletion:(id /* block */)a0;
+ (void)updateLocalStoreWithCompletion:(id /* block */)a0;

@end
