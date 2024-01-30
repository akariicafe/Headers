@class NSString, NSHashTable;

@interface SBFAuthenticationAssertionTracker : NSObject <BSDescriptionProviding> {
    struct __MKBAssertion { } *_mkbAssertion;
    NSHashTable *_assertions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasActiveAssertions;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)addAssertion:(id)a0;
- (void)removeAssertion:(id)a0;
- (id)mkbAssertionOptions;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isAssertionValid:(id)a0;
- (void)dealloc;

@end
