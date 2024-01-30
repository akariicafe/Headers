@interface SSVBarrierOperationQueue : NSOperationQueue

- (void)addOperation:(id)a0;
- (void)addOperations:(id)a0 waitUntilFinished:(BOOL)a1;
- (void)addOperationWithBlock:(id /* block */)a0;
- (void)addBarrierOperation:(id)a0;

@end
