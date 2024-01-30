@class NSString, PLLibraryServicesManager, NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface PLLibraryServicesCPLReadiness : NSObject {
    PLLibraryServicesManager *_libraryServicesManager;
    NSObject<OS_dispatch_source> *_photoLibraryCPLReadinessTimer;
    NSMutableArray *_photoLibraryCPLReadinessBlocks;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    NSString *_statusMessage;
    BOOL _isReadyForCPL;
}

- (void)cancelCPLReadinessBlocksAndStopWaiting;
- (void)_callOutstandingCPLReadinessBlocks;
- (void)performOnceLibraryIsReadyForCPLManager:(id /* block */)a0;
- (BOOL)_isReadyForCloudPhotoLibraryWithStatus:(id *)a0;
- (BOOL)_isAssetsdReadyForCPLManagerWithStatus:(id *)a0;
- (void)_checkIsReadyForCloudPhotoLibrary;
- (id)initWithLibraryServicesManager:(id)a0;
- (BOOL)_checkForCPLReadinessAndCallBlocks;
- (void)_stopWaitingForCPLReadiness;
- (BOOL)isReadyForCloudPhotoLibraryWithStatus:(id *)a0;
- (void)_setupCPLReadinessTimerAndEventHandlerIfNeeded;
- (void)processCloudPhotosLibraryStateChange:(BOOL)a0;
- (void)pauseCloudPhotos:(BOOL)a0 reason:(short)a1;
- (void)_updateIsReady:(BOOL)a0 statusMessage:(id)a1;
- (id)libraryServicesManager;
- (void)invalidate;
- (void).cxx_destruct;

@end
