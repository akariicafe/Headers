@class NSString, CKServerChangeToken;

@interface BRCSideCarSyncDownOperation : _BRCOperation <BRCOperationSubclass> {
    CKServerChangeToken *_serverChangeToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (BOOL)shouldRetryForError:(id)a0;
- (id)createActivity;
- (void)_createZone;
- (void)_createSyncDownOperation;
- (void)_saveChangedRecords:(id)a0 deletedRecords:(id)a1 serverChangeToken:(id)a2 clientChangeToken:(id)a3;
- (id)initWithSession:(id)a0 changeToken:(id)a1;

@end
