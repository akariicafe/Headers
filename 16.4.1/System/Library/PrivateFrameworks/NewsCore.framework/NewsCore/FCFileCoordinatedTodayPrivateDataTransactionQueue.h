@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayPrivateDataTransactionQueue : NSObject

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (void)peekAtTransactionsWithCompletion:(id /* block */)a0;
- (id)initWithFileURL:(id)a0;
- (void)dequeueTransactionsWithCompletion:(id /* block */)a0;
- (void)enqueueTransaction:(id)a0 withMaxTransactionCount:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;

@end
