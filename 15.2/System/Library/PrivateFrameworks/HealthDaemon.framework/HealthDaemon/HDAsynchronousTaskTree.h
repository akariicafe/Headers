@class NSString, NSArray, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HDAsynchronousTaskTree : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_pendingTasks;
    NSMutableArray *_queue_pendingSubtasks;
    NSMutableArray *_queue_taskErrors;
    _Atomic BOOL _canceled;
    _Atomic BOOL _rejectAddTask;
    BOOL _queue_started;
    BOOL _queue_finished;
    id /* block */ _queue_completion;
    NSObject<OS_dispatch_queue> *_default_task_queue;
}

@property (readonly, copy, nonatomic) NSString *groupDescription;
@property (readonly, nonatomic) NSArray *allErrors;

- (void)addTaskOnQueue:(id)a0 task:(id /* block */)a1;
- (void)addCheckpointTask:(id /* block */)a0;
- (void)addTask:(id /* block */)a0;
- (id)initWithDescription:(id)a0 completion:(id /* block */)a1;
- (void)begin;
- (id)description;
- (void)addTaskWithTimeout:(double)a0 task:(id /* block */)a1;
- (void).cxx_destruct;
- (void)addCheckpointTaskOnQueue:(id)a0 task:(id /* block */)a1;
- (void)addTaskOnQueue:(id)a0 timeout:(double)a1 task:(id /* block */)a2;
- (void)cancel;

@end
