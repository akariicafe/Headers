@class NSSet, NSString;

@interface _SBUIBiometricOperationAssertion : BSSimpleAssertion <BSDescriptionProviding>

@property (copy, nonatomic) NSSet *operations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithIdentifier:(id)a0 forReason:(id)a1 queue:(id)a2 invalidationBlock:(id /* block */)a3;

@end
