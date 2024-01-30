@class NSMutableSet;

@interface PFAssertionPolicyUnique : PFAssertionPolicyComposite {
    NSMutableSet *_signatures;
}

- (void).cxx_destruct;
- (id)init;
- (void)notifyAssertion:(id)a0;

@end
