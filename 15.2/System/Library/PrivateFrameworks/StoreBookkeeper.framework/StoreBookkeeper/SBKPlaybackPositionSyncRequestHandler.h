@class NSObject, SBKTransactionController, NSDictionary, NSMutableDictionary, SBKSyncTransaction, NSError, NSString;
@protocol SBKUniversalPlaybackPositionTransactionContext, SBKUniversalPlaybackPositionDataSource, OS_dispatch_queue;

@interface SBKPlaybackPositionSyncRequestHandler : SBKSyncRequestHandler <SBKTransactionControllerDelegate, SBKSyncTransactionProcessing> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_syncOperationQueue;
}

@property (retain, nonatomic) SBKTransactionController *kvsController;
@property (retain, nonatomic) id<SBKUniversalPlaybackPositionDataSource> dataSource;
@property (retain, nonatomic) id<SBKUniversalPlaybackPositionTransactionContext> dataSourceTransactionContext;
@property (retain, nonatomic) NSMutableDictionary *metadataItemsFromDataSource;
@property (retain, nonatomic) NSDictionary *metadataItemsToCommitToDataSource;
@property (retain, nonatomic) NSDictionary *metadataItemsToCommitToKVSStorage;
@property (retain, nonatomic) NSMutableDictionary *responseMetadataItemsToCommitToDataSource;
@property (retain, nonatomic) NSMutableDictionary *responseMetadataItemsMergedToCommitBackToKVSStorage;
@property (retain, nonatomic) SBKSyncTransaction *currentKVSTransaction;
@property (nonatomic) BOOL syncInProgress;
@property (nonatomic) BOOL canceled;
@property (retain, nonatomic) NSError *fatalSyncError;
@property (retain, nonatomic) NSString *overrideSyncAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_shouldStop;
- (void)timeout;
- (BOOL)_synchronize:(id *)a0;
- (void).cxx_destruct;
- (void)cancelWithError:(id)a0;
- (void)synchronizeWithCompletionHandler:(id /* block */)a0;
- (void)cancel;
- (id)transaction:(id)a0 syncAnchorForTransactionSyncAnchor:(id)a1;
- (id)transaction:(id)a0 conflictDetectionOrdinalForKey:(id)a1;
- (void)transaction:(id)a0 willProcessResponseData:(id)a1;
- (void)transaction:(id)a0 didProcessResponseData:(id)a1;
- (void)transaction:(id)a0 processUpdatedKey:(id)a1 data:(id)a2 conflict:(BOOL)a3 isDirty:(BOOL *)a4;
- (void)transaction:(id)a0 processDeletedKey:(id)a1 isDirty:(BOOL *)a2;
- (id)transaction:(id)a0 keyValuePairForUpdatedKey:(id)a1;
- (BOOL)transactionController:(id)a0 transactionDidFail:(id)a1 error:(id)a2;
- (void)transactionController:(id)a0 transactionDidCancel:(id)a1 error:(id)a2;
- (void)transactionController:(id)a0 transactionDidFinish:(id)a1;
- (id)initWithDataSource:(id)a0 bagContext:(id)a1;
- (id)initWithDataSource:(id)a0 bagContext:(id)a1 accountIdentifier:(id)a2;
- (void)clearTransactionResponseData;
- (void)_dataSourceCancelTransaction;
- (int)_mergeConflictedItemFromSyncResponse:(id)a0;
- (void)_mergeMetadataItemsFromSyncResponse;
- (id)newKVSSyncTransactionWithUpdatedMetadataItemIdentifiers:(id)a0 processConflicts:(BOOL)a1;
- (id)_synchronouslyRunKVSTransaction:(id)a0;
- (void)_signalKVSTransactionCompletion:(id)a0;
- (void)_signalKVSTransactionCompletion:(id)a0 withError:(id)a1;

@end
