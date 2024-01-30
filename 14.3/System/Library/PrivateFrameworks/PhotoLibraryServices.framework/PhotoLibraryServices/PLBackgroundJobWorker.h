@class NSString, PLPhotoLibrary, NSMutableArray, NSObject;
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

@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) unsigned long long workerPriority;
@property (readonly, nonatomic) NSString *workerName;
@property (readonly, nonatomic) NSString *workerDetailedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)workerWithLibrary:(id)a0;

- (BOOL)isInterruptible;
- (id)init;
- (void).cxx_destruct;
- (void)performWorkOnManagedObjectID:(id)a0 completion:(id /* block */)a1;
- (void)_processNextManagedObject;
- (void)_handleAllJobsComplete;
- (BOOL)hasPendingJobs;
- (void)stopAllWork;
- (void)startWorkWithCompletion:(id /* block */)a0;
- (void)stopWorkingOnManagedObjectID:(id)a0;
- (id)initWithPriority:(unsigned long long)a0 photoLibrary:(id)a1;
- (id)managedObjectIDsNeedingProcessing;

@end
