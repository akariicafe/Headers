@interface SXBodyComponentClassification : SXDefaultTextComponentClassification

+ (id)typeString;
+ (id)roleString;
+ (int)role;

- (id)textRules;
- (id)layoutRules;
- (BOOL)hasAffiliationWithClassification:(id)a0 forDirection:(long long)a1;
- (BOOL)accessibilitySkippedDuringReadAll;

@end
