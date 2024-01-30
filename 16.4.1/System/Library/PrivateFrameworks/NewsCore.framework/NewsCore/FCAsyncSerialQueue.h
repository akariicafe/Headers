@class NSOperationQueue;

@interface FCAsyncSerialQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *serialOperationQueue;
@property (nonatomic) BOOL suspended;
@property (readonly, nonatomic) NSOperationQueue *underlyingOperationQueue;

- (void)enqueueOperation:(id)a0;
- (void)enqueueBlockForMainThread:(id /* block */)a0;
- (void)enqueueBlock:(id /* block */)a0;
- (id)initWithQualityOfService:(long long)a0;
- (id)init;
- (void)withQualityOfService:(long long)a0 enqueueBlockForMainThread:(id /* block */)a1;
- (void)cancelAllBlocks;
- (void).cxx_destruct;

@end
