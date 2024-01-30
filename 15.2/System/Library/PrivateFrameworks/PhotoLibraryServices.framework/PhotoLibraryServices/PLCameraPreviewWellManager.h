@class PLPhotoLibrary, NSString, NSDate, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PLCameraPreviewWellManager : NSObject {
    NSMutableArray *_workQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _queueLock;
    BOOL _active;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activeLock;
    NSObject<OS_dispatch_queue> *_serialQueue;
    PLPhotoLibrary *_photoLibrary;
    BOOL _currentPreviewWellMetadataIsLoaded;
    NSString *_currentPreviewWellAssetUUID;
    NSDate *_currentPreviewWellAddedDate;
    double _currentPreviewWellSortToken;
}

- (void)_fetchPreviewWellMetadataIfNeeded;
- (void)_saveImageAndNotify:(struct CGImage { } *)a0 assetUUID:(id)a1;
- (void)refreshPreviewWellImage;
- (void)_processChange:(id)a0;
- (void)_clearPreviewWellAndNotify;
- (void)_fetchPreviewWellAssetWithAssetHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (void)considerAssetForPreviewWellChanges:(id)a0;
- (void)_inqProcessAssetChanges;

@end
