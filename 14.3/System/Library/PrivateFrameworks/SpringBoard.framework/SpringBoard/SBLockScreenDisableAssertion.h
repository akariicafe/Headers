@class NSString, SBFAuthenticationAssertion;

@interface SBLockScreenDisableAssertion : SBUILockScreenDisableAssertion {
    NSString *_identifier;
    SBFAuthenticationAssertion *_disableLockAssertion;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (id)description;
- (void)invalidate;

@end
