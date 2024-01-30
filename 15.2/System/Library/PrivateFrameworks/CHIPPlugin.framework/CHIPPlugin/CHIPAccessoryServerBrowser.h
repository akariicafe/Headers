@class CHIPPluginStorage, CHIPDeviceController, NSString, CHIPPluginResidentStateManager, NSOperationQueue, CHIPPluginMatterKeypair, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, HAPAccessoryServerBrowserDelegate;

@interface CHIPAccessoryServerBrowser : HAPAccessoryServerBrowser <CHIPPluginResidentStateManagerDelegate, CHIPPluginStorageDelegate, HMFLogging>

@property (readonly, nonatomic) NSMutableSet *discoveredAccessoryServers;
@property (readonly, nonatomic) NSMutableSet *stagedAccessoryServers;
@property (weak, nonatomic) id<HAPAccessoryServerBrowserDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain) CHIPDeviceController *chipController;
@property (retain) NSOperationQueue *restartQueue;
@property (retain, nonatomic) CHIPPluginMatterKeypair *nocSigner;
@property (readonly, nonatomic) CHIPPluginStorage *storage;
@property (readonly, nonatomic) CHIPPluginResidentStateManager *residentStateManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (BOOL)_delegateRespondsToSelector:(SEL)a0;
- (id)initWithQueue:(id)a0;
- (void)discoverAccessoryServerWithIdentifier:(id)a0;
- (long long)linkType;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (id)logIdentifier;
- (void)stopDiscoveringAccessoryServers;
- (void)startDiscoveringAccessoryServers;
- (void)matchAccessoryServerWithSetupID:(id)a0 serverIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)handleSystemKeychainStoreUpdatedNotification:(id)a0;
- (void)prepareForServerWithSetupCode:(id)a0 discriminator:(id)a1 identifier:(id)a2 category:(id)a3 name:(id)a4 vendorID:(id)a5 productID:(id)a6 serialNumber:(id)a7 completeionHandler:(id /* block */)a8;
- (void)discardStagedAccessoryServerWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)stagedAccessoryServerWithIdentifier:(id)a0;
- (void)stageAccessoryServerWithSetupPayload:(id)a0 completionHandler:(id /* block */)a1;
- (void)storageDidBecomeAvailable:(id)a0;
- (void)storageDidUpdateData:(id)a0 isLocalChange:(BOOL)a1;
- (id)_allServers;
- (void)_restartChipStack;
- (void)_deleteOldPairings;
- (unsigned long long)_readNodeIDSync;
- (void)_setNodeIDSync:(unsigned long long)a0;
- (void)_cleanupDiscoveredServers;
- (void)invalidateAccessoryServer:(id)a0;
- (void)_setupPairedDevices;
- (id)_createCHIPAccessoryForNodeID:(unsigned long long)a0;
- (void)restartChipStack;
- (void)invalidateAllDiscoveredServers;
- (void)setupPairedDevices;
- (void)_cleanupStagedServers;
- (void)residentStateManagerDidUpdateIsCurrentDevicePrimaryResident:(id)a0;
- (void)commitStagedAccessoryServer:(id)a0;

@end
