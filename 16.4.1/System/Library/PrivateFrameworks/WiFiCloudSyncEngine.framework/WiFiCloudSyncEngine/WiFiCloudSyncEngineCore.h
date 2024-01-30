@class NSThread, NSObject, NSUbiquitousKeyValueStore;
@protocol OS_dispatch_queue;

@interface WiFiCloudSyncEngineCore : NSObject

@property NSUbiquitousKeyValueStore *keyValueStore;
@property void *context;
@property void /* function */ *callback;
@property NSThread *clientThread;
@property NSObject<OS_dispatch_queue> *clientQueue;
@property BOOL iCloudSyncingEnabled;
@property BOOL isKVSEncrypted;

- (void)relayCloudEvent:(id)a0;
- (void)enableIcloudSyncing:(BOOL)a0 ForBundleId:(id)a1;
- (void)relayPruneKVSStore:(id)a0;
- (void)addToKVStore:(id)a0 synchronize:(BOOL)a1;
- (void)relayKeychainSyncState:(id)a0;
- (id)readCompleteKVStore;
- (void)readStoreValueForKey:(id)a0;
- (void)synchronizeKVS;
- (void)queryKeychainSyncState;
- (void)printCompleteKVStore;
- (void)registerCallback:(void /* function */ *)a0 context:(void *)a1;
- (void)dispatchUbiquitousKeyValueStoreDidChangeOnBackground:(id)a0;
- (void)unSubscribeKVStoreNotfications;
- (void)subscribeKVStoreNotficationsForBundleId:(id)a0;
- (void)relayMergeNetworks:(id)a0;
- (void)relayCloudCleanUpEvent;
- (void)dealloc;
- (void)pruneKVSStore;
- (void)relayReadStoreValueAction:(id)a0;
- (void)clearKVS;
- (void)removeFromKVStore:(id)a0;
- (id)initWithEncryptedKVS:(BOOL)a0;
- (void)ubiquitousKeyValueStoreDidChange:(id)a0;
- (void)synchronizeAndCallMergeNetworks;
- (void)registerCallback:(void /* function */ *)a0 queue:(id)a1 context:(void *)a2;

@end
