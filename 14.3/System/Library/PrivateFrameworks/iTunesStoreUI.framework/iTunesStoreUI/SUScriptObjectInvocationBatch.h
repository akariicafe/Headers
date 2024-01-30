@class SUScriptObject, NSMutableArray, NSLock;

@interface SUScriptObjectInvocationBatch : NSObject {
    NSMutableArray *_invocationQueue;
    NSLock *_lock;
    struct __CFDictionary { } *_proxies;
    SUScriptObject *_rootObject;
}

@property SUScriptObject *rootObject;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)checkOutBatchTarget:(id)a0;
- (id)copyQueuedInvocationsForObject:(id)a0;
- (id)batchProxyForObject:(id)a0;
- (void)dequeueInvocations;
- (void)_delayedDequeueInvocations;
- (void)enqueueInvocation:(id)a0;

@end
