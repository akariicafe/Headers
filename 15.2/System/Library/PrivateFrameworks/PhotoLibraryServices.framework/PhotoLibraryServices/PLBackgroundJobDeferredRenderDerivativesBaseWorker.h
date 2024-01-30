@class NSProgress, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobDeferredRenderDerivativesBaseWorker : PLBackgroundJobWorker {
    NSProgress *_progressForCurrentAsset;
    PAImageConversionServiceClient *_imageConversionClient;
    PAVideoConversionServiceClient *_videoConversionClient;
}

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (id)workerWithLibraryBundle:(id)a0;

- (id)_predicateToFetchDeferredAssets;
- (BOOL)isInterruptible;
- (id)videoConversionClient;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;
- (void).cxx_destruct;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)imageConversionClient;
- (void)stopWorkingOnItem:(id)a0;

@end
