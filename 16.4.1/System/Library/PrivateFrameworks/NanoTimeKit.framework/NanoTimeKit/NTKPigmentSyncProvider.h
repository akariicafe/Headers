@class NSMutableArray, NTKPigmentEditOptionStore, NTKPigmentPersistentStorageController, NSMutableSet, NSString, CLKDevice, NSObject;
@protocol OS_dispatch_queue, NTKPigmentSyncProviderDelegate;

@interface NTKPigmentSyncProvider : NSObject <NTKPigmentEditOptionStoreListener>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue;
@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) NTKPigmentEditOptionStore *pigmentStore;
@property (retain, nonatomic) NTKPigmentPersistentStorageController *storageController;
@property (nonatomic) BOOL shouldSyncSharedCollections;
@property (retain, nonatomic) NSMutableSet *domainsRequiringDeltaSync;
@property (retain, nonatomic) NSMutableArray *faceDomainsToBeSynced;
@property (nonatomic) BOOL requestDeltaSyncAfterSyncing;
@property (nonatomic) BOOL receivedUpdateDuringSync;
@property (weak, nonatomic) id<NTKPigmentSyncProviderDelegate> delegate;
@property (nonatomic, getter=isSyncing) BOOL syncing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)areCollections:(id)a0 equalToCollections:(id)a1;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)saveSyncVersion;
- (void)_requestDeltaSyncIfNeeded;
- (id)allAvailableFacesSupportingPigment;
- (void)colorBundleContentChanged;
- (void)colorEditOptionStore:(id)a0 didChangeForDomain:(id)a1;
- (id)compareLocalSyncDifferences;
- (void)enumerateAllFacesPigmentDomains:(id /* block */)a0;
- (void)faceBundlesUpdated;
- (void)finishSyncing:(BOOL)a0;
- (id)nextSyncData:(inout id *)a0;
- (BOOL)prepareForSyncing:(BOOL)a0;
- (BOOL)shouldForceFullSync;

@end
