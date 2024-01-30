@class NSCondition, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface CKContextExecutor : NSObject {
    NSObject<OS_dispatch_queue> *_workItemQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_group> *_group;
    unsigned long long _timeoutAfter;
    NSCondition *_completionCondition;
    id /* block */ _completionHandler;
}

@property (readonly) _Atomic BOOL done;
@property (readonly, nonatomic) id context;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0 workItemQueue:(id)a1 completionQueue:(id)a2 timeoutAfter:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void)markReady;
- (void)markIncomplete;
- (void)_awaitCompletion;
- (void)addWorkItemToQueue:(id)a0 withWorkItem:(id /* block */)a1 andContext:(id)a2;
- (void)markReadyAndAwaitCompletion;
- (void)addWorkItem:(id /* block */)a0;
- (void)addWorkItem:(id /* block */)a0 withContext:(id)a1;

@end
