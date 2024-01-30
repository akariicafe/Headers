@class NSOperationQueue;

@interface SCKAsyncSerialQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *serialOperationQueue;
@property (getter=isSuspended) BOOL suspended;

- (void)enqueueBlock:(id /* block */)a0;
- (id)init;
- (void)waitUntilEmpty;
- (void).cxx_destruct;

@end
