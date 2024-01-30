@class NSMutableArray, NSString, PLBackgroundJobStatusCenter, PLPhotoLibraryBundle;

@interface PLBackgroundJobWorker : NSObject <PLBackgroundJobWorkerProtocol> {
    id /* block */ _workerCompleteCompletionHandler;
    id /* block */ _currentManagedObjectCompletionHandler;
    _Atomic long long _workerAtomicCounter;
    _Atomic long long _completionHandlerAtomicCounter;
    id /* block */ _workerForcefullyStopHandler;
    NSMutableArray *_pendingJobs;
    unsigned long long _totalJobsCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _shouldStop;
    _Atomic BOOL _shouldDeferActivity;
}

@property (readonly, nonatomic) NSString *workerName;
@property (readonly, nonatomic) NSString *workerDetailedName;
@property (weak, nonatomic) PLBackgroundJobStatusCenter *statusCenter;
@property (readonly, nonatomic) PLPhotoLibraryBundle *libraryBundle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (BOOL)usesMultipleLibrariesConcurrently;
+ (long long)availableDiskSpaceForVolumeURL:(id)a0;

- (void)stopWorkingOnItem:(id)a0;
- (BOOL)isInterruptible;
- (void)workerDidFinishWithDatabaseContext:(id)a0;
- (id)redactedDescription;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (BOOL)avoidCheckingOtherWorkersIfThisWorkerHasPendingWork;
- (BOOL)shouldDeferActivity;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;
- (id)photoLibraryWithDatabaseContext:(id)a0;
- (id)init;
- (id)initWithLibraryBundle:(id)a0;
- (void).cxx_destruct;
- (void)_handleAllJobsCompleteInLibrary:(id)a0 allowOutsideLimiter:(BOOL)a1;
- (void)_processNextManagedObjectInLibrary:(id)a0 continueRunning:(BOOL)a1 allowOutsideLimiter:(BOOL)a2;
- (BOOL)hasEnoughDiskSpaceToContinue:(id /* block */)a0;
- (id)pendingJobsInLibrary:(id)a0;
- (void)startWorkInLibrary:(id)a0 withWorkItemsNeedingProcessing:(id)a1 withCompletion:(id /* block */)a2;
- (void)stopAllWork;

@end
