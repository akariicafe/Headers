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

- (void)relayCloudCleanUpEvent;
- (void)registerCallback:(void /* function */ *)a0 queue:(id)a1 context:(void *)a2;
- (void)registerCallback:(void /* function */ *)a0 context:(void *)a1;
- (void)enableIcloudSyncing:(BOOL)a0 ForBundleId:(id)a1;
- (void)pruneKVSStore;
- (void)dealloc;
- (void)removeFromKVStore:(id)a0;
- (void)relayMergeNetworks:(id)a0;
- (void)addToKVStore:(id)a0;
- (void)printCompleteKVStore;
- (void)relayReadStoreValueAction:(id)a0;
- (void)synchronizeAndCallMergeNetworks;
- (void)subscribeKVStoreNotficationsForBundleId:(id)a0;
- (void)ubiquitousKeyValueStoreDidChange:(id)a0;
- (id)initWithEncryptedKVS:(BOOL)a0;
- (id)readCompleteKVStore;
- (void)dispatchUbiquitousKeyValueStoreDidChangeOnBackground:(id)a0;
- (void)relayPruneKVSStore:(id)a0;
- (void)readStoreValueForKey:(id)a0;
- (void)clearKVS;
- (void)queryKeychainSyncState;
- (void)relayKeychainSyncState:(id)a0;
- (void)unSubscribeKVStoreNotfications;
- (void)relayCloudEvent:(id)a0;
- (void)synchronizeKVS;

@end
