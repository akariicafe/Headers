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

- (BOOL)isEmpty;
- (void)performTask:(id /* block */)a0;
- (void)lock;
- (void)waitUntilAllTasksAreFinished;
- (void)unlock;
- (BOOL)tryLockWhenReadyForMainThread;
- (void)waitUntilTaskIsFinished:(id)a0;
- (void)addTask:(id /* block */)a0;
- (void)promoteDeferredTaskIfIdle;
- (void)performSingleTask:(id /* block */)a0;
- (void)performTaskOnMainThread:(id /* block */)a0 waitUntilDone:(BOOL)a1;
- (void)finishExecution;
- (id)addAndReturnTask:(id /* block */)a0;
- (void)addDeferredTask:(id /* block */)a0;
- (BOOL)isMainThreadExecutingTask;
- (void)continueExecutionOnMainThread;
- (id)init;
- (id)scheduleTask:(id /* block */)a0 timeInterval:(double)a1 repeats:(BOOL)a2;
- (void)performDeferredTaskIfIdle;
- (void)lockWhenReadyForMainThread;
- (void).cxx_destruct;

@end
