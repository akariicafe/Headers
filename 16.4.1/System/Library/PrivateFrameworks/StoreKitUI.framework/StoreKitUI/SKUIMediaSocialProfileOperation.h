@class NSLock;

@interface SKUIMediaSocialProfileOperation : SSVComplexOperation {
    NSLock *_lock;
    id /* block */ _outputBlock;
}

@property (copy) id /* block */ outputBlock;

- (void)main;
- (id)init;
- (void).cxx_destruct;
- (id)_profileWithResponseDictionary:(id)a0;
- (id)initWithClientContext:(id)a0;

@end
