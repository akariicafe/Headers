@class NSOperationQueue;

@interface SCKAsyncSerialQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *serialOperationQueue;
@property (getter=isSuspended) BOOL suspended;

- (void)waitUntilEmpty;
- (void).cxx_destruct;
- (id)init;
- (void)enqueueBlock:(id /* block */)a0;

@end
