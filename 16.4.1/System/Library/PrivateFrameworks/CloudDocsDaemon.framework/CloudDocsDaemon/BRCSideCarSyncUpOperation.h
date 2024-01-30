@class NSString, BRCAccountSession;

@interface BRCSideCarSyncUpOperation : _BRCOperation <BRCOperationSubclass> {
    BRCAccountSession *_session;
    BOOL _shouldPerformAnotherBatch;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)main;
- (id)createActivity;
- (BOOL)shouldRetryForError:(id)a0;
- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (id)_itemsNeedingSyncUpEnumerator;
- (void)_markItemsFailedSync;
- (void)_syncUpRecordBatchWithModifiedRecords:(id)a0 deletedRecordIDs:(id)a1 recordIDToZoneMap:(id)a2 requestID:(unsigned long long)a3;
- (void)fakeSyncForItem:(id)a0 itemRank:(unsigned long long)a1;
- (BOOL)shouldPerformAnotherBatch;

@end
