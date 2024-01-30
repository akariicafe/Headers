@class HAP2SerializedOperationQueue, NSArray, NSString, HAP2PropertyLock, NSOperationQueue, HAPPowerManager, NSObject, NSMutableArray, HAP2AccessoryServerBrowserOperation, NSMapTable, HAPAccessoryPairingRequest;
@protocol OS_dispatch_queue, HAP2Storage, HAP2AccessoryServerBrowserDelegate;

@interface HAP2AccessoryServerBrowser : HAP2LoggingObject <HAP2AccessoryServerCoordinatorDelegate, HAP2AccessoryServerDelegate, HAP2StorageDelegate, HAPPowerManagerProtocol, HAP2AccessoryServerBrowserPrivate, HAP2AccessoryServerBrowser>

@property (readonly, nonatomic) HAP2PropertyLock *propertyLock;
@property (readonly, nonatomic) NSArray *coordinatorInfo;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) HAP2SerializedOperationQueue *workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchWorkQueue;
@property (retain, nonatomic) NSMutableArray *liveUnpairedAccessoryServers;
@property (retain, nonatomic) NSMutableArray *livePairedAccessoryServers;
@property (readonly, nonatomic) NSMapTable *weakOperationQueuesByDeviceID;
@property (readonly, nonatomic) NSMutableArray *browserOperationQueue;
@property (readonly, nonatomic) HAP2AccessoryServerBrowserOperation *currentOperation;
@property (nonatomic, getter=isDiscovering) BOOL discovering;
@property (nonatomic, getter=isConfirming) BOOL confirming;
@property (retain, nonatomic) HAPPowerManager *powerManager;
@property (nonatomic) unsigned long long powerState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HAPAccessoryPairingRequest *pairingRequest;
@property (readonly, nonatomic) id<HAP2Storage> storage;
@property (weak, nonatomic) id<HAP2AccessoryServerBrowserDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *unpairedAccessoryServers;
@property (readonly, copy, nonatomic) NSArray *pairedAccessoryServers;

+ (id)new;

- (void)coordinator:(id)a0 didCreatePairedAccessoryServer:(id)a1;
- (id)operationQueueForDeviceID:(id)a0;
- (void)removePublicKeyForAccessoryWithID:(id)a0 completion:(id /* block */)a1;
- (void)_finishStartDiscovering;
- (void)accessoryWithDeviceIDIsPaired:(id)a0 completion:(id /* block */)a1;
- (void)stopDiscovering;
- (id)_lookupPairedAccessoryServerWithDeviceID:(id)a0;
- (BOOL)shouldRetryPVDueToAuthenticationError:(id)a0;
- (void)retrieveLocalPairingIdentityForDeviceID:(id)a0 completion:(id /* block */)a1;
- (void)_finishStopDiscovering;
- (void)associateAccessoryWithControllerKeyUsingAccessoryIdentifier:(id)a0;
- (void)_stopDiscovering;
- (void)_enqueueOperation:(id)a0;
- (void)coordinator:(id)a0 didStopDiscoveringWithError:(id)a1;
- (id)currentIdentity;
- (id)initWithCoordinators:(id)a0 storage:(id)a1;
- (void)_notifyCoordinatorsOfAccessoryWithDeviceID:(id)a0;
- (void)savePublicKey:(id)a0 forAccessoryWithID:(id)a1 completion:(id /* block */)a2;
- (void)startConfirmingPairedAccessoryReachability;
- (void)initializeKeyBagIfNecessary;
- (void)coordinator:(id)a0 didStartDiscoveringWithError:(id)a1;
- (void)coordinator:(id)a0 didCreateUnpairedAccessoryServer:(id)a1;
- (void)_updateArraysForDiscoveredAccessoryServer:(id)a0 paired:(BOOL)a1 lost:(id *)a2 existing:(id *)a3;
- (void)stopConfirmingPairedAccessoryReachability;
- (void)storage:(id)a0 didRemoveKeyWithIdentifier:(id)a1;
- (void)coordinator:(id)a0 didLoseAccessory:(id)a1 error:(id)a2;
- (void)_beginOperation;
- (void)associateAccessoryWithControllerKeyUsingAccessoryPublicKey:(id)a0;
- (void)_finishOperation;
- (id)init;
- (void)startDiscovering;
- (void)handleCurrentNetworkChangedNotification:(id)a0;
- (void)devicePowerStateChanged:(unsigned long long)a0;
- (void)_startDiscovering;
- (void)storage:(id)a0 didSaveKeyWithIdentifier:(id)a1;
- (id)_removeAccessoryServerFromArray:(id)a0 withDeviceID:(id)a1;
- (void).cxx_destruct;
- (void)accessoryServerDidUpdateConnectionState:(id)a0;
- (BOOL)onDemandConnectionsAreEnabled;

@end
