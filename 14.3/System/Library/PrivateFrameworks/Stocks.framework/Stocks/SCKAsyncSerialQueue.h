@class NSOperationQueue;

@interface SCKAsyncSerialQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *serialOperationQueue;
@property (getter=isSuspended) BOOL suspended;

- (id)init;
- (void).cxx_destruct;
- (void)waitUntilEmpty;
- (void)enqueueBlock:(id /* block */)a0;

@end
