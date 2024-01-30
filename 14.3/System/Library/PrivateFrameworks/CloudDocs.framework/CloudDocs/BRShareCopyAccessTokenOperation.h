@class NSURL;

@interface BRShareCopyAccessTokenOperation : BROperation

@property (retain, nonatomic) NSURL *url;
@property (copy) id /* block */ shareCopyAccessTokenCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (id)initWithURL:(id)a0;

@end
