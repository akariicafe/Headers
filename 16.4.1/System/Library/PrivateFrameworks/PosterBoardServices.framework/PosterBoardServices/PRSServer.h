@class NSMutableArray, NSString, BSServiceConnectionListener, NSObject;
@protocol OS_dispatch_queue, PRSServerDelegate;

@interface PRSServer : NSObject <PRSClientToServerInterface, BSServiceConnectionListenerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    BSServiceConnectionListener *_connectionListener;
    NSMutableArray *_connections;
}

@property (weak, nonatomic) id<PRSServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (oneway void)refreshSnapshotForPosterConfigurationMatchUUID:(id)a0 completion:(id /* block */)a1;
- (oneway void)fetchAssociatedHomeScreenPosterConfigurationUUID:(id)a0 completion:(id /* block */)a1;
- (oneway void)refreshPosterDescriptorsForExtension:(id)a0 sessionInfo:(id)a1 completion:(id /* block */)a2;
- (oneway void)overnightUpdateWithCompletion:(id /* block */)a0;
- (oneway void)fetchActivePosterConfiguration:(id /* block */)a0;
- (oneway void)runMigration:(id)a0 completion:(id /* block */)a1;
- (void)_queue_addConnection:(id)a0;
- (oneway void)fetchContentObstructionBoundsForPosterConfiguration:(id)a0 orientation:(id)a1 completion:(id /* block */)a2;
- (oneway void)fetchObscurableBoundsForPosterConfiguration:(id)a0 orientation:(id)a1 completion:(id /* block */)a2;
- (oneway void)refreshSnapshotForGalleryItemsMatchingDescriptorIdentifier:(id)a0 extensionIdentifier:(id)a1 completion:(id /* block */)a2;
- (oneway void)notifyPosterBoardOfApplicationUpdatesWithCompletion:(id /* block */)a0;
- (oneway void)deleteSnapshots:(id)a0 completion:(id /* block */)a1;
- (oneway void)importPosterConfigurationFromArchiveData:(id)a0 completion:(id /* block */)a1;
- (oneway void)updatePosterConfigurationMatchingUUID:(id)a0 updates:(id)a1 completion:(id /* block */)a2;
- (oneway void)fetchMaximalContentCutoutBoundsForOrientation:(id)a0 completion:(id /* block */)a1;
- (oneway void)ingestSnapshotCollection:(id)a0 forPosterConfigurationUUID:(id)a1 completion:(id /* block */)a2;
- (oneway void)removeAllFocusConfigurationsMatchingFocusUUID:(id)a0 completion:(id /* block */)a1;
- (oneway void)deleteTransientDataWithCompletion:(id /* block */)a0;
- (oneway void)clearMigrationFlags:(id /* block */)a0;
- (oneway void)fetchRuntimeAssertionState:(id /* block */)a0;
- (oneway void)deletePosterDescriptorsForExtension:(id)a0 completion:(id /* block */)a1;
- (oneway void)pushPosterGalleryUpdate:(id)a0 completion:(id /* block */)a1;
- (oneway void)createPosterConfigurationForProviderIdentifier:(id)a0 posterDescriptorIdentifier:(id)a1 completion:(id /* block */)a2;
- (oneway void)fetchFocusUUIDForConfiguration:(id)a0 completion:(id /* block */)a1;
- (oneway void)fetchSelectedConfiguration:(id /* block */)a0;
- (oneway void)fetchPosterConfigurations:(id /* block */)a0;
- (oneway void)gatherDataFreshnessState:(id /* block */)a0;
- (oneway void)notifyFocusModeDidChange:(id)a0 completion:(id /* block */)a1;
- (oneway void)associateConfigurationMatchingUUID:(id)a0 focusModeActivityUUID:(id)a1 completion:(id /* block */)a2;
- (void)_queue_removeConnection:(id)a0;
- (oneway void)fetchPosterDescriptorsForExtension:(id)a0 completion:(id /* block */)a1;
- (oneway void)retrieveGallery:(id /* block */)a0;
- (oneway void)deletePosterConfigurationsMatchingUUID:(id)a0 completion:(id /* block */)a1;
- (oneway void)fetchPosterSnapshotsWithRequest:(id)a0 completion:(id /* block */)a1;
- (oneway void)updateToSelectedConfigurationMatchingUUID:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (oneway void)deleteDataStoreWithCompletion:(id /* block */)a0;
- (oneway void)refreshPosterConfigurationMatchingUUID:(id)a0 sessionInfo:(id)a1 completion:(id /* block */)a2;
- (oneway void)pushToProactiveWithCompletion:(id /* block */)a0;
- (oneway void)fetchStaticPosterDescriptorsForExtension:(id)a0 completion:(id /* block */)a1;
- (void)activate;
- (oneway void)fetchLimitedOcclusionBoundsForPosterConfiguration:(id)a0 orientation:(id)a1 completion:(id /* block */)a2;
- (void)invalidate;
- (oneway void)exportPosterConfigurationMatchingUUID:(id)a0 completion:(id /* block */)a1;
- (oneway void)fetchExtensionIdentifiersWithCompletion:(id /* block */)a0;
- (oneway void)prewarmWithCompletion:(id /* block */)a0;
- (oneway void)fetchGallery:(id /* block */)a0;
- (void).cxx_destruct;
- (oneway void)fetchContentCutoutBoundsForPosterConfiguration:(id)a0 orientation:(id)a1 completion:(id /* block */)a2;
- (oneway void)fetchActiveConfiguration:(id /* block */)a0;

@end
