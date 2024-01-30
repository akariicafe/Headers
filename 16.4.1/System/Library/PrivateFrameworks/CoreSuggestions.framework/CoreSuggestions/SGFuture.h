@class NSError, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SGFuture : NSObject {
    NSObject *_result;
    NSError *_error;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSObject<OS_dispatch_queue> *_callbacks;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    BOOL _alwaysUseCallbacksQueue;
    BOOL _yoDontLeaveMeHangingBro;
    NSObject *_parentObject;
    void *_parentObjectKey;
}

@property (readonly, nonatomic) BOOL isComplete;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

+ (id)createWithImmediateResult:(id)a0 error:(id)a1;
+ (void)waitForFuturesToComplete:(id)a0 withCallback:(id /* block */)a1;
+ (id)createWithImmediateError:(id)a0;
+ (id)futureForObject:(id)a0 withKey:(void *)a1 onCreate:(id /* block */)a2;
+ (id)createAfter:(id)a0 onCreate:(id /* block */)a1;
+ (id)createWithImmediateResult:(id)a0;

- (void)clearTimeout;
- (id)result;
- (id /* block */)completer;
- (BOOL)_finishWithResult:(id)a0 orError:(id)a1;
- (id)waitWithTimeout:(double)a0;
- (void)disassociateFromParentObject;
- (id)wait;
- (BOOL)fail:(id)a0;
- (void)setTimeout:(double)a0;
- (void)wait:(id /* block */)a0;
- (void)dealloc;
- (void)setTargetQueue:(id)a0 useAfterCompletion:(BOOL)a1;
- (id)error;
- (BOOL)completeWithResult:(id)a0 error:(id)a1;
- (void)_clearTimeoutNonThreadSafe;
- (BOOL)succeed:(id)a0;
- (void)_wait:(id /* block */)a0 forSyncAPI:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;

@end
