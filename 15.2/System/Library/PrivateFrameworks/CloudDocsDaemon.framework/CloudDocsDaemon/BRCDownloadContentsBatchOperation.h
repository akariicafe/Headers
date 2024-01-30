@interface BRCDownloadContentsBatchOperation : BRCTransferBatchOperation

@property (copy) id /* block */ perDownloadCompletionBlock;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)addDownload:(id)a0;
- (id)initWithSyncContext:(id)a0;
- (id)createActivity;
- (void)sendTransferCompletionCallBack:(id)a0 error:(id)a1;
- (void)mainWithTransfers:(id)a0;
- (id)actionPrettyName;
- (id)transferredObjectsPrettyName;

@end
