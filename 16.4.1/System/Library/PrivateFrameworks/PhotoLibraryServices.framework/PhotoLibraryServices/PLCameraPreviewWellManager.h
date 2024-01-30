@class NSString, PLLibraryServicesManager, NSDate, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PLCameraPreviewWellManager : NSObject {
    NSMutableArray *_workQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _queueLock;
    BOOL _active;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activeLock;
    NSObject<OS_dispatch_queue> *_serialQueue;
    PLLibraryServicesManager *_lsm;
    BOOL _currentPreviewWellMetadataIsLoaded;
    NSString *_currentPreviewWellAssetUUID;
    NSDate *_currentPreviewWellAddedDate;
    double _currentPreviewWellSortToken;
}

- (void)_inqProcessAssetChanges;
- (void)_fetchPreviewWellAssetWithAssetHandler:(id /* block */)a0;
- (void)_clearPreviewWellAndNotify;
- (void)_inqFetchPreviewWellMetadataIfNeededCurrentPreviewIsStale:(BOOL *)a0;
- (id)initWithLibraryServicesManager:(id)a0;
- (void)refreshPreviewWellImage;
- (void)_processChange:(id)a0;
- (void)_saveImageAndNotify:(struct CGImage { } *)a0 assetUUID:(id)a1;
- (void)considerAssetForPreviewWellChanges:(id)a0 thumbnailWasGenerated:(BOOL)a1;
- (void).cxx_destruct;

@end
