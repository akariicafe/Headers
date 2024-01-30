@class NSString, BRCServerZone;

@interface BRCSyncDownOperation : _BRCOperation <BRCOperationSubclass> {
    BRCServerZone *_serverZone;
    unsigned long long _editedAndDeletedRecordsCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (BOOL)shouldRetryForError:(id)a0;
- (id)createActivity;
- (id)initWithServerZone:(id)a0;
- (BOOL)handleZoneNotFoundIfSyncingDownForTheFirstTime:(id)a0;
- (void)_performAfterFetchingRecordChanges:(id /* block */)a0;
- (void)_startSyncDown;
- (void)_startCreateZoneAndSubscriptionAndSyncDown;

@end
