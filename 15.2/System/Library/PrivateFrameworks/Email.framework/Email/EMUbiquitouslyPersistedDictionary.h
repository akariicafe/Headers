@class NSString, NSMutableDictionary, NSObject, NSUbiquitousKeyValueStore;
@protocol OS_os_log, OS_dispatch_queue;

@interface EMUbiquitouslyPersistedDictionary : NSObject <EFLoggable, EMMutableDictionaryProtocol>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) NSMutableDictionary *storedObjects;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSUbiquitousKeyValueStore *kvStore;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *mutationQueue;
@property (readonly, nonatomic) NSString *plistPath;
@property (readonly, nonatomic) NSUbiquitousKeyValueStore *ubiquitousKeyValueStore;
@property (readonly) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDictionaryWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (void)removeAllObjects;
- (void)_synchronize;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)_storeChangedExternally:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)initWithPlistPath:(id)a0 identifier:(id)a1;
- (void)_mergeKVStoreChangedKeys:(id)a0;
- (void)_resetKVStore;
- (void)_writeToPlist;
- (void)_ensureStoredObjectsAreInKVStore;
- (void)_purgeOldestEntries;

@end
