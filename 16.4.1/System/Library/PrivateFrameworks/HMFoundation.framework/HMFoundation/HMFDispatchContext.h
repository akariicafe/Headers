@class NSObject;
@protocol OS_dispatch_queue;

@interface HMFDispatchContext : NSObject <HMFAsyncContext> {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _alwaysDispatch;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;

+ (void)blessWithImplicitContext:(id)a0;

- (void)performBlock:(id /* block */)a0;
- (void)dealloc;
- (id)initWithQueue:(id)a0 alwaysDispatch:(BOOL)a1;
- (void)assertIsExecuting;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
