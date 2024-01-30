@class NSURL;

@interface BRSharePrepFolderForSharing : BROperation {
    NSURL *_url;
}

@property (copy) id /* block */ prepFolderSharingCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (id)initWithURL:(id)a0;

@end
