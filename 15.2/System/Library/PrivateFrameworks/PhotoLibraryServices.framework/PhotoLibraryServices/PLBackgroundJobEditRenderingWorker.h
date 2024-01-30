@class NSProgress, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobEditRenderingWorker : PLBackgroundJobWorker {
    PAImageConversionServiceClient *_imageConversionServiceClient;
    PAVideoConversionServiceClient *_videoConversionServiceClient;
    NSProgress *_progressForCurrentAsset;
}

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (id)workerWithLibrary:(id)a0;

- (id)_predicateToFetchDeferredAdjustmentNeededAssets;
- (BOOL)isInterruptible;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;
- (void).cxx_destruct;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (void)stopWorkingOnItem:(id)a0;
- (void)dealloc;

@end
