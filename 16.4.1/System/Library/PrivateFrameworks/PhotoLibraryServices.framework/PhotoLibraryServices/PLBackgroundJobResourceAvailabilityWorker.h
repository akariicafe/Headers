@class PAImageConversionServiceClient, NSProgress, PAVideoConversionServiceClient, PLDeferredPhotoFinalizer;

@interface PLBackgroundJobResourceAvailabilityWorker : PLBackgroundJobWorker {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSProgress *_progressForCurrentAsset;
    PAImageConversionServiceClient *_imageConversionClient;
    PAVideoConversionServiceClient *_videoConversionClient;
    PLDeferredPhotoFinalizer *_deferredPhotoFinalizer;
}

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;

- (void)stopWorkingOnItem:(id)a0;
- (BOOL)isInterruptible;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (BOOL)avoidCheckingOtherWorkersIfThisWorkerHasPendingWork;
- (id)deferredPhotoFinalizer;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;
- (id)initWithLibraryBundle:(id)a0;
- (id)imageConversionClient;
- (id)videoConversionClient;
- (void).cxx_destruct;

@end
