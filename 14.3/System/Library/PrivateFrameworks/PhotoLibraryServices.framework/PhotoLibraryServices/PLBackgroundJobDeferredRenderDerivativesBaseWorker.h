@class NSProgress, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobDeferredRenderDerivativesBaseWorker : PLBackgroundJobWorker {
    NSProgress *_progressForCurrentAsset;
    PAImageConversionServiceClient *_imageConversionClient;
    PAVideoConversionServiceClient *_videoConversionClient;
}

+ (id)workerWithLibrary:(id)a0;

- (BOOL)isInterruptible;
- (void).cxx_destruct;
- (void)performWorkOnManagedObjectID:(id)a0 completion:(id /* block */)a1;
- (id)_predicateToFetchDeferredAssets;
- (BOOL)hasPendingJobs;
- (void)stopWorkingOnManagedObjectID:(id)a0;
- (id)imageConversionClient;
- (id)videoConversionClient;
- (id)managedObjectIDsNeedingProcessing;

@end
