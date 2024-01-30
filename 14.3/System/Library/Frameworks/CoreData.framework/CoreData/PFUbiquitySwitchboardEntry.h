@class PFUbiquityLocation, NSString, NSURL, PFUbiquityContainerMonitor, PFUbiquitySetupAssistant, NSMutableDictionary, NSObject, PFUbiquityFilePresenter, PFUbiquitySwitchboardEntryMetadata;
@protocol OS_dispatch_queue;

@interface PFUbiquitySwitchboardEntry : NSObject {
    NSURL *_storeURL;
    NSMutableDictionary *_registeredCoordinators;
    BOOL _finishedSetupForStore;
    BOOL _hasScheduledFinishBlock;
    BOOL _finishedInitializingForStore;
    int _finishLock;
    NSObject<OS_dispatch_queue> *_privateQueue;
}

@property unsigned long long activeStoreCount;
@property (readonly, nonatomic) NSString *localPeerID;
@property (readonly, nonatomic) NSString *storeName;
@property (retain, nonatomic) PFUbiquityLocation *ubiquityRootLocation;
@property (readonly) PFUbiquityLocation *localRootLocation;
@property (readonly) PFUbiquityFilePresenter *filePresenter;
@property (readonly) PFUbiquityFilePresenter *localFilePresenter;
@property (readonly) PFUbiquityContainerMonitor *monitor;
@property (readonly) PFUbiquitySetupAssistant *finishingSetupAssistant;
@property (retain, nonatomic) PFUbiquitySwitchboardEntryMetadata *metadata;

- (id)init;
- (void)dealloc;
- (void)unregisterPersistentStore:(id)a0 inCoordinator:(id)a1;
- (id)cacheWrapperForStoreName:(id)a0;
- (id)metaForStoreName:(id)a0;
- (id)description;
- (id)createSetOfActiveStoreNames;
- (id)createSetOfPersistentStoreCoordinatorsRegisteredForStoreName:(id)a0;
- (void)registerPersistentStore:(id)a0 withStoreName:(id)a1;
- (id)initWithLocalPeerID:(id)a0 storeName:(id)a1 withURL:(id)a2 ubiquityRootLocation:(id)a3 andLocalRootLocation:(id)a4;
- (void)unregisterPersistentStoreCoordinator:(id)a0;
- (void)entryWillBeRemovedFromSwitchboard;
- (void)filePresenterWasNotifiedTransactionLogs:(id)a0;
- (void)filePresenterNoticedBaselineFileChange:(id)a0;
- (void)containerIdentifierChanged:(id)a0;
- (void)setupFinished;
- (void)synchronouslyExecuteBlockOnPrivateQueue:(id /* block */)a0;
- (void)executeBlockOnPrivateQueue:(id /* block */)a0;
- (void)containerStateChanged:(id)a0;
- (void)monitorStateChanged:(id)a0;
- (void)afterDelay:(double)a0 executeBlockOnPrivateQueue:(id /* block */)a1;
- (BOOL)finishSetupForStore:(id)a0 withSetupAssistant:(id)a1 synchronously:(BOOL)a2 error:(id *)a3 finishBlock:(id /* block */)a4;
- (void)afterDelay:(double)a0 executeBlockOnGlobalConcurrentQueue:(id /* block */)a1;

@end
