@class NSURL;

@interface BRShareCopyOperation : BROperation

@property (retain, nonatomic) NSURL *url;
@property (copy) id /* block */ shareCopyCompletionBlock;
@property (copy) id /* block */ rootShareCopyCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (id)initWithURL:(id)a0;

@end
