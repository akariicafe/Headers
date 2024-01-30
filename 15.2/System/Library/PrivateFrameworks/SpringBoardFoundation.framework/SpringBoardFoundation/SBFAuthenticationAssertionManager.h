@class NSString, SBFAuthenticationAssertionTracker;

@interface SBFAuthenticationAssertionManager : NSObject <BSDescriptionProviding> {
    SBFAuthenticationAssertionTracker *_preventLockTracker;
    SBFAuthenticationAssertionTracker *_transientTracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasActiveAssertions;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)addAssertion:(id)a0;
- (void)removeAssertion:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isAssertionValid:(id)a0;

@end
