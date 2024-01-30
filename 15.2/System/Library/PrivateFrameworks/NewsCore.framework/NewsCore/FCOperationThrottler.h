@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;

@interface FCOperationThrottler : NSObject <FCOperationThrottler> {
    NSObject<OS_dispatch_source> *_dispatchSource;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_group> *_handlerSynchronizationGroup;
}

@property BOOL suspended;

- (void)tickle;
- (id)initWithDelegate:(id)a0;
- (void)addCompletionForCurrentOperation:(id /* block */)a0;
- (id)initWithDelegate:(id)a0 updateQueue:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)tickleWithCompletion:(id /* block */)a0;
- (void)dealloc;

@end
