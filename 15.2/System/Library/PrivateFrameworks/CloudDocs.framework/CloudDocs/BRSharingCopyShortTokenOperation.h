@class NSURL;

@interface BRSharingCopyShortTokenOperation : BROperation {
    NSURL *_fileURL;
}

@property (copy) id /* block */ shortTokenCompletionBlock;

- (id)initWithURL:(id)a0;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (void).cxx_destruct;

@end
