@class NSProgress, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobEditRenderingWorker : PLBackgroundJobWorker {
    PAImageConversionServiceClient *_imageConversionServiceClient;
    PAVideoConversionServiceClient *_videoConversionServiceClient;
    NSProgress *_progressForCurrentAsset;
}

+ (id)workerWithLibrary:(id)a0;

- (BOOL)isInterruptible;
- (void).cxx_destruct;
- (void)dealloc;
- (void)performWorkOnManagedObjectID:(id)a0 completion:(id /* block */)a1;
- (BOOL)hasPendingJobs;
- (id)_predicateToFetchDeferredAdjustmentNeededAssets;
- (void)stopWorkingOnManagedObjectID:(id)a0;
- (id)managedObjectIDsNeedingProcessing;

@end
