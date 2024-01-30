@class NSString, PLPhotoLibraryBundlePriorityTuple, PLBackgroundJobWorkerCoordinator, NSMutableArray;
@protocol PLBackgroundJobLibraryCoordinatorDelegate;

@interface PLBackgroundJobLibraryCoordinator : NSObject <PLBackgroundJobWorkerCoordinatorDelegate> {
    NSMutableArray *_pendingPhotoLibraryBundles;
    PLPhotoLibraryBundlePriorityTuple *_currentPhotoLibraryBundle;
    PLBackgroundJobWorkerCoordinator *_workerCoordinator;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<PLBackgroundJobLibraryCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)workerCoordinatorDidFinishAllSubmittedJobsOnBundle:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasPendingJobsOnBundles:(id)a0 priority:(unsigned long long)a1;
- (id)initWithWorkerCoordinator:(id)a0;
- (void)_submitNextQueuedBundle;
- (void)_handleBundleComplete:(id)a0;
- (void)startBackgroundJobsOnBundles:(id)a0 priority:(unsigned long long)a1;
- (void)stopBackgroundJobsOnAllBundles;
- (void)_handleAllBundlesCompleted;

@end
