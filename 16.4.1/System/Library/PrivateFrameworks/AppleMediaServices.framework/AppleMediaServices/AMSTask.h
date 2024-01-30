@class AMSThreadSafeSet, AMSPromise, NSObject;
@protocol OS_dispatch_queue;

@interface AMSTask : NSObject

@property (class, readonly, nonatomic) AMSThreadSafeSet *taskCache;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *performTaskQueue;
@property (retain, nonatomic) AMSPromise *promise;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } promiseAccessLock;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (nonatomic) long long runMode;

- (BOOL)cancel;
- (id)init;
- (void).cxx_destruct;
- (id)performBinaryTaskWithBlock:(id /* block */)a0;
- (id)performTaskWithBlock:(id /* block */)a0;
- (id)performTaskWithPromiseBlock:(id /* block */)a0;

@end
