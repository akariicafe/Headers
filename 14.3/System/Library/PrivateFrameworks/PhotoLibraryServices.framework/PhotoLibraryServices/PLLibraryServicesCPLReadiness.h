@class PLLibraryServicesManager, NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface PLLibraryServicesCPLReadiness : NSObject {
    PLLibraryServicesManager *_libraryServicesManager;
    NSObject<OS_dispatch_source> *_photoLibraryCPLReadinessTimer;
    NSMutableArray *_photoLibraryCPLReadinessBlocks;
}

- (void)_setupCPLReadinessTimerAndEventHandlerIfNeeded;
- (void).cxx_destruct;
- (void)processCloudPhotosLibraryStateChange:(BOOL)a0;
- (BOOL)isReadyForCloudPhotoLibraryWithStatus:(id *)a0;
- (void)pauseCloudPhotos:(BOOL)a0 reason:(short)a1;
- (BOOL)_checkForCPLReadinessAndCallBlocks;
- (void)_callOutstandingCPLReadinessBlocks;
- (id)initWithLibraryServicesManager:(id)a0;
- (void)_stopWaitingForCPLReadiness;
- (void)performOnceLibraryIsReadyForCPLManager:(id /* block */)a0;
- (id)libraryServicesManager;
- (BOOL)_isAssetsdReadyForCPLManagerWithStatus:(id *)a0;
- (void)invalidate;
- (void)cancelCPLReadinessBlocksAndStopWaiting;

@end
