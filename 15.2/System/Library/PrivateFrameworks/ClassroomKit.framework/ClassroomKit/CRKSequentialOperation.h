@class NSArray, CATOperation, CATOperationQueue;

@interface CRKSequentialOperation : CATOperation

@property (nonatomic) unsigned long long frontOfQueue;
@property (readonly, nonatomic) NSArray *operations;
@property (readonly, nonatomic) CATOperationQueue *queue;
@property (retain, nonatomic) CATOperation *failedOperation;

+ (id)sequentialOperationWithOperations:(id)a0;

- (BOOL)isAsynchronous;
- (void)main;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (id)initWithSequentialOperations:(id)a0 queue:(id)a1;
- (void)enqueueFront;
- (void)frontOperationDidFinish:(id)a0;

@end
