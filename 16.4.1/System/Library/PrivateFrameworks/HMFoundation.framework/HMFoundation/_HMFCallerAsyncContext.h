@interface _HMFCallerAsyncContext : NSObject <HMFAsyncContext>

- (void)performBlock:(id /* block */)a0;
- (id)description;
- (void)assertIsExecuting;

@end
