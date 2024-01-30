@class NSArray, SKUIClientContext, NSLock;

@interface SKUIMediaSocialSuggestedHandlesOperation : SSVComplexOperation {
    SKUIClientContext *_clientContext;
    NSLock *_lock;
    id /* block */ _outputBlock;
    NSArray *_words;
}

@property (copy) id /* block */ outputBlock;
@property (copy) NSArray *words;

- (void).cxx_destruct;
- (id)initWithClientContext:(id)a0;
- (void)main;

@end
