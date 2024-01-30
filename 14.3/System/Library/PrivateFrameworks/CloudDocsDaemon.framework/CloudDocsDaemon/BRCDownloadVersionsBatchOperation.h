@class NSMutableDictionary;

@interface BRCDownloadVersionsBatchOperation : BRCTransferBatchOperation {
    NSMutableDictionary *_readers;
}

@property (copy) id /* block */ perDownloadCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)addDownload:(id)a0;
- (id)createActivity;
- (id)initWithSyncContext:(id)a0 forNonLocalVersion:(BOOL)a1;
- (void)sendTransferCompletionCallBack:(id)a0 error:(id)a1;
- (void)mainWithTransfers:(id)a0;
- (id)actionPrettyName;
- (void)addReaderID:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelReaderID:(id)a0;
- (id)transferredObjectsPrettyName;

@end
