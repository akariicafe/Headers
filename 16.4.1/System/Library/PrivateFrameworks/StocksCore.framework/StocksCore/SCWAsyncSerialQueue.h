@class NSOperationQueue;

@interface SCWAsyncSerialQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *serialOperationQueue;
@property (getter=isSuspended) BOOL suspended;

- (void)enqueueBlock:(id /* block */)a0;
- (id)initWithQualityOfService:(long long)a0;
- (void)waitUntilEmpty;
- (void).cxx_destruct;

@end
