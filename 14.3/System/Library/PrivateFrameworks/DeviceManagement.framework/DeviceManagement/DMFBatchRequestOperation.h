@class CATRemoteTaskOperation, NSArray, CATOperationQueue;

@interface DMFBatchRequestOperation : CATOperation

@property (retain, nonatomic) CATOperationQueue *queue;
@property (retain, nonatomic) CATRemoteTaskOperation *activityTransactionOperation;
@property (copy, nonatomic) NSArray *subOperations;

- (void)setName:(id)a0;
- (void).cxx_destruct;
- (void)main;
- (BOOL)isAsynchronous;
- (void)activityTransactionOperationDidStart:(id)a0;
- (void)activityTransactionOperationDidFinish:(id)a0;
- (id)initWithActivityTransactionOperation:(id)a0 subOperations:(id)a1;

@end
