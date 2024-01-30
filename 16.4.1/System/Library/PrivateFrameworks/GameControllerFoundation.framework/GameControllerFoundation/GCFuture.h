@class NSString;

@interface GCFuture : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _state;
    struct { unsigned char targetQueueOptional : 1; unsigned char async : 1; unsigned char unused : 6; } _flags;
    _Atomic BOOL _activated;
    _Atomic BOOL _cancelled;
    id _resultOrError;
}

@property (copy) NSString *label;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)futureWithError:(id)a0;
+ (id)futureWithResult:(id)a0;
+ (id)futureWithBlock:(id /* block */)a0;
+ (id)cancelledFuture;
+ (id)futureOnQueue:(id)a0 withBlock:(id /* block */)a1;
+ (id)futureOnQueue:(id)a0 withOptions:(unsigned int)a1 block:(id /* block */)a2;
+ (id)futureWithLabel:(id)a0 block:(id /* block */)a1;
+ (id)futureWithLabel:(id)a0 onQueue:(id)a1 block:(id /* block */)a2;
+ (id)futureWithOptions:(unsigned int)a0 block:(id /* block */)a1;

- (id)initWithResult:(id)a0;
- (id)result;
- (BOOL)isFinished;
- (long long)waitUntilFinished;
- (id)redactedDescription;
- (id)debugDescription;
- (void)cancel;
- (void)dealloc;
- (id)error;
- (id)initWithError:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_checkFinished:(BOOL)a0;
- (void)observeFinishOnQueue:(id)a0 withBlock:(id /* block */)a1;
- (void)observeSuccess:(id /* block */)a0;
- (void)observeFailure:(id /* block */)a0;
- (void)observeFinishWithOptions:(unsigned int)a0 block:(id /* block */)a1;
- (id)thenWithResult:(id /* block */)a0;
- (unsigned long long)_creatorFrame;
- (void)_observeFinishOnQueue:(id)a0 withOptions:(unsigned int)a1 qosClass:(unsigned int)a2 relativePriority:(int)a3 block:(id /* block */)a4;
- (BOOL)_setState:(long long)a0 result:(id)a1 error:(id)a2;
- (id)_thenRequiringState:(long long)a0 onQueue:(id)a1 withOptions:(unsigned int)a2 qosClass:(unsigned int)a3 relativePriority:(int)a4 label:(id)a5 block:(id /* block */)a6;
- (id)_thenSynchronouslyRequiringState:(long long)a0 onQueue:(id)a1 withOptions:(unsigned int)a2 qosClass:(unsigned int)a3 relativePriority:(int)a4 label:(id)a5 block:(id /* block */)a6;
- (id)initCancelled;
- (id)initOnQueue:(id)a0 withBlock:(id /* block */)a1;
- (id)initOnQueue:(id)a0 withOptions:(unsigned int)a1 block:(id /* block */)a2;
- (void)observeCancellation:(id /* block */)a0;
- (void)observeFinish:(id /* block */)a0;
- (void)observeFinishOnQueue:(id)a0 withOptions:(unsigned int)a1 block:(id /* block */)a2;
- (void)observeFinishOnQueue:(id)a0 withOptions:(unsigned int)a1 qosClass:(unsigned int)a2 relativePriority:(int)a3 block:(id /* block */)a4;
- (void)observeSuccessOnQueue:(id)a0 withBlock:(id /* block */)a1;
- (id)resultIfFinished;
- (id)thenOnQueue:(id)a0 with:(id /* block */)a1;
- (id)thenOnQueue:(id)a0 withOptions:(unsigned int)a1 qosClass:(unsigned int)a2 relativePriority:(int)a3 label:(id)a4 block:(id /* block */)a5;
- (id)thenOnQueue:(id)a0 withResult:(id /* block */)a1;
- (id)thenSynchronouslyOnQueue:(id)a0 with:(id /* block */)a1;
- (id)thenSynchronouslyOnQueue:(id)a0 withOptions:(unsigned int)a1 qosClass:(unsigned int)a2 relativePriority:(int)a3 label:(id)a4 block:(id /* block */)a5;
- (id)thenSynchronouslyWith:(id /* block */)a0;
- (id)thenSynchronouslyWithResult:(id /* block */)a0;
- (id)thenWith:(id /* block */)a0;
- (long long)waitForResult:(id *)a0 error:(id *)a1;

@end
