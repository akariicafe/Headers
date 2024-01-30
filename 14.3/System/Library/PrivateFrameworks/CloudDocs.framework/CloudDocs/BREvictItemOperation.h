@class NSURL;

@interface BREvictItemOperation : BROperation {
    unsigned long long _section;
    NSURL *_url;
}

@property (copy) id /* block */ evictionCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (id)initWithURL:(id)a0;
- (id)description;

@end
