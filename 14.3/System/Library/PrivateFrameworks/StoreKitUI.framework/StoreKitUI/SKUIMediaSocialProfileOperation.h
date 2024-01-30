@class NSLock;

@interface SKUIMediaSocialProfileOperation : SSVComplexOperation {
    NSLock *_lock;
    id /* block */ _outputBlock;
}

@property (copy) id /* block */ outputBlock;

- (id)init;
- (void).cxx_destruct;
- (id)initWithClientContext:(id)a0;
- (void)main;
- (id)_profileWithResponseDictionary:(id)a0;

@end
