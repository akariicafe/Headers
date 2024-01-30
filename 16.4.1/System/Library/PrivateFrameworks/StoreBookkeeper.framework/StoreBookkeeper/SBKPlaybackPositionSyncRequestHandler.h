@class NSMutableDictionary, SBKTransactionController, NSString, SBKSyncTransaction, NSError, NSObject, NSDictionary;
@protocol OS_dispatch_queue, SBKUniversalPlaybackPositionDataSource, SBKUniversalPlaybackPositionTransactionContext;

@interface SBKPlaybackPositionSyncRequestHandler : SBKSyncRequestHandler <SBKTransactionControllerDelegate, SBKSyncTransactionProcessing> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_syncOperationQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<SBKUniversalPlaybackPositionTransactionContext> _dataSourceTransactionContext;
    SBKSyncTransaction *_currentKVSTransaction;
    NSDictionary *_metadataItemsToCommitToDataSource;
    NSDictionary *_metadataItemsToCommitToKVSStorage;
    NSMutableDictionary *_metadataItemsFromDataSource;
    NSMutableDictionary *_responseMetadataItemsToCommitToDataSource;
    NSMutableDictionary *_responseMetadataItemsMergedToCommitBackToKVSStorage;
}

@property (retain, nonatomic) SBKTransactionController *kvsController;
@property (retain, nonatomic) id<SBKUniversalPlaybackPositionDataSource> dataSource;
@property (nonatomic) BOOL syncInProgress;
@property (nonatomic) BOOL canceled;
@property (retain, nonatomic) NSError *fatalSyncError;
@property (retain, nonatomic) NSString *overrideSyncAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)synchronizeWithCompletionHandler:(id /* block */)a0;
- (void)timeout;
- (void)cancelWithError:(id)a0;
- (void)cancel;
- (void).cxx_destruct;
- (BOOL)_synchronize:(id *)a0;
- (BOOL)_shouldStop;
- (void)_dataSourceCancelTransaction;
- (int)_mergeConflictedItemFromSyncResponse:(id)a0;
- (void)_mergeMetadataItemsFromSyncResponse;
- (void)_signalKVSTransactionCompletion:(id)a0;
- (void)_signalKVSTransactionCompletion:(id)a0 withError:(id)a1;
- (id)_synchronouslyRunKVSTransaction:(id)a0;
- (void)clearTransactionResponseData;
- (id)currentKVSTransaction;
- (id)dataSourceTransactionContext;
- (id)initWithDataSource:(id)a0 bagContext:(id)a1;
- (id)initWithDataSource:(id)a0 bagContext:(id)a1 accountIdentifier:(id)a2;
- (id)metadataItemsToCommitToDataSource;
- (id)metadataItemsToCommitToKVSStorage;
- (id)newKVSSyncTransactionWithUpdatedMetadataItemIdentifiers:(id)a0 processConflicts:(BOOL)a1;
- (void)setCurrentKVSTransaction:(id)a0;
- (void)setDataSourceTransactionContext:(id)a0;
- (void)setMetadataItemsToCommitToDataSource:(id)a0;
- (void)setMetadataItemsToCommitToKVSStorage:(id)a0;
- (id)transaction:(id)a0 conflictDetectionOrdinalForKey:(id)a1;
- (void)transaction:(id)a0 didProcessResponseData:(id)a1;
- (id)transaction:(id)a0 keyValuePairForUpdatedKey:(id)a1;
- (void)transaction:(id)a0 processDeletedKey:(id)a1 isDirty:(BOOL *)a2;
- (void)transaction:(id)a0 processUpdatedKey:(id)a1 data:(id)a2 conflict:(BOOL)a3 isDirty:(BOOL *)a4;
- (id)transaction:(id)a0 syncAnchorForTransactionSyncAnchor:(id)a1;
- (void)transaction:(id)a0 willProcessResponseData:(id)a1;
- (void)transactionController:(id)a0 transactionDidCancel:(id)a1 error:(id)a2;
- (BOOL)transactionController:(id)a0 transactionDidFail:(id)a1 error:(id)a2;
- (void)transactionController:(id)a0 transactionDidFinish:(id)a1;

@end
