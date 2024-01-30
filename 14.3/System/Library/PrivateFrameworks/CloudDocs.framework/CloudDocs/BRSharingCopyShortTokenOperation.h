@class NSURL;

@interface BRSharingCopyShortTokenOperation : BROperation {
    NSURL *_fileURL;
}

@property (copy) id /* block */ shortTokenCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (id)initWithURL:(id)a0;

@end
