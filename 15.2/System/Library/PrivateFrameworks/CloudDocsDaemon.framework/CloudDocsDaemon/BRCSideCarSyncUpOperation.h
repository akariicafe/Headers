@class NSString, BRCAccountSession;

@interface BRCSideCarSyncUpOperation : _BRCOperation <BRCOperationSubclass> {
    BRCAccountSession *_session;
    BOOL _shouldPerformAnotherBatch;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSession:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (BOOL)shouldRetryForError:(id)a0;
- (BOOL)shouldPerformAnotherBatch;
- (id)createActivity;
- (void)_markItemsFailedSync;
- (void)_syncUpRecordBatchWithModifiedRecords:(id)a0 deletedRecordIDs:(id)a1 recordIDToZoneMap:(id)a2 requestID:(unsigned long long)a3;
- (id)_itemsNeedingSyncUpEnumerator;
- (void)fakeSyncForItem:(id)a0 itemRank:(unsigned long long)a1;

@end
