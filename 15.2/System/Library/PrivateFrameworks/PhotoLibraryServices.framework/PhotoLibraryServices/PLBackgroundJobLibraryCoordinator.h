@class NSString, PLPhotoLibraryBundlePriorityTuple, PLBackgroundJobWorkerCoordinator, PLBackgroundJobStatusCenter, NSMutableArray;
@protocol PLBackgroundJobLibraryCoordinatorDelegate;

@interface PLBackgroundJobLibraryCoordinator : NSObject <PLBackgroundJobWorkerCoordinatorDelegate> {
    PLBackgroundJobStatusCenter *_statusCenter;
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

- (void)_submitNextQueuedBundle;
- (id)initWithStatusCenter:(id)a0;
- (id)initWithWorkerCoordinator:(id)a0 statusCenter:(id)a1;
- (void)startBackgroundJobsOnBundles:(id)a0 priority:(long long)a1;
- (id)initWithWorkerCoordinator:(id)a0;
- (void).cxx_destruct;
- (void)workerCoordinatorDidFinishAllSubmittedJobsOnBundle:(id)a0;
- (void)_handleBundleComplete:(id)a0;
- (BOOL)hasPendingJobsOnBundles:(id)a0 priority:(long long)a1;
- (void)stopBackgroundJobsOnAllBundles;
- (void)_handleAllBundlesCompleted;

@end
