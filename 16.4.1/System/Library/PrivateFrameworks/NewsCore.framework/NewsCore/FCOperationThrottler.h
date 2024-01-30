@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;

@interface FCOperationThrottler : NSObject <FCOperationThrottler> {
    NSObject<OS_dispatch_source> *_dispatchSource;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_group> *_handlerSynchronizationGroup;
}

@property BOOL suspended;

- (void)addCompletionForCurrentOperation:(id /* block */)a0;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)tickleWithCompletion:(id /* block */)a0;
- (id)initWithDelegate:(id)a0 updateQueue:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)tickle;

@end
