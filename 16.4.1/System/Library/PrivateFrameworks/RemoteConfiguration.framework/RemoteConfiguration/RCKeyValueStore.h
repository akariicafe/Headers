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

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectsForKeys:(id)a0;
- (void)operationThrottler:(id)a0 performAsyncOperationWithCompletion:(id /* block */)a1;
- (BOOL)containsObjectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)_queueSave;
- (void)addAllEntriesToDictionary:(id)a0;
- (id)objectForKey:(id)a0;
- (void)setOptionBackupEnabled:(BOOL)a0;
- (void)removeObjectsForKeys:(id)a0;
- (BOOL)_shouldMigrateOnUpgrade;
- (id)objectForKeyedSubscript:(id)a0;
- (void)_clearStore;
- (id)initWithName:(id)a0 directory:(id)a1 version:(unsigned long long)a2 options:(unsigned long long)a3 migrator:(id)a4;
- (void)setBoolValue:(BOOL)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)_logCacheStatus;
- (void)addEntriesFromDictionary:(id)a0;
- (id)initWithName:(id)a0 directory:(id)a1 version:(unsigned long long)a2 options:(unsigned long long)a3;
- (void)removeAllObjects;
- (id)_dictionary;
- (BOOL)_persistOnlyInMemoryEnabled;
- (BOOL)boolValueForKey:(id)a0;
- (void)saveWithCompletionHandler:(id /* block */)a0;
- (void)setObjects:(id)a0 forKeys:(id)a1;
- (id)_loadFromDisk;
- (id)init;
- (id)_initializeStoreDirectoryWithName:(id)a0;
- (BOOL)_isBackupEnabled;
- (id)allKeys;
- (void)updateObjectsForKeys:(id)a0 withBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_saveAsyncWithCompletionHandler:(id /* block */)a0;

@end
