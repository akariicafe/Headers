@class NSMutableSet;

@interface NUAssertionPolicyUnique : NUAssertionPolicyComposite {
    NSMutableSet *_signatures;
}

- (id)init;
- (void).cxx_destruct;
- (void)notifyAssertion:(id)a0;

@end
