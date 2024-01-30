@class PAImageConversionServiceClient, NSProgress, PAVideoConversionServiceClient, NSManagedObjectID;

@interface PLBackgroundJobCameraProcessingAdjustmentWorker : PLBackgroundJobWorker {
    NSProgress *_progressForCurrentAsset;
    NSManagedObjectID *_currentlyProcessingObjectID;
    PAImageConversionServiceClient *_imageConversionServiceClient;
    PAVideoConversionServiceClient *_videoConversionServiceClient;
}

+ (id)workerWithLibrary:(id)a0;

- (BOOL)isInterruptible;
- (void).cxx_destruct;
- (void)dealloc;
- (void)performWorkOnManagedObjectID:(id)a0 completion:(id /* block */)a1;
- (id)_predicateToFetchCameraProcessingAdjustmentNeededAssets;
- (BOOL)hasPendingJobs;
- (void)stopWorkingOnManagedObjectID:(id)a0;
- (id)managedObjectIDsNeedingProcessing;

@end
