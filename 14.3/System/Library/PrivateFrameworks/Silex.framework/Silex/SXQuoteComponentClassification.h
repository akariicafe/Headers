@interface SXQuoteComponentClassification : SXDefaultTextComponentClassification

+ (int)role;
+ (id)typeString;
+ (id)roleString;

- (BOOL)hasAffiliationWithClassification:(id)a0 forDirection:(long long)a1;
- (id)accessibilityContextualLabel;
- (id)layoutRules;

@end
