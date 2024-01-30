@class NSString, CKShareMetadata;

@interface BRCAcceptShareOperation : _BRCOperation <BRCOperationSubclass> {
    CKShareMetadata *_shareMetadata;
}

@property (copy, nonatomic) id /* block */ acceptShareCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (BOOL)shouldRetryForError:(id)a0;
- (id)initWithShareMetadata:(id)a0 syncContext:(id)a1;

@end
