@class CKRecordID;

@interface BRShareCopyDocumentURLForRecordID : BROperation {
    CKRecordID *_recordID;
    BOOL _withServerLookup;
}

@property (copy) id /* block */ copyDocumentURLCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (id)initWithRecordID:(id)a0 withServerLookup:(BOOL)a1;

@end
