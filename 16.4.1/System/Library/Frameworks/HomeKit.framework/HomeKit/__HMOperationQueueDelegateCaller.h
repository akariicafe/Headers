@class NSOperationQueue;

@interface __HMOperationQueueDelegateCaller : HMDelegateCaller {
    NSOperationQueue *_queue;
}

- (void)invokeBlock:(id /* block */)a0;
- (id)init;
- (id)initWithOperationQueue:(id)a0;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
