@class NSURL;

@interface BRShareCleanSubitems : BROperation {
    NSURL *_url;
}

@property (copy) id /* block */ cleanSubitemsCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (id)initWithURL:(id)a0;

@end
