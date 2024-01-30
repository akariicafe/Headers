@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNSpotlightIndexingLogger : NSObject <CNSpotlightIndexingLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) NSObject<OS_os_log> *summaryLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_stringForSpotlightError:(id)a0 willRetry:(BOOL)a1;
- (void)reindexingAllSearchableItems:(id /* block */)a0;
- (void)indexingContacts:(id /* block */)a0;
- (void)reindexingSearchableItemsWithIdentifiers:(id /* block */)a0;
- (void)willReindexAsIndexVersionChangedFrom:(long long)a0 to:(long long)a1;
- (void)noContactChangesToIndex;
- (void)willReindexAsChangeHistoryIsTruncated:(id)a0;
- (void)willReindexItemsWithIdentifiers:(id)a0;
- (void)willStartIndexingWithClientState:(id)a0;
- (void)deferringReindexAsFailedToPrepareForReindexing;
- (void)willReindexAsFailedToFetchClientState;
- (void)willReindexAsFailedToRegisterForChangeHistory:(id)a0 error:(id)a1;
- (void)willReindexAsFailedToFetchChangeHistory:(id)a0 error:(id)a1;
- (void)willResumeReindexingAsNotFinished;
- (void)willReindexAsSnapshotAnchorChangedFrom:(id)a0 to:(id)a1;
- (void)willResumeIndexingAfterOffset:(long long)a0;
- (void)didNotFinishIndexingForFullSyncWithError:(id)a0;
- (void)failedToCreateSearchableItemForContactIdentifier:(id)a0;
- (void)failedToFetchContactForChange:(id)a0;
- (void)finishedIndexingForFullSyncWithCount:(unsigned long long)a0;
- (void)didNotFinishIndexingForDeltaSyncWithError:(id)a0;
- (void)finishedIndexingForDeltaSyncWithUpdateCount:(unsigned long long)a0 deleteCount:(unsigned long long)a1;
- (void)finishedBatchIndexWithUpdateIdentifiers:(id)a0 deleteIdentifiers:(id)a1;
- (void)willBatchIndexForFullSyncWithCount:(unsigned long long)a0 lastOffset:(long long)a1 doneFullSync:(BOOL)a2;
- (void)verifiedIndexWithSummmary:(id)a0;
- (void)willBatchIndexForDeltaSyncWithUpdateCount:(unsigned long long)a0 deleteCount:(unsigned long long)a1;
- (void)willClearChangeHistory:(id)a0 toChangeAnchor:(id)a1;
- (void)failedToEndIndexBatchWithSpotlight:(id)a0 willRetry:(BOOL)a1;
- (void)failedToClearChangeHistory:(id)a0 toChangeAnchor:(id)a1 error:(id)a2;
- (void)failedToBeginIndexBatchWithSpotlight:(id)a0;
- (void)failedToFetchSearchableForContactIdentifiers:(id)a0 error:(id)a1;
- (void)verifyingIndex:(id /* block */)a0;
- (void)failedToFetchClientStateFromSpotlight:(id)a0 willRetry:(BOOL)a1;
- (void)failedToJournalSearchableItemsForIndexingWithSpotlight:(id)a0 identifiers:(id)a1 willRetry:(BOOL)a2;
- (void)failedToJournalItemIdentifiersForDeletionWithSpotlight:(id)a0 identifiers:(id)a1 willRetry:(BOOL)a2;
- (void)failedToDeleteAllSearchableItemsWithSpotlight:(id)a0 willRetry:(BOOL)a1;
- (void)failedToUnarchiveClientStateData:(id)a0;
- (void)failedToCreateUnarchiverForClientStateWithError:(id)a0;

@end
