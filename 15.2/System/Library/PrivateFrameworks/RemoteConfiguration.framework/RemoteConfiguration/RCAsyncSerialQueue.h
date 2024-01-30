@class NSOperationQueue;

@interface RCAsyncSerialQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *serialOperationQueue;
@property (nonatomic) BOOL suspended;

- (void)withQualityOfService:(long long)a0 enqueueBlockForMainThread:(id /* block */)a1;
- (void)enqueueOperation:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithQualityOfService:(long long)a0;
- (void)cancelAllBlocks;
- (void)enqueueBlockForMainThread:(id /* block */)a0;
- (void)enqueueBlock:(id /* block */)a0;

@end
