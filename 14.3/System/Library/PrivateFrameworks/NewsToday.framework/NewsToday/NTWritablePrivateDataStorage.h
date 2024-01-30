@class FCFileCoordinatedTodayPrivateDataTransactionQueue, NSString, FCFileCoordinatedTodayDropbox;

@interface NTWritablePrivateDataStorage : NSObject <NTWritablePrivateDataStorage>

@property (retain, nonatomic) FCFileCoordinatedTodayDropbox *dropbox;
@property (retain, nonatomic) FCFileCoordinatedTodayPrivateDataTransactionQueue *transactionQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)writeSeenHistoryItems:(id)a0 withCompletion:(id /* block */)a1;
- (void)writeReadHistoryItem:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithDropbox:(id)a0 transactionQueue:(id)a1;

@end
