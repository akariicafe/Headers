@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;

@interface SCKOperationThrottler : NSObject <SCKOperationThrottler> {
    NSObject<OS_dispatch_source> *_dispatchSource;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_group> *_handlerSynchronizationGroup;
}

@property BOOL suspended;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 updateQueue:(id)a1;
- (void)dealloc;
- (void)tickleWithCompletion:(id /* block */)a0;
- (id)initWithDelegate:(id)a0;
- (void)tickle;
- (void)addCompletionForCurrentOperation:(id /* block */)a0;

@end
