@class SBSLockScreenContentAssertion;

@interface SBSSecureAppAssertion : SBSLockScreenContentAssertion

@property (retain, nonatomic) SBSLockScreenContentAssertion *actualAssertion;

+ (id)acquireSecureAppAssertionWithType:(unsigned long long)a0 supportedOrientations:(unsigned long long)a1 errorHandler:(id /* block */)a2;
+ (id)acquireSecureAppAssertionWithType:(unsigned long long)a0 errorHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (BOOL)_supportsReacquisition;

@end
