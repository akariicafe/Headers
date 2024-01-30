@class PLDeferredPhotoFinalizer;

@interface PLBackgroundJobDeferredPhotoProcessingWorker : PLBackgroundJobWorker {
    PLDeferredPhotoFinalizer *_deferredPhotoFinalizer;
}

+ (id)workerWithLibrary:(id)a0;

- (BOOL)isInterruptible;
- (id)deferredPhotoFinalizer;
- (void).cxx_destruct;
- (void)performWorkOnManagedObjectID:(id)a0 completion:(id /* block */)a1;
- (id)_predicateToFetchDeferredAssets;
- (BOOL)hasPendingJobs;
- (void)stopWorkingOnManagedObjectID:(id)a0;
- (id)managedObjectIDsNeedingProcessing;

@end
