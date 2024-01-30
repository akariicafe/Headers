@class NSMutableArray, NSString, NSObject, PLPhotoLibraryBundle, PLBackgroundJobStatusCenter;
@protocol OS_dispatch_queue;

@interface PLBackgroundJobWorker : NSObject <PLBackgroundJobWorkerProtocol> {
    id /* block */ _workerCompleteCompletionHandler;
    id /* block */ _currentManagedObjectCompletionHandler;
    _Atomic long long _workerAtomicCounter;
    _Atomic long long _completionHandlerAtomicCounter;
    id /* block */ _workerForcefullyStopHandler;
    NSMutableArray *_pendingJobs;
    unsigned long long _totalJobsCount;
    NSObject<OS_dispatch_queue> *_processingQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _shouldStop;
}

@property (readonly, nonatomic) PLPhotoLibraryBundle *libraryBundle;
@property (readonly, nonatomic) long long workerPriority;
@property (readonly, nonatomic) NSString *workerName;
@property (readonly, nonatomic) NSString *workerDetailedName;
@property (weak, nonatomic) PLBackgroundJobStatusCenter *statusCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)workerWillStartWorkingOnItemsInLibrary:(id)a0;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (id)workerWithLibraryBundle:(id)a0;
+ (void)workerDidFinishWorkingOnItemsInLibrary:(id)a0;

- (BOOL)isInterruptible;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;
- (id)initWithPriority:(long long)a0 libraryBundle:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_processNextManagedObjectInLibrary:(id)a0 continueRunning:(BOOL)a1;
- (void)_handleAllJobsCompleteInLibrary:(id)a0;
- (id)photoLibraryWithDatabaseContext:(id)a0;
- (void)stopAllWork;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (void)startWorkInLibrary:(id)a0 withWorkItemsNeedingProcessing:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)hasPendingJobsInLibrary:(id)a0;
- (id)redactedDescription;
- (void)stopWorkingOnItem:(id)a0;
- (void)workerDidFinishWithDatabaseContext:(id)a0;

@end
