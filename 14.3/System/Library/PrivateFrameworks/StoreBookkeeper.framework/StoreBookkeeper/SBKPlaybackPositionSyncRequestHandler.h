@class NSObject, SBKTransactionController, NSDictionary, NSMutableDictionary, SBKSyncTransaction, NSError, NSString;
@protocol SBKUniversalPlaybackPositionTransactionContext, SBKUniversalPlaybackPositionDataSource, OS_dispatch_queue;

@interface SBKPlaybackPositionSyncRequestHandler : SBKSyncRequestHandler <SBKTransactionControllerDelegate, SBKSyncTransactionProcessing> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_syncOperationQueue;
}

@property (retain) SBKTransactionController *kvsController;
@property (retain) id<SBKUniversalPlaybackPositionDataSource> dataSource;
@property (retain) id<SBKUniversalPlaybackPositionTransactionContext> dataSourceTransactionContext;
@property (retain) NSMutableDictionary *metadataItemsFromDataSource;
@property (retain) NSDictionary *metadataItemsToCommitToDataSource;
@property (retain) NSDictionary *metadataItemsToCommitToKVSStorage;
@property (retain) NSMutableDictionary *responseMetadataItemsToCommitToDataSource;
@property (retain) NSMutableDictionary *responseMetadataItemsMergedToCommitBackToKVSStorage;
@property (retain) SBKSyncTransaction *currentKVSTransaction;
@property BOOL syncInProgress;
@property BOOL canceled;
@property (retain) NSError *fatalSyncError;
@property (retain) NSString *overrideSyncAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)synchronizeWithCompletionHandler:(id /* block */)a0;
- (void)timeout;
- (void).cxx_destruct;
- (void)cancelWithError:(id)a0;
- (BOOL)_shouldStop;
- (BOOL)_synchronize:(id *)a0;
- (BOOL)transactionController:(id)a0 transactionDidFail:(id)a1 error:(id)a2;
- (void)transactionController:(id)a0 transactionDidCancel:(id)a1 error:(id)a2;
- (void)transactionController:(id)a0 transactionDidFinish:(id)a1;
- (id)initWithDataSource:(id)a0 bagContext:(id)a1;
- (void)clearTransactionResponseData;
- (void)_dataSourceCancelTransaction;
- (id)newKVSSyncTransactionWithUpdatedMetadataItemIdentifiers:(id)a0 processConflicts:(BOOL)a1;
- (id)_synchronouslyRunKVSTransaction:(id)a0;
- (void)_mergeMetadataItemsFromSyncResponse;
- (void)_signalKVSTransactionCompletion:(id)a0 withError:(id)a1;
- (void)_signalKVSTransactionCompletion:(id)a0;
- (void)transaction:(id)a0 willProcessResponseData:(id)a1;
- (void)transaction:(id)a0 didProcessResponseData:(id)a1;
- (void)transaction:(id)a0 processUpdatedKey:(id)a1 data:(id)a2 conflict:(BOOL)a3 isDirty:(BOOL *)a4;
- (int)_mergeConflictedItemFromSyncResponse:(id)a0;
- (void)transaction:(id)a0 processDeletedKey:(id)a1 isDirty:(BOOL *)a2;
- (id)transaction:(id)a0 keyValuePairForUpdatedKey:(id)a1;
- (id)transaction:(id)a0 syncAnchorForTransactionSyncAnchor:(id)a1;
- (id)transaction:(id)a0 conflictDetectionOrdinalForKey:(id)a1;

@end
