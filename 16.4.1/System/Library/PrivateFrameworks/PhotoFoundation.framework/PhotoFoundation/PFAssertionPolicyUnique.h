@class NSMutableSet;

@interface PFAssertionPolicyUnique : PFAssertionPolicyComposite {
    NSMutableSet *_signatures;
}

- (id)init;
- (void).cxx_destruct;
- (void)notifyAssertion:(id)a0;

@end
