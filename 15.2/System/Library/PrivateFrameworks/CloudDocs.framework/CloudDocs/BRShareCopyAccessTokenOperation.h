@class NSURL;

@interface BRShareCopyAccessTokenOperation : BROperation

@property (retain, nonatomic) NSURL *url;
@property (copy) id /* block */ shareCopyAccessTokenCompletionBlock;

- (id)initWithURL:(id)a0;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (void).cxx_destruct;

@end
