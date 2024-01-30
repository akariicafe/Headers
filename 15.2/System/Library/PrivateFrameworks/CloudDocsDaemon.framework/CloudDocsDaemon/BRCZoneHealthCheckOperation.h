@class NSString, CKServerChangeToken, NSMutableDictionary, NSMutableArray;

@interface BRCZoneHealthCheckOperation : _BRCOperation <BRCOperationSubclass> {
    CKServerChangeToken *_changeToken;
    NSMutableDictionary *_recordsByID;
    NSMutableArray *_deletedRecordIds;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)main;
- (void).cxx_destruct;
- (BOOL)shouldRetryForError:(id)a0;
- (id)initWithSession:(id)a0 changeToken:(id)a1;
- (void)receivedUpdatedServerChangeToken:(id)a0 requestID:(unsigned long long)a1;
- (void)completedZoneHealthSyncDownWithRequestID:(unsigned long long)a0 error:(id)a1;

@end
