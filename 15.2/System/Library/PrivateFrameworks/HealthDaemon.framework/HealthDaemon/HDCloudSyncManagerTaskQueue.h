@class HDCloudSyncManagerTask, NSMutableArray;
@protocol HDCloudSyncManagerTaskQueueDelegate;

@interface HDCloudSyncManagerTaskQueue : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_pendingTasks;
    long long _pendingTasksBeingSorted;
    BOOL _isComputingActiveTask;
    BOOL _isStartingNextTask;
    HDCloudSyncManagerTask *_activeTask;
}

@property (weak) id<HDCloudSyncManagerTaskQueueDelegate> delegate;
@property (readonly) long long pendingTaskCount;
@property (readonly) BOOL hasActiveTask;
@property (readonly) HDCloudSyncManagerTask *activeTask;

- (id)initWithDelegate:(id)a0;
- (void)addTask:(id)a0;
- (void).cxx_destruct;

@end
