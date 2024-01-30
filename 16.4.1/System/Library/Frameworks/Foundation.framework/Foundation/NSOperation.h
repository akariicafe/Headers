@class NSMutableArray, NSArray, NSString, NSOperationQueue, NSHashTable, NSObject;
@protocol OS_voucher;

@interface NSOperation : NSObject {
    struct { NSOperation *__prevOp; NSOperation *__nextOp; NSOperation *__nextPriOp; NSOperationQueue *__queue; NSMutableArray *__dependencies; NSHashTable *__down_dependencies; long long __unfinished_deps; id /* block */ __completion; void *__obsInfo; void *__implicitObsInfo; double __thread_prio; char *__nameBuffer; NSObject<OS_voucher> *_voucher; id /* block */ __schedule; struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __wait_mutex; struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } __wait_cond; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } __lock; BOOL _shouldRemoveDependenciesAfterFinish; _Atomic unsigned char __state; char __prio; _Atomic BOOL __cached_isReady; _Atomic BOOL __isCancelled; _Atomic unsigned char __propertyQoS; _Atomic unsigned char __isExecutingObserverCount; _Atomic unsigned char __isFinishedObserverCount; _Atomic unsigned char __isReadyObserverCount; _Atomic unsigned char __isCancelledObserverCount; } _iop;
}

@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly, getter=isExecuting) BOOL executing;
@property (readonly, getter=isFinished) BOOL finished;
@property (readonly, getter=isConcurrent) BOOL concurrent;
@property (readonly, getter=isAsynchronous) BOOL asynchronous;
@property (readonly, getter=isReady) BOOL ready;
@property (readonly, copy) NSArray *dependencies;
@property long long queuePriority;
@property (copy) id /* block */ completionBlock;
@property double threadPriority;
@property long long qualityOfService;
@property (copy) NSString *name;

+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)currentOperation;
+ (BOOL)_removesDependenciesAfterFinish;
+ (id)keyPathsForValuesAffectingReady;
+ (id)keyPathsForValuesAffectingCancelled;
+ (id)keyPathsForValuesAffectingExecuting;
+ (id)keyPathsForValuesAffectingFinished;
+ (id)keyPathsForValuesAffectingIsCancelled;
+ (id)keyPathsForValuesAffectingIsReady;

- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)waitUntilFinished;
- (void)main;
- (id)debugDescription;
- (void)cancel;
- (void *)observationInfo;
- (void)dealloc;
- (id)init;
- (void)start;
- (id)description;
- (void)setObservationInfo:(void *)a0;
- (id)__graphDescription:(unsigned long long)a0;
- (id /* block */)_copyCompletionBlock;
- (id)_implicitObservationInfo;
- (void)addDependency:(id)a0;
- (void)removeAllDependencies;
- (void)removeDependency:(id)a0;
- (void)waitUntilFinishedOrTimeout:(double)a0;

@end
