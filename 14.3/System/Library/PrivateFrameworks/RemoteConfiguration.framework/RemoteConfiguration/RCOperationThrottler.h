@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;

@interface RCOperationThrottler : NSObject <RCOperationThrottler> {
    NSObject<OS_dispatch_source> *_dispatchSource;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_group> *_handlerSynchronizationGroup;
}

@property BOOL suspended;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 updateQueue:(id)a1;
- (void)dealloc;
- (void)tickleWithCompletion:(id /* block */)a0;
- (id)initWithDelegate:(id)a0;
- (void)tickle;
- (void)addCompletionForCurrentOperation:(id /* block */)a0;

@end
