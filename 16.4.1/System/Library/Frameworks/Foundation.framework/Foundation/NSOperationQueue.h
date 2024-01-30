@class _NSOperationQueueProgress, NSString, NSObject, NSProgress, NSPointerArray, NSOperation, NSMutableArray;
@protocol OS_dispatch_queue;

@interface NSOperationQueue : NSObject <NSProgressReporting> {
    struct { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } __queueLock; NSOperation *__firstOperation; NSOperation *__lastOperation; NSOperation *__firstPriOperation[6]; NSOperation *__lastPriOperation[6]; NSMutableArray *_barriers; _NSOperationQueueProgress *_progress; _Atomic unsigned long long __operationCount; NSPointerArray *__activeThreads; long long __maxNumOps; int __actualMaxNumOps; int __numExecOps; NSObject<OS_dispatch_queue> *__dispatch_queue; NSObject<OS_dispatch_queue> *__backingQueue; NSString *__name; char __nameBuffer[300]; _Atomic BOOL __suspended; _Atomic BOOL __overcommit; _Atomic unsigned char __propertyQoS; _Atomic unsigned char __operationsObserverCount; _Atomic unsigned char __operationCountObserverCount; _Atomic unsigned char __progressReporting; unsigned char __mainQ; } _iqp;
}

@property (class, readonly) NSOperationQueue *currentQueue;
@property (class, readonly) NSOperationQueue *mainQueue;

@property (readonly) NSProgress *progress;
@property long long maxConcurrentOperationCount;
@property (getter=isSuspended) BOOL suspended;
@property (copy) NSString *name;
@property long long qualityOfService;
@property NSObject<OS_dispatch_queue> *underlyingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (void)addOperation:(id)a0;
- (void)addOperations:(id)a0 waitUntilFinished:(BOOL)a1;
- (id)operations;
- (void)cancelAllOperations;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)addBarrierBlock:(id /* block */)a0;
- (void)dealloc;
- (unsigned long long)operationCount;
- (void)addOperationWithBlock:(id /* block */)a0;
- (id)init;
- (id)__graphDescription;
- (void)_fc_addUncancellableOperationForReactorID:(id)a0 block:(id /* block */)a1;
- (void)_fc_addUncancellableOperationWithBlock:(id /* block */)a0;
- (BOOL)overcommitsOperations;
- (void)setOvercommitsOperations:(BOOL)a0;
- (void)waitUntilAllOperationsAreFinished;

@end
