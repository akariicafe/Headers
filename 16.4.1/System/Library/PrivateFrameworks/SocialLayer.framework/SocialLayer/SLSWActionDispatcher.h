@class NSObject;
@protocol OS_dispatch_queue;

@interface SLSWActionDispatcher : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)_sendAction:(id)a0 toProcess:(id)a1 completion:(id /* block */)a2;
- (id)bundleIDForProcess:(id)a0 error:(id *)a1;
- (void)dispatchAction:(id)a0 toProcess:(id)a1 completion:(id /* block */)a2;
- (void)dispatchAction:(id)a0 withAssertionForProcess:(id)a1 completion:(id /* block */)a2;

@end
