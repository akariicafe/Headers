@class NSURL;

@interface BRSharingModifyRecordAccessOperation : BRShareOperation {
    NSURL *_fileURL;
    BOOL _allowAccess;
}

@property (copy) id /* block */ allowAccessCompletionBlock;
@property (copy) id /* block */ accessAllowedCompletionBlock;

- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 allowAccess:(BOOL)a1;

@end
