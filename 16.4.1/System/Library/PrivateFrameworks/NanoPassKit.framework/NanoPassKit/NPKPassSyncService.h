@class NPKPassSyncServiceSyncStatus, NSString, NPKPassSyncEngine, NSObject, IDSService;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NPKPassSyncService : NSObject <IDSServiceDelegate, NPKPassSyncEngineDelegate, NPKPassSyncEngineDataSource>

@property (retain, nonatomic) NPKPassSyncEngine *passSyncEngine;
@property (retain, nonatomic) IDSService *passSyncService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *passSyncQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *passSyncEngineArchiveTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *passSyncEngineSyncTimer;
@property (retain, nonatomic) NPKPassSyncServiceSyncStatus *passSyncStatus;
@property (nonatomic) BOOL dropAllMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void).cxx_destruct;
- (void)catalogChanged:(id)a0;
- (void)passSyncEngine:(id)a0 sendStateChange:(id)a1;
- (void)_syncTimerFired;
- (void)passSyncEngine:(id)a0 requestsAddPassData:(id)a1 forSyncStateItem:(id)a2 completion:(id /* block */)a3;
- (void)_archiveTimerFired;
- (id)_archivedPassSyncEngine;
- (void)_ensureSyncTimerIsSet;
- (void)_provideUpdatedLibraryStateToSyncEngineAndSyncIfNecessary:(BOOL)a0;
- (void)_syncNow;
- (void)_syncWhenAppropriate;
- (void)associatedPassDataRequested:(id)a0;
- (id)companionCatalogToSendWithStateChange;
- (id)currentLibraryPassSyncStateWithReconciledState:(id)a0;
- (void)handleCatalogChangeWithCompanionCatalog:(id)a0 watchCatalog:(id)a1;
- (void)handleIncomingCompanionCatalog:(id)a0 watchCatalog:(id)a1;
- (void)handleIncomingPassSettings:(unsigned long long)a0 forPassWithUniqueID:(id)a1;
- (void)handlePassLibraryChanged;
- (void)handleRequestedAssociatedData:(unsigned long long)a0 forPassWithUniqueID:(id)a1;
- (void)handleSettingsChanged:(unsigned long long)a0 forPassWithUniqueID:(id)a1;
- (id)initWithPassSyncEngineRole:(unsigned long long)a0;
- (void)passSettingsChanged:(id)a0;
- (id)passSyncEngine:(id)a0 dataForPassWithUniqueID:(id)a1;
- (void)passSyncEngine:(id)a0 finishedProcessingChange:(id)a1;
- (id)passSyncEngine:(id)a0 partialDataForPassWithUniqueID:(id)a1 baseManifest:(id)a2 outRemoteAssets:(id *)a3;
- (void)passSyncEngine:(id)a0 receivedStateChangeProcessed:(id)a1 changeAccepted:(BOOL)a2;
- (void)passSyncEngine:(id)a0 requestsRemovePassWithUniqueID:(id)a1 completion:(id /* block */)a2;
- (void)passSyncEngine:(id)a0 requestsUpdatePassData:(id)a1 forSyncStateItem:(id)a2 baseManifestHashForPartialUpdate:(id)a3 remoteAssetsForPartialUpdate:(id)a4 completion:(id /* block */)a5;
- (void)passSyncEngine:(id)a0 sendProposedReconciledState:(id)a1;
- (void)passSyncEngine:(id)a0 sendReconciledStateAcceptedWithHash:(id)a1;
- (void)passSyncEngine:(id)a0 sendReconciledStateUnrecognizedWithHash:(id)a1 version:(unsigned long long)a2 currentPassSyncState:(id)a3;
- (void)passSyncEngine:(id)a0 sendStateChangeProcessedWithUUID:(id)a1 changeAccepted:(BOOL)a2 fullPassRequired:(BOOL)a3;
- (id)passSyncEngineNeedsUpdatedPassLibraryState:(id)a0;
- (void)passSyncEngineStateChanged:(id)a0;
- (void)proposedReconciledState:(id)a0;
- (void)reconciledStateAccepted:(id)a0;
- (void)reconciledStateUnrecognized:(id)a0;
- (void)requestAssociatedData:(unsigned long long)a0 forPassWithUniqueID:(id)a1;
- (unsigned long long)settingsForPassWithUniqueID:(id)a0;
- (void)suggestSync;
- (void)syncStateChangeProcessed:(id)a0;
- (void)syncStateChanged:(id)a0;
- (void)teardownSync;
- (void)updatePassLibrary;
- (id)watchCatalogToSendWithStateChange;

@end
