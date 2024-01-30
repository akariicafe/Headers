@class NSString, NSMutableDictionary, NSDictionary, FCKeyValueStoreSavePolicy, FCKeyValueStoreClassRegistry;
@protocol FCKeyValueStoreMigrating, NFLocking;

@interface FCKeyValueStore : NSObject <FCJSONEncodableObjectProviding>

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long storeSize;
@property (retain, nonatomic) NSMutableDictionary *unsafeObjectsByKey;
@property (nonatomic) BOOL unsafeWaitingOnSave;
@property (retain, nonatomic) id<NFLocking> lock;
@property (nonatomic) unsigned long long clientVersion;
@property (nonatomic) unsigned long long optionsMask;
@property (retain, nonatomic) FCKeyValueStoreClassRegistry *classRegistry;
@property (retain, nonatomic) id<FCKeyValueStoreMigrating> migrator;
@property (retain, nonatomic) FCKeyValueStoreSavePolicy *savePolicy;
@property (copy, nonatomic) id /* block */ objectHandler;
@property (copy, nonatomic) id /* block */ arrayObjectHandler;
@property (copy, nonatomic) id /* block */ dictionaryKeyHandler;
@property (copy, nonatomic) id /* block */ dictionaryValueHandler;
@property (nonatomic) BOOL shouldExportJSONSidecar;
@property (readonly, nonatomic) NSDictionary *asDictionary;
@property (readonly, nonatomic) NSString *storeDirectory;

+ (id)persistenceQueue;
+ (BOOL)shouldDumpToJSON;

- (id)objectForKey:(id)a0;
- (void)_save;
- (id)keysOfEntriesPassingTest:(id /* block */)a0;
- (BOOL)_persistOnlyInMemoryEnabled;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)saveWithCompletionHandler:(id /* block */)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (void)setObjects:(id)a0 forKeys:(id)a1;
- (id)init;
- (id)_loadFromDisk;
- (void).cxx_destruct;
- (id)_dictionary;
- (id)objectsForKeys:(id)a0;
- (id)initWithName:(id)a0 directory:(id)a1 version:(unsigned long long)a2 options:(unsigned long long)a3 classRegistry:(id)a4 migrator:(id)a5 savePolicy:(id)a6;
- (BOOL)boolValueForKey:(id)a0;
- (void)save;
- (void)_clearStore;
- (void)setCloudBackupEnabled:(BOOL)a0;
- (id)_initializeStoreDirectoryWithName:(id)a0;
- (void)removeObjectsForKeys:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)jsonEncodableObject;
- (BOOL)_shouldMigrateOnUpgrade;
- (id)fc_jsonString;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (void)setBoolValue:(BOOL)a0 forKey:(id)a1;
- (id)allKeys;
- (void)setJSONEncodingHandlersWithObjectHandler:(id /* block */)a0 arrayObjectHandler:(id /* block */)a1 dictionaryKeyHandler:(id /* block */)a2 dictionaryValueHandler:(id /* block */)a3;
- (id)initWithName:(id)a0 directory:(id)a1 version:(unsigned long long)a2 options:(unsigned long long)a3 classRegistry:(id)a4 migrator:(id)a5;
- (void)replaceContentsWithDictionary:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithName:(id)a0 directory:(id)a1 version:(unsigned long long)a2 options:(unsigned long long)a3 classRegistry:(id)a4;
- (id)fc_jsonEncodableDictionary;
- (void)removeAllObjects;
- (void)_maybeWriteObjectsByKey:(id /* block */)a0;
- (void)_writeObjectsByKey:(id /* block */)a0;
- (void)_readObjectsByKey:(id /* block */)a0;
- (BOOL)_threadSafe;
- (id)fc_jsonStringWithDictionary:(id)a0;
- (void)_maybeSaveJSONRepresentationWithDictionary:(id)a0;
- (BOOL)_isCloudBackupEnabled;
- (id)fc_jsonEncodableDictionaryWithDictionary:(id)a0;
- (BOOL)containsObjectForKey:(id)a0;
- (void)enumerateKeysAndObjectsForKeys:(id)a0 usingBlock:(id /* block */)a1;
- (void)removeObjectForKey:(id)a0;
- (void)addAllEntriesToDictionary:(id)a0;
- (void)updateObjectsForKeys:(id)a0 withBlock:(id /* block */)a1;

@end
