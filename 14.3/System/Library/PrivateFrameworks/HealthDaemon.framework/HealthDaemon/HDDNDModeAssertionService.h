@interface HDDNDModeAssertionService : NSObject <HDDNDModeAssertionService>

- (void)requestQuietModeOverrideAssertion;
- (void)invalidateAssertion;

@end
