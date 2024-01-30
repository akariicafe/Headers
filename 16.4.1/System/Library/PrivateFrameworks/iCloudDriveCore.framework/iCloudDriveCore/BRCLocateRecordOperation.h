@class NSString, CKRecordID, BRCServerZone, NSMutableArray;

@interface BRCLocateRecordOperation : _BRCOperation <BRCOperationSubclass> {
    unsigned long long _recordsFetched;
    unsigned long long _recordsFetchedTotalMetadataSize;
    unsigned long long _xattrsFetchedTotalSize;
    CKRecordID *_structureRecordID;
    BRCServerZone *_serverZone;
    BOOL _exists;
    NSMutableArray *_locateRecordCompletionBlocks;
}

@property (readonly, nonatomic) CKRecordID *recordID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)createActivity;
- (BOOL)shouldRetryForError:(id)a0;
- (void).cxx_destruct;
- (void)addLocateRecordCompletionBlock:(id /* block */)a0;
- (void)_performAfterLocatingRecord:(id /* block */)a0;
- (void)cancelToBeReplacedByOperation:(id)a0;
- (id)initWithRecordID:(id)a0 serverZone:(id)a1 isUserWaiting:(BOOL)a2;

@end
