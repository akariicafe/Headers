@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNSpotlightIndexingLogger : NSObject <CNSpotlightIndexingLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) NSObject<OS_os_log> *summaryLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)failedToUnarchiveClientStateData:(id)a0;
- (void)failedToCreateUnarchiverForClientStateWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_stringForSpotlightError:(id)a0 willRetry:(BOOL)a1;
- (void)indexingContacts:(id /* block */)a0;
- (void)verifyingIndex:(id /* block */)a0;
- (void)verifiedIndexWithSummmary:(id)a0;
- (void)noContactChangesToIndex;
- (void)willResumeIndexingAfterOffset:(long long)a0;
- (void)failedToFetchContactForChange:(id)a0;
- (void)willResumeReindexingAsNotFinished;
- (void)willReindexItemsWithIdentifiers:(id)a0;
- (void)willReindexAsFailedToFetchClientState;
- (void)reindexingAllSearchableItems:(id /* block */)a0;
- (void)willStartIndexingWithClientState:(id)a0;
- (void)willReindexAsChangeHistoryIsTruncated:(id)a0;
- (void)reindexingSearchableItemsWithIdentifiers:(id /* block */)a0;
- (void)willClearChangeHistory:(id)a0 toChangeAnchor:(id)a1;
- (void)deferringReindexAsFailedToPrepareForReindexing;
- (void)willReindexAsIndexVersionChangedFrom:(long long)a0 to:(long long)a1;
- (void)willReindexAsFailedToRegisterForChangeHistory:(id)a0 error:(id)a1;
- (void)finishedIndexingForFullSyncWithCount:(unsigned long long)a0;
- (void)willReindexAsFailedToFetchChangeHistory:(id)a0 error:(id)a1;
- (void)willReindexAsSnapshotAnchorChangedFrom:(id)a0 to:(id)a1;
- (void)didNotFinishIndexingForFullSyncWithError:(id)a0;
- (void)failedToCreateSearchableItemForContactIdentifier:(id)a0;
- (void)didNotFinishIndexingForDeltaSyncWithError:(id)a0;
- (void)failedToEndIndexBatchWithSpotlight:(id)a0 willRetry:(BOOL)a1;
- (void)finishedIndexingForDeltaSyncWithUpdateCount:(unsigned long long)a0 deleteCount:(unsigned long long)a1;
- (void)finishedBatchIndexWithUpdateIdentifiers:(id)a0 deleteIdentifiers:(id)a1;
- (void)willBatchIndexForFullSyncWithCount:(unsigned long long)a0 lastOffset:(long long)a1 doneFullSync:(BOOL)a2;
- (void)willBatchIndexForDeltaSyncWithUpdateCount:(unsigned long long)a0 deleteCount:(unsigned long long)a1;
- (void)failedToClearChangeHistory:(id)a0 toChangeAnchor:(id)a1 error:(id)a2;
- (void)failedToFetchSearchableForContactIdentifiers:(id)a0 error:(id)a1;
- (void)failedToBeginIndexBatchWithSpotlight:(id)a0;
- (void)failedToFetchClientStateFromSpotlight:(id)a0 willRetry:(BOOL)a1;
- (void)failedToJournalSearchableItemsForIndexingWithSpotlight:(id)a0 identifiers:(id)a1 willRetry:(BOOL)a2;
- (void)failedToJournalItemIdentifiersForDeletionWithSpotlight:(id)a0 identifiers:(id)a1 willRetry:(BOOL)a2;
- (void)failedToDeleteAllSearchableItemsWithSpotlight:(id)a0 willRetry:(BOOL)a1;

@end
