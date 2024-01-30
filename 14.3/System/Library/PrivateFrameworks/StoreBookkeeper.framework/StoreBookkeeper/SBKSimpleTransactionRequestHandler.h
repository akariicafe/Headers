@class SBKTransactionController;

@interface SBKSimpleTransactionRequestHandler : SBKRequestHandler

@property (readonly, nonatomic) SBKTransactionController *transactionController;
@property (readonly, nonatomic) BOOL canceled;

- (void)cancel;
- (void)timeout;
- (void).cxx_destruct;
- (void)cancelWithError:(id)a0;
- (id)initWithBagContext:(id)a0;
- (void)scheduleTransaction:(id)a0 finishedBlock:(id /* block */)a1;

@end
