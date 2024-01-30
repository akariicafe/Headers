@interface SXQuoteComponentClassification : SXDefaultTextComponentClassification

+ (id)typeString;
+ (id)roleString;
+ (int)role;

- (id)layoutRules;
- (id)accessibilityContextualLabel;
- (BOOL)hasAffiliationWithClassification:(id)a0 forDirection:(long long)a1;

@end
