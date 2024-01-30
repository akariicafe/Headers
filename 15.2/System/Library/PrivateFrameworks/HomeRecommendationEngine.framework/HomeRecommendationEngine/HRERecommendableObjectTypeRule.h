@class NSString;

@interface HRERecommendableObjectTypeRule : HRERecommendableObjectRule

@property (readonly, nonatomic) NSString *requiredType;

+ (id)ruleWithRequiredType:(id)a0;

- (void).cxx_destruct;
- (BOOL)passesWithHomeObjects:(id)a0;
- (id)initWithRequiredType:(id)a0;
- (BOOL)passesWithObject:(id)a0;

@end
