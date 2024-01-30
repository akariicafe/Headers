@class NSOperationQueue, NSMutableDictionary, NSString;
@protocol CHIPPluginStorageDelegate, CHIPPluginStorageDataSource;

@interface CHIPPluginStorage : HMFObject <HMFLogging, CHIPPersistentStorageDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSOperationQueue *keyValueStoreUpdateQueue;
@property (readonly) NSMutableDictionary *temporaryStorage;
@property (weak) id<CHIPPluginStorageDelegate> delegate;
@property (weak) id<CHIPPluginStorageDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)logCategory;
+ (void)deleteCHIPPluginDataForNodeID:(id)a0 withStorage:(id)a1;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)init;
- (void)handleUpdatedDataWithIsLocalChange:(BOOL)a0;
- (id)CHIPGetKeyValue:(id)a0;
- (void)CHIPSetKeyValue:(id)a0 value:(id)a1;
- (void)CHIPDeleteKeyValue:(id)a0;
- (id)_preferencesValueForKey:(id)a0;
- (BOOL)_checkVersion:(id)a0;
- (id)_getCHIPFrameworkVersion;
- (void)resetStorage;
- (void)_moveTempStorageIntoDataSource;
- (BOOL)_syncSetDataSourceValue:(id)a0 forKey:(id)a1;
- (void)_removeAllDataSourceDataWithCompletion:(id /* block */)a0;
- (void)_setPreferencesValueForKey:(id)a0 value:(id)a1;
- (id)_tempValueForKey:(id)a0;
- (void)_setTempValueForKey:(id)a0 value:(id)a1;
- (void)_removeTempValueForKey:(id)a0;

@end
