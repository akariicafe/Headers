@class NSSet;

@interface HRERecommendableObjectTypeListRule : HRERecommendableObjectRule

@property (readonly, nonatomic) NSSet *typesSatisfyingRequirement;

+ (id)ruleRequiringOneOfTypes:(id)a0;

- (void).cxx_destruct;
- (BOOL)passesWithHomeObjects:(id)a0;
- (id)initWithRequiredTypeGroup:(id)a0;

@end
