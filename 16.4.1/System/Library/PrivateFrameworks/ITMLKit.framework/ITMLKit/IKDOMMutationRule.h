@interface IKDOMMutationRule : IKDOMConditional

@property (readonly, nonatomic, getter=isMutable) BOOL mutable;

+ (id)_applyGeneralizationOnDOMElement:(id)a0 withDOMElement:(id)a1;
+ (id)_applySpecializationOnDOMElement:(id)a0 withDOMElement:(id)a1;
+ (id)mutationRuleWithDOMElement:(id)a0 mutable:(BOOL)a1;

- (long long)compare:(id)a0;
- (void)applyOnDOMElement:(id)a0;
- (id)initWithDOMElement:(id)a0 mutable:(BOOL)a1;

@end
