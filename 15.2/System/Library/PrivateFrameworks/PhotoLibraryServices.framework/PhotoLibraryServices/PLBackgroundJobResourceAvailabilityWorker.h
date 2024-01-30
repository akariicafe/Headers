@class PAImageConversionServiceClient, NSProgress, PAVideoConversionServiceClient, PLDeferredPhotoFinalizer;

@interface PLBackgroundJobResourceAvailabilityWorker : PLBackgroundJobWorker {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSProgress *_progressForCurrentAsset;
    PAImageConversionServiceClient *_imageConversionClient;
    PAVideoConversionServiceClient *_videoConversionClient;
    PLDeferredPhotoFinalizer *_deferredPhotoFinalizer;
}

+ (void)workerWillStartWorkingOnItemsInLibrary:(id)a0;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (id)workerWithLibraryBundle:(id)a0;
+ (void)workerDidFinishWorkingOnItemsInLibrary:(id)a0;

- (BOOL)isInterruptible;
- (id)videoConversionClient;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;
- (id)initWithPriority:(long long)a0 libraryBundle:(id)a1;
- (void).cxx_destruct;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)imageConversionClient;
- (void)stopWorkingOnItem:(id)a0;
- (id)deferredPhotoFinalizer;
- (id)_predicateToFetchResourcesAwaitingProcessing;

@end
