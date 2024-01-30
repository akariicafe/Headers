@class FCFileCoordinatedTodayPrivateDataTransactionQueue, NSString, FCFileCoordinatedTodayDropbox;

@interface NTReadablePrivateDataStorage : NSObject <NTReadablePrivateDataStorage>

@property (retain, nonatomic) FCFileCoordinatedTodayDropbox *dropbox;
@property (retain, nonatomic) FCFileCoordinatedTodayPrivateDataTransactionQueue *transactionQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
