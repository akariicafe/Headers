@class SUScriptObject, NSMutableArray, NSLock;

@interface SUScriptObjectInvocationBatch : NSObject {
    NSMutableArray *_invocationQueue;
    NSLock *_lock;
    struct __CFDictionary { } *_proxies;
    SUScriptObject *_rootObject;
}

@property SUScriptObject *rootObject;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)copyQueuedInvocationsForObject:(id)a0;
- (void)_delayedDequeueInvocations;
- (id)batchProxyForObject:(id)a0;
- (void)checkOutBatchTarget:(id)a0;
- (void)dequeueInvocations;
- (void)enqueueInvocation:(id)a0;

@end
