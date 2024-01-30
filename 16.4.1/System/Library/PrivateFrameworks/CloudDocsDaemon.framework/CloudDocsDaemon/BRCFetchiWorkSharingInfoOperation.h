@class NSString, CKRecordID;

@interface BRCFetchiWorkSharingInfoOperation : _BRCOperation <BRCOperationSubclass>

@property (retain, nonatomic) CKRecordID *recordID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)main;
- (id)createActivity;
- (BOOL)shouldRetryForError:(id)a0;
- (void).cxx_destruct;
- (id)initWithDocumentItem:(id)a0;

@end
