@class NSObject;
@protocol OS_dispatch_queue;

@interface __HMQueueDelegateCaller : HMDelegateCaller {
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithQueue:(id)a0;
- (void)invokeBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
