@class SBSLockScreenContentAssertion;

@interface SBSSecureAppAssertion : SBSLockScreenContentAssertion

@property (retain, nonatomic) SBSLockScreenContentAssertion *actualAssertion;

+ (id)acquireSecureAppAssertionWithType:(unsigned long long)a0 errorHandler:(id /* block */)a1;
+ (id)acquireSecureAppAssertionWithType:(unsigned long long)a0 supportedOrientations:(unsigned long long)a1 errorHandler:(id /* block */)a2;

- (BOOL)_supportsReacquisition;
- (void).cxx_destruct;

@end
