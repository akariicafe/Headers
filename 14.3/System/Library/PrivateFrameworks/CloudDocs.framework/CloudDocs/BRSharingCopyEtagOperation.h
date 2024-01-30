@class NSURL;

@interface BRSharingCopyEtagOperation : BROperation {
    NSURL *_fileURL;
}

@property (copy) id /* block */ sharingEtagCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (id)initWithURL:(id)a0;

@end
