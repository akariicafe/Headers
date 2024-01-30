@class NSString, BRCServerItem, BRCAppLibrary;

@interface BRCPCSChainingOperation : _BRCOperation <BRCOperationSubclass> {
    BRCAppLibrary *_appLibrary;
    BRCServerItem *_rootItem;
    BOOL _completed;
    unsigned long long _batchSize;
    int _tryCount;
    BOOL _syncDownBeforeRetry;
    unsigned long long _chainedRecordsCount;
}

@property (copy, nonatomic) id /* block */ pcsChainCompletionBlock;
@property (nonatomic) BOOL shouldFillBatch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (BOOL)shouldRetryForError:(id)a0;
- (id)createActivity;
- (id)initWithRootItem:(id)a0 appLibrary:(id)a1;
- (void)_sendRecordBatch:(id)a0 recursed:(BOOL)a1 completion:(id /* block */)a2;
- (void)_sendRecordBatch:(id)a0 completion:(id /* block */)a1;
- (void)_buildRecordListWithCompletion:(id /* block */)a0;
- (void)_chainRecords;

@end
