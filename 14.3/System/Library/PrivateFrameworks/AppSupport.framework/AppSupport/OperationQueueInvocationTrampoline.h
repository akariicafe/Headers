@class NSOperationQueue;

@interface OperationQueueInvocationTrampoline : InvocationTrampoline {
    NSOperationQueue *_queue;
    long long _priority;
}

- (void)forwardInvocation:(id)a0;
- (id)initWithTarget:(id)a0 operationQueue:(id)a1 priority:(long long)a2;
- (void)dealloc;

@end
