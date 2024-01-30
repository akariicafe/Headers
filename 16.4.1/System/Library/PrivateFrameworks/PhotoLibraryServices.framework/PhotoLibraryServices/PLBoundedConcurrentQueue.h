@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PLBoundedConcurrentQueue : NSObject {
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    NSObject<OS_dispatch_queue> *_submissionQueue;
    NSObject<OS_dispatch_semaphore> *_bound;
}

- (void)async:(id /* block */)a0;
- (void)sync:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 concurrencyLimit:(unsigned char)a1;

@end
