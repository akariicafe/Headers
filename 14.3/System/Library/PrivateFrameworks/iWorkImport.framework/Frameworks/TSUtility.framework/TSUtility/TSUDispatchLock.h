@class NSObject;
@protocol OS_dispatch_queue;

@interface TSUDispatchLock : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *underlyingQueue;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0;
- (void)performSynchronousRead:(id /* block */)a0;
- (void)performAsynchronousRead:(id /* block */)a0;
- (void)performSynchronousWrite:(id /* block */)a0;
- (void)performAsynchronousWrite:(id /* block */)a0;
- (void)assertHasReadLock;
- (void)assertHasWriteLock;

@end
