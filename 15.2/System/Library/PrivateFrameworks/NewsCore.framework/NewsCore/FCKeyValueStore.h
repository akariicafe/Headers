@class NSString, NSDictionary, NSMutableDictionary, FCKeyValueStoreSavePolicy, FCKeyValueStoreClassRegistry;
@protocol FCKeyValueStoreMigrating, NFLocking;

@interface FCKeyValueStore : NSObject <FCJSONEncodableObjectProviding> {
    BOOL _unsafeWaitingOnSave;
    NSString *_name;
    unsigned long long _storeSize;
    NSMutableDictionary *_unsafeObjectsByKey;
    id<NFLocking> _lock;
    unsigned long long _clientVersion;
    unsigned long long _optionsMask;
    FCKeyValueStoreClassRegistry *_classRegistry;
    id<FCKeyValueStoreMigrating> _migrator;
    FCKeyValueStoreSavePolicy *_savePolicy;
    id /* block */ _objectHandler;
    id /* block */ _arrayObjectHandler;
    id /* block */ _dictionaryKeyHandler;
    id /* block */ _dictionaryValueHandler;
}

@property (nonatomic) BOOL shouldExportJSONSidecar;
@property (readonly, nonatomic) NSDictionary *asDictionary;
@property (readonly, nonatomic) NSString *storeDirectory;

- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)keysOfEntriesPassingTest:(id /* block */)a0;
- (void)saveWithCompletionHandler:(id /* block */)a0;
- (BOOL)containsObjectForKey:(id)a0;
- (void)setCloudBackupEnabled:(BOOL)a0;
- (unsigned long long)storeSize;
- (void)save;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)allKeys;
- (id)initWithName:(id)a0 directory:(id)a1 version:(unsigned long long)a2 options:(unsigned long long)a3 classRegistry:(id)a4 migrator:(id)a5 savePolicy:(id)a6;
- (void)setBoolValue:(BOOL)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)replaceContentsWithDictionary:(id)a0;
- (id)initWithName:(id)a0 directory:(id)a1 version:(unsigned long long)a2 options:(unsigned long long)a3 classRegistry:(id)a4 migrator:(id)a5;
- (void)setJSONEncodingHandlersWithObjectHandler:(id /* block */)a0 arrayObjectHandler:(id /* block */)a1 dictionaryKeyHandler:(id /* block */)a2 dictionaryValueHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)addEntriesFromDictionary:(id)a0;
- (void)enumerateKeysAndObjectsForKeys:(id)a0 usingBlock:(id /* block */)a1;
- (id)init;
- (id)initWithName:(id)a0 directory:(id)a1 version:(unsigned long long)a2 options:(unsigned long long)a3 classRegistry:(id)a4;
- (void)updateObjectsForKeys:(id)a0 withBlock:(id /* block */)a1;
- (id)objectForKey:(id)a0;
- (void)addAllEntriesToDictionary:(id)a0;
- (void)setObjects:(id)a0 forKeys:(id)a1;
- (id)jsonEncodableObject;
- (id)objectsForKeys:(id)a0;
- (BOOL)boolValueForKey:(id)a0;
- (void)removeObjectsForKeys:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;

@end
