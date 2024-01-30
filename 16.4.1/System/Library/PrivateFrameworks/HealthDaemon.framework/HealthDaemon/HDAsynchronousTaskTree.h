@class NSString, NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface HDAsynchronousTaskTree : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_lock_pendingTasks;
    NSMutableArray *_lock_pendingSubtasks;
    NSMutableArray *_lock_taskErrors;
    _Atomic BOOL _canceled;
    _Atomic BOOL _rejectAddTask;
    BOOL _lock_started;
    BOOL _lock_finished;
    id /* block */ _lock_completion;
    NSObject<OS_dispatch_queue> *_default_task_queue;
}

@property (readonly, copy, nonatomic) NSString *groupDescription;
@property (readonly, nonatomic) NSArray *allErrors;

- (void)begin;
- (void)addTaskWithTimeout:(double)a0 task:(id /* block */)a1;
- (void)addTaskOnQueue:(id)a0 task:(id /* block */)a1;
- (void)addCheckpointTask:(id /* block */)a0;
- (void)addCheckpointTaskOnQueue:(id)a0 task:(id /* block */)a1;
- (void)addTask:(id /* block */)a0;
- (void)cancel;
- (void)addTaskOnQueue:(id)a0 timeout:(double)a1 task:(id /* block */)a2;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDescription:(id)a0 completion:(id /* block */)a1;

@end
