@class NSString, SBFAuthenticationAssertion;

@interface SBLockScreenDisableAssertion : SBUILockScreenDisableAssertion {
    NSString *_identifier;
    SBFAuthenticationAssertion *_disableLockAssertion;
}

+ (void)initialize;

- (id)initWithIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;

@end
