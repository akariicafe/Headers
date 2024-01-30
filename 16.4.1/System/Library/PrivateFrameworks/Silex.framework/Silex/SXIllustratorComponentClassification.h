@interface SXIllustratorComponentClassification : SXDefaultTextComponentClassification

+ (id)typeString;
+ (id)roleString;
+ (id)accessibilityContextualLabel;
+ (int)role;

- (id)textRules;
- (BOOL)hasAffiliationWithClassification:(id)a0 forDirection:(long long)a1;

@end
