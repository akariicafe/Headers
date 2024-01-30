@class NSURL;

@interface BRSharingCopyShareTokenOperation : BRShareOperation {
    NSURL *_fileURL;
}

@property (copy) id /* block */ shareTokenCompletionBlock;
@property (copy) id /* block */ shareAndBaseTokenCompletionBlock;

- (id)initWithURL:(id)a0;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (void).cxx_destruct;

@end
