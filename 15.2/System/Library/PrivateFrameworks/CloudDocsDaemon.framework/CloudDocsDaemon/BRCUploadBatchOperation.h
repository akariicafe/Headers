@class BRCClientZone;

@interface BRCUploadBatchOperation : BRCTransferBatchOperation {
    BRCClientZone *_clientZone;
}

@property (copy) id /* block */ perUploadCompletionBlock;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)createActivity;
- (void)_uploadRecordsByID:(id)a0;
- (id)initWithSyncContext:(id)a0 clientZone:(id)a1;
- (void)addItem:(id)a0 stageID:(id)a1 record:(id)a2 transferSize:(unsigned long long)a3;
- (void)sendTransferCompletionCallBack:(id)a0 error:(id)a1;
- (void)mainWithTransfers:(id)a0;
- (id)actionPrettyName;

@end
