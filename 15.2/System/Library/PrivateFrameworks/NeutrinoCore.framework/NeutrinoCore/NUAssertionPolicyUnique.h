@class NSMutableSet;

@interface NUAssertionPolicyUnique : NUAssertionPolicyComposite {
    NSMutableSet *_signatures;
}

- (void).cxx_destruct;
- (id)init;
- (void)notifyAssertion:(id)a0;

@end
