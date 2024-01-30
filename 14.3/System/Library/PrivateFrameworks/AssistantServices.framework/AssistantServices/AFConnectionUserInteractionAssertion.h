@class AFSafetyBlock;

@interface AFConnectionUserInteractionAssertion : NSObject {
    AFSafetyBlock *_safetyBlock;
}

- (void).cxx_destruct;
- (void)releaseAssertion;
- (id)initWithCompletion:(id /* block */)a0;

@end
