@class NSURL;

@interface BREvictItemOperation : BROperation {
    unsigned long long _section;
    NSURL *_url;
}

@property (copy) id /* block */ evictionCompletionBlock;

- (id)initWithURL:(id)a0;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)description;
- (void)main;
- (void).cxx_destruct;

@end
