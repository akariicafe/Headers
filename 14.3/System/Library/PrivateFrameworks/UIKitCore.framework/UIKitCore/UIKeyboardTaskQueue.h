@class UIKeyboardTaskEntry, NSArray, NSConditionLock, NSMutableArray, UIKeyboardTaskExecutionContext;

@interface UIKeyboardTaskQueue : NSObject {
    BOOL _executingOnMainThread;
    NSConditionLock *_lock;
    NSMutableArray *_tasks;
    NSMutableArray *_deferredTasks;
    UIKeyboardTaskEntry *_mainThreadContinuation;
}

@property (retain, nonatomic) UIKeyboardTaskExecutionContext *executionContext;
@property (retain, nonatomic) NSArray *activeOriginator;

- (void)unlock;
- (void)lock;
- (id)init;
- (BOOL)isMainThreadExecutingTask;
- (void)dealloc;
- (void)performTaskOnMainThread:(id /* block */)a0 waitUntilDone:(BOOL)a1;
- (void)performSingleTask:(id /* block */)a0;
- (void)finishExecution;
- (void)waitUntilAllTasksAreFinished;
- (BOOL)tryLockWhenReadyForMainThread;
- (id)addAndReturnTask:(id /* block */)a0;
- (void)addDeferredTask:(id /* block */)a0;
- (void)continueExecutionOnMainThread;
- (void)performDeferredTaskIfIdle;
- (void)addTask:(id /* block */)a0;
- (void)performTask:(id /* block */)a0;
- (id)scheduleTask:(id /* block */)a0 timeInterval:(double)a1 repeats:(BOOL)a2;
- (void)promoteDeferredTaskIfIdle;
- (void)waitUntilTaskIsFinished:(id)a0;
- (void)lockWhenReadyForMainThread;

@end
