@interface BRCDownloadThumbnailsBatchOperation : BRCTransferBatchOperation

@property (copy) id /* block */ perDownloadCompletionBlock;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)createActivity;
- (id)initWithSyncContext:(id)a0;
- (void).cxx_destruct;
- (void)addDownload:(id)a0;
- (id)actionPrettyName;
- (void)mainWithTransfers:(id)a0;
- (void)sendTransferCompletionCallBack:(id)a0 error:(id)a1;
- (id)transferredObjectsPrettyName;

@end
