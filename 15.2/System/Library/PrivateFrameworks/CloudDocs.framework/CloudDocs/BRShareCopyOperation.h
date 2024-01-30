@interface BRShareCopyOperation : BRShareOperation

@property (copy) id /* block */ shareCopyCompletionBlock;
@property (copy) id /* block */ rootShareCopyCompletionBlock;

- (id)initWithURL:(id)a0;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (void).cxx_destruct;

@end
