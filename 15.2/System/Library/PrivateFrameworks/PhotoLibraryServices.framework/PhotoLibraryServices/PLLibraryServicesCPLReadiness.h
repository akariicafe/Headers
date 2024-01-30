@class PLLibraryServicesManager, NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface PLLibraryServicesCPLReadiness : NSObject {
    PLLibraryServicesManager *_libraryServicesManager;
    NSObject<OS_dispatch_source> *_photoLibraryCPLReadinessTimer;
    NSMutableArray *_photoLibraryCPLReadinessBlocks;
}

- (id)libraryServicesManager;
- (void)_callOutstandingCPLReadinessBlocks;
- (void)performOnceLibraryIsReadyForCPLManager:(id /* block */)a0;
- (void)_stopWaitingForCPLReadiness;
- (BOOL)isReadyForCloudPhotoLibraryWithStatus:(id *)a0;
- (void).cxx_destruct;
- (BOOL)_checkForCPLReadinessAndCallBlocks;
- (void)_setupCPLReadinessTimerAndEventHandlerIfNeeded;
- (void)invalidate;
- (void)pauseCloudPhotos:(BOOL)a0 reason:(short)a1;
- (id)initWithLibraryServicesManager:(id)a0;
- (void)cancelCPLReadinessBlocksAndStopWaiting;
- (void)processCloudPhotosLibraryStateChange:(BOOL)a0;
- (BOOL)_isAssetsdReadyForCPLManagerWithStatus:(id *)a0;

@end
