@class AFSafetyBlock;

@interface AFConnectionUserInteractionAssertion : NSObject {
    AFSafetyBlock *_safetyBlock;
}

- (void)releaseAssertion;
- (void).cxx_destruct;
- (id)initWithCompletion:(id /* block */)a0;

@end
