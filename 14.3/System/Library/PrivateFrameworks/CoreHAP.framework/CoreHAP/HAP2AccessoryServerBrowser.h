@class HAP2SerializedOperationQueue, NSArray, NSString, HAP2PropertyLock, NSOperationQueue, NSMutableArray, HAP2AccessoryServerBrowserOperation, NSMapTable;
@protocol HAP2AccessoryServerBrowserDelegate, HAP2Storage;

@interface HAP2AccessoryServerBrowser : HAP2LoggingObject <HAP2AccessoryServerCoordinatorDelegate, HAP2AccessoryServerDelegate, HAP2StorageDelegate, HAP2AccessoryServerBrowserPrivate, HAP2AccessoryServerBrowser>

@property (readonly, nonatomic) HAP2PropertyLock *propertyLock;
@property (readonly, nonatomic) NSArray *coordinatorInfo;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) HAP2SerializedOperationQueue *workQueue;
@property (retain, nonatomic) NSMutableArray *liveUnpairedAccessoryServers;
@property (retain, nonatomic) NSMutableArray *livePairedAccessoryServers;
@property (readonly, nonatomic) NSMapTable *weakOperationQueuesByDeviceID;
@property (readonly, nonatomic) NSMutableArray *browserOperationQueue;
@property (readonly, nonatomic) HAP2AccessoryServerBrowserOperation *currentOperation;
@property (nonatomic, getter=isDiscovering) BOOL discovering;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<HAP2Storage> storage;
@property (weak, nonatomic) id<HAP2AccessoryServerBrowserDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *unpairedAccessoryServers;
@property (readonly, copy, nonatomic) NSArray *pairedAccessoryServers;

+ (id)new;

- (void)stopDiscovering;
- (void)_enqueueOperation:(id)a0;
- (void)savePublicKey:(id)a0 forAccessoryWithID:(id)a1 completion:(id /* block */)a2;
- (void)_finishStopDiscovering;
- (void)stopConfirmingPairedAccessoryReachability;
- (void)coordinator:(id)a0 didCreateUnpairedAccessoryServer:(id)a1;
- (id)init;
- (id)_removeAccessoryServerFromArray:(id)a0 withDeviceID:(id)a1;
- (void).cxx_destruct;
- (void)storage:(id)a0 didRemoveKeyWithIdentifier:(id)a1;
- (void)_startDiscovering;
- (void)coordinator:(id)a0 didStartDiscoveringWithError:(id)a1;
- (void)_notifyCoordinatorsOfAccessoryWithDeviceID:(id)a0;
- (void)coordinator:(id)a0 didLoseAccessory:(id)a1 error:(id)a2;
- (void)_stopDiscovering;
- (id)_lookupPairedAccessoryServerWithDeviceID:(id)a0;
- (void)_updateArraysForDiscoveredAccessoryServer:(id)a0 paired:(BOOL)a1 lost:(id *)a2 existing:(id *)a3;
- (void)retrieveLocalPairingIdentityWithCompletion:(id /* block */)a0;
- (id)initWithCoordinators:(id)a0 storage:(id)a1;
- (void)storage:(id)a0 didSaveKeyWithIdentifier:(id)a1;
- (void)_finishOperation;
- (void)accessoryWithDeviceIDIsPaired:(id)a0 completion:(id /* block */)a1;
- (void)_beginOperation;
- (id)operationQueueForDeviceID:(id)a0;
- (void)startDiscovering;
- (void)startConfirmingPairedAccessoryReachability;
- (void)removePublicKeyForAccessoryWithID:(id)a0 completion:(id /* block */)a1;
- (void)_finishStartDiscovering;
- (void)coordinator:(id)a0 didCreatePairedAccessoryServer:(id)a1;
- (void)coordinator:(id)a0 didStopDiscoveringWithError:(id)a1;
- (void)accessoryServerDidUpdateConnectionState:(id)a0;

@end
