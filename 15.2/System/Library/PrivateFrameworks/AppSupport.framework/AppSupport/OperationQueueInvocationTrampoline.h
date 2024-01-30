@class NSOperationQueue;

@interface OperationQueueInvocationTrampoline : InvocationTrampoline {
    NSOperationQueue *_queue;
    long long _priority;
}

- (id)initWithTarget:(id)a0 operationQueue:(id)a1 priority:(long long)a2;
- (void)forwardInvocation:(id)a0;
- (void)dealloc;

@end
