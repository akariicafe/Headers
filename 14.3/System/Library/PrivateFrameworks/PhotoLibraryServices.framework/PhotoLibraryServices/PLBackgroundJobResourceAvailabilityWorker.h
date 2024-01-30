@class NSProgress, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobResourceAvailabilityWorker : PLBackgroundJobWorker {
    NSProgress *_progressForCurrentAsset;
    PAImageConversionServiceClient *_imageConversionClient;
    PAVideoConversionServiceClient *_videoConversionClient;
}

+ (id)workerWithLibrary:(id)a0;

- (void).cxx_destruct;
- (void)performWorkOnManagedObjectID:(id)a0 completion:(id /* block */)a1;
- (BOOL)hasPendingJobs;
- (id)_predicateToFetchResourcesAwaitingProcessing;
- (id)imageConversionClient;
- (id)videoConversionClient;
- (id)managedObjectIDsNeedingProcessing;

@end
