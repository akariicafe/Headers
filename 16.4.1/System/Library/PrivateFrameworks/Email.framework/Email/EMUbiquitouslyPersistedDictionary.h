@class NSString, NSMutableDictionary, NSObject, NSUbiquitousKeyValueStore;
@protocol OS_os_log, EFScheduler, OS_dispatch_queue, EMUbiquitouslyPersistedDictionaryDelegate;

@interface EMUbiquitouslyPersistedDictionary : NSObject <EFLoggable, EMMutableDictionaryProtocol>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSMutableDictionary *storedObjects;
@property (readonly, nonatomic) NSUbiquitousKeyValueStore *kvStore;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *mutationQueue;
@property (readonly, weak, nonatomic) id<EMUbiquitouslyPersistedDictionaryDelegate> delegate;
@property (readonly, nonatomic) id<EFScheduler> delegateScheduler;
@property (readonly, nonatomic) NSString *plistPath;
@property (readonly, nonatomic) NSUbiquitousKeyValueStore *ubiquitousKeyValueStore;
@property (readonly) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDictionaryWithIdentifier:(id)a0;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)initWithPlistPath:(id)a0 identifier:(id)a1 encrypted:(BOOL)a2 delegate:(id)a3;
- (void)_resetKVStore;
- (id)initWithIdentifier:(id)a0;
- (void)notifyDelegateOfChangedItems:(id)a0 deletedItems:(id)a1;
- (id)_mergeChangesForRemotelyChangedKeys:(id)a0;
- (void)_storeChangedExternally:(id)a0;
- (id)initWithIdentifier:(id)a0 encrypted:(BOOL)a1 delegate:(id)a2;
- (void)removeAllObjects;
- (void)_ensureStoredObjectsAreInKVStore;
- (void)_writeToPlist;
- (id)initWithPlistPath:(id)a0 identifier:(id)a1;
- (void)_synchronize;
- (void)_purgeOldestEntries;
- (void)_mergeKVStoreChangedKeys:(id)a0;
- (void).cxx_destruct;

@end
