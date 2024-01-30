@class NSObject;
@protocol OS_dispatch_queue;

@interface TSUDispatchLock : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *underlyingQueue;

- (id)initWithLabel:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)assertHasReadLock;
- (void)assertHasWriteLock;
- (void)performAsynchronousRead:(id /* block */)a0;
- (void)performAsynchronousWrite:(id /* block */)a0;
- (void)performSynchronousRead:(id /* block */)a0;
- (void)performSynchronousWrite:(id /* block */)a0;

@end
