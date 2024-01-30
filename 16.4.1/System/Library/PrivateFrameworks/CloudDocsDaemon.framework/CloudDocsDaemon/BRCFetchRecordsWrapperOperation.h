@class NSString, BRCServerZone, CKFetchRecordsOperation;

@interface BRCFetchRecordsWrapperOperation : _BRCOperation <BRCOperationSubclass> {
    BRCServerZone *_serverZone;
    CKFetchRecordsOperation *_FetchRecordsOperation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)main;
- (id)createActivity;
- (BOOL)shouldRetryForError:(id)a0;
- (void).cxx_destruct;
- (id)initWithCKFetchRecordsOperation:(id)a0 group:(id)a1 serverZone:(id)a2 isUserWaiting:(BOOL)a3;

@end
