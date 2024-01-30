@class NSString, PLXPCTransaction, PLFileSystemAssetImporter, PLLibraryServicesManager, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface PLAssetsdSyncService : PLAbstractLibraryServicesManagerService <PLAssetsdSyncServiceProtocol> {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_group> *_updateGroup;
    PLXPCTransaction *_libraryTransaction;
    PLFileSystemAssetImporter *_importer;
    PLLibraryServicesManager *_libraryServicesManager;
    BOOL _didFinalizeRestore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_linkPathsAside:(id)a0;
- (void)updateRestoredAssetWithUUID:(id)a0 paths:(id)a1 fixAddedDate:(BOOL)a2;
- (void)finalizeOTARestoreRecreatingAlbums:(BOOL)a0;
- (void)_recoverAsideFiles:(id)a0;
- (void)_finalizeOTARestoreEndedAndRecreateAlbums:(BOOL)a0;
- (void)_updateRestoredAssetWithUUID:(id)a0 paths:(id)a1 fixAddedDate:(BOOL)a2;
- (void)_updatePendingCountForMissingAsset:(id)a0;
- (void)_cleanupAlbumMetadataAsideFilesAfterRestore;
- (id)_fileRestoreExclusionPaths;
- (id)_readRestoreAlbumMetadataForAlbum:(id)a0;
- (void)_addAsset:(id)a0 toAlbumsForUUID:(id)a1;
- (id)initWithLibraryServicesManager:(id)a0;

@end
