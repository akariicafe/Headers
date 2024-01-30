@class NSArray, NSMutableArray, PLBackgroundJobWorkerPriorityTuple;
@protocol PLBackgroundJobWorkerCoordinatorDelegate;

@interface PLBackgroundJobWorkerCoordinator : NSObject {
    NSArray *_workerClassesAsStrings;
    NSMutableArray *_pendingWorkers;
    PLBackgroundJobWorkerPriorityTuple *_currentWorker;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<PLBackgroundJobWorkerCoordinatorDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)submitBundleForProcessingOnAllWorkerPriorities:(id)a0;
- (id)initWithWorkerClassesAsStrings:(id)a0;
- (BOOL)hasPendingJobsForBundle:(id)a0 priority:(unsigned long long)a1;
- (void)_handleAllWorkersCompleted;
- (void)_submitBundleForProcessing:(id)a0 priority:(unsigned long long)a1 ignorePriority:(BOOL)a2;
- (void)stopAllBackgorundJobs;
- (void)submitBundleForProcessing:(id)a0 priority:(unsigned long long)a1;
- (void)_processNextWorker;
- (id)_workersForBundle:(id)a0;

@end
