@class HMDAccessoryBrowser, NSString, NSMutableSet, NSObject, HAPSystemKeychainStore;
@protocol HAP2StorageDelegate, OS_dispatch_queue;

@interface HMDHAP2Storage : NSObject <HAP2Storage> {
    NSObject<OS_dispatch_queue> *_workQueue;
    HAPSystemKeychainStore *_storage;
    NSMutableSet *_registeredIdentifiers;
    HMDAccessoryBrowser *_accessoryBrowser;
}

@property (weak, nonatomic) id<HAP2StorageDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerPairedAccessoryWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)fetchCacheForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)fetchControllerKeyForDeviceId:(id)a0 completion:(id /* block */)a1;
- (void)fetchKeysForIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)hasKeysForIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)removeCacheForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)removeKeysForIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)saveCacheForIdentifier:(id)a0 data:(id)a1 completion:(id /* block */)a2;
- (void)saveKeysForIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)resetPairedAccessoryIdentifiers;
- (void)_removeKeysForIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)deregisterPairedAccessoryWithIdentifier:(id)a0;
- (id)initWithAccessoryBrowser:(id)a0;
- (void)removeControllerKeyWithCompletion:(id /* block */)a0;
- (void)saveControllerIdentity:(id)a0 completion:(id /* block */)a1;

@end
