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

- (void)lockWhenReadyForMainThread;
- (void)unlock;
- (void)addDeferredTask:(id /* block */)a0;
- (void)continueExecutionOnMainThread;
- (void)finishExecution;
- (void)addTask:(id /* block */)a0;
- (void)promoteDeferredTaskIfIdle;
- (void)performTask:(id /* block */)a0;
- (void)lock;
- (void)performDeferredTaskIfIdle;
- (id)addAndReturnTask:(id /* block */)a0;
- (BOOL)tryLockWhenReadyForMainThread;
- (void)waitUntilTaskIsFinished:(id)a0;
- (id)init;
- (void)waitUntilAllTasksAreFinished;
- (id)scheduleTask:(id /* block */)a0 timeInterval:(double)a1 repeats:(BOOL)a2;
- (void)dealloc;
- (void)performSingleTask:(id /* block */)a0;
- (BOOL)isMainThreadExecutingTask;
- (void)performTaskOnMainThread:(id /* block */)a0 waitUntilDone:(BOOL)a1;

@end
