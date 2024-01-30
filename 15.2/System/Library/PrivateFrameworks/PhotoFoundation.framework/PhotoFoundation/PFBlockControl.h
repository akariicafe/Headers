@class NSString, NSObject, PFDispatchQueue;
@protocol OS_dispatch_group;

@interface PFBlockControl : NSObject <PFBlockControlCanceling, PFBlockControlQueueing, PFBlockControlDirectExecution> {
    PFDispatchQueue *_queue;
    id /* block */ _block;
    NSObject<OS_dispatch_group> *_workGroup;
    _Atomic unsigned long long _status;
}

@property BOOL executeOnDealloc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)dequeue;
- (BOOL)cancelBlock;
- (BOOL)enqueue;
- (id)initWithBlock:(id /* block */)a0;
- (void)invoke:(unsigned long long)a0;
- (BOOL)executeBlock;
- (void)_execute;
- (void)notifyOnQueue:(id)a0 whenFinished:(id /* block */)a1;
- (void)waitForBlock;
- (BOOL)blockHasStarted;
- (BOOL)blockHasFinished;
- (BOOL)blockWasCanceled;
- (BOOL)enqueueWithDelay:(unsigned long long)a0;
- (BOOL)groupNotify:(id)a0;
- (BOOL)tryCancelBlock;
- (unsigned long long)_shouldEnqueue;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithQueue:(id)a0 block:(id /* block */)a1;

@end
