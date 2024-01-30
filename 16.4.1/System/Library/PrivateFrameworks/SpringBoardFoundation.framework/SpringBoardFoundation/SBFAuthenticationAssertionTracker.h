@class NSString, NSHashTable;

@interface SBFAuthenticationAssertionTracker : NSObject <BSDescriptionProviding> {
    struct __MKBAssertion { } *_mkbAssertion;
    NSHashTable *_assertions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isAssertionValid:(id)a0;
- (void)removeAssertion:(id)a0;
- (void)dealloc;
- (id)mkbAssertionOptions;
- (id)succinctDescription;
- (id)init;
- (void)addAssertion:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasActiveAssertions;

@end
