@class NSObject;
@protocol OS_dispatch_queue;

@interface TROperationQueue : NSOperationQueue

@property (getter=isCancelled) BOOL cancelled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cancellationQ;

- (void)addOperations:(id)a0 waitUntilFinished:(BOOL)a1;
- (void)addOperationWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)addOperation:(id)a0;

@end
