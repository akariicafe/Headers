@class NSString, SBFAuthenticationAssertionTracker;

@interface SBFAuthenticationAssertionManager : NSObject <BSDescriptionProviding> {
    SBFAuthenticationAssertionTracker *_preventLockTracker;
    SBFAuthenticationAssertionTracker *_transientTracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isAssertionValid:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void)removeAssertion:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)addAssertion:(id)a0;
- (BOOL)hasActiveAssertions;

@end
