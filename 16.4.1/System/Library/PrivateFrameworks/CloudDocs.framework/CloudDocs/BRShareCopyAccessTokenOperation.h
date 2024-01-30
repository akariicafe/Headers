@interface BRShareCopyAccessTokenOperation : BRShareOperation

@property (copy) id /* block */ shareCopyAccessTokenCompletionBlock;

- (id)initWithURL:(id)a0;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
