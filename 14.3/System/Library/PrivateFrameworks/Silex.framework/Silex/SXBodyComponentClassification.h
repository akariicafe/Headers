@interface SXBodyComponentClassification : SXDefaultTextComponentClassification

+ (int)role;
+ (id)typeString;
+ (id)roleString;

- (BOOL)hasAffiliationWithClassification:(id)a0 forDirection:(long long)a1;
- (id)textRules;
- (id)layoutRules;
- (BOOL)accessibilitySkippedDuringReadAll;

@end
