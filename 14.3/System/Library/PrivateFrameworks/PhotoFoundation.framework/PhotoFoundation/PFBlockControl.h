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

- (BOOL)cancelBlock;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)dequeue;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)a0;
- (void)_execute;
- (void)invoke:(unsigned long long)a0;
- (BOOL)enqueue;
- (BOOL)executeBlock;
- (void)waitForBlock;
- (void)notifyOnQueue:(id)a0 whenFinished:(id /* block */)a1;
- (BOOL)blockHasStarted;
- (BOOL)blockHasFinished;
- (BOOL)blockWasCanceled;
- (BOOL)enqueueWithDelay:(unsigned long long)a0;
- (BOOL)groupNotify:(id)a0;
- (BOOL)tryCancelBlock;
- (unsigned long long)_shouldEnqueue;
- (id)initWithQueue:(id)a0 block:(id /* block */)a1;

@end
