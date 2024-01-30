@class AFSafetyBlock;

@interface AFConnectionUserInteractionAssertion : NSObject {
    AFSafetyBlock *_safetyBlock;
}

- (id)initWithCompletion:(id /* block */)a0;
- (void)releaseAssertion;
- (void).cxx_destruct;

@end
