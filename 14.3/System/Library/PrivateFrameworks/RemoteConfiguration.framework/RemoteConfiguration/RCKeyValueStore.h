@class RCMutexLock, NSString, NSMutableDictionary, NSDictionary;
@protocol RCOperationThrottler, RCKeyValueStoreMigrating;

@interface RCKeyValueStore : NSObject <RCOperationThrottlerDelegate>

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long storeSize;
@property (retain, nonatomic) NSMutableDictionary *objectsByKey;
@property (nonatomic) BOOL needSave;
@property (retain, nonatomic) NSString *storeDirectory;
@property (nonatomic) unsigned long long clientVersion;
@property (nonatomic) unsigned long long optionsMask;
@property (retain, nonatomic) id<RCKeyValueStoreMigrating> migrator;
@property (retain, nonatomic) RCMutexLock *writeLock;
@property (retain, nonatomic) id<RCOperationThrottler> saveThrottler;
@property (nonatomic) BOOL shouldExportJSONSidecar;
@property (readonly, nonatomic) NSDictionary *asDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)persistenceQueue;
+ (BOOL)shouldDumpToJSON;

- (id)objectForKey:(id)a0;
- (BOOL)_persistOnlyInMemoryEnabled;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)saveWithCompletionHandler:(id /* block */)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (void)setObjects:(id)a0 forKeys:(id)a1;
- (id)init;
- (id)_loadFromDisk;
- (void).cxx_destruct;
- (id)_dictionary;
- (void)_saveAsyncWithCompletionHandler:(id /* block */)a0;
- (void)_logCacheStatus;
- (id)objectsForKeys:(id)a0;
- (void)operationThrottler:(id)a0 performAsyncOperationWithCompletion:(id /* block */)a1;
- (BOOL)boolValueForKey:(id)a0;
- (void)_clearStore;
- (id)_initializeStoreDirectoryWithName:(id)a0;
- (void)removeObjectsForKeys:(id)a0;
- (id)initWithName:(id)a0 directory:(id)a1 version:(unsigned long long)a2 options:(unsigned long long)a3;
- (id)initWithName:(id)a0 directory:(id)a1 version:(unsigned long long)a2 options:(unsigned long long)a3 migrator:(id)a4;
- (void)setObject:(id)a0 forKey:(id)a1;
- (BOOL)_shouldMigrateOnUpgrade;
- (void)setBoolValue:(BOOL)a0 forKey:(id)a1;
- (id)allKeys;
- (void)_queueSave;
- (id)objectForKeyedSubscript:(id)a0;
- (void)removeAllObjects;
- (void)setOptionBackupEnabled:(BOOL)a0;
- (BOOL)containsObjectForKey:(id)a0;
- (BOOL)_isBackupEnabled;
- (void)removeObjectForKey:(id)a0;
- (void)addAllEntriesToDictionary:(id)a0;
- (void)updateObjectsForKeys:(id)a0 withBlock:(id /* block */)a1;

@end
