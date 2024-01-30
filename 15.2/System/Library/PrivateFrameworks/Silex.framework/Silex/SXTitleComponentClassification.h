@interface SXTitleComponentClassification : SXDefaultTextComponentClassification

+ (int)role;
+ (id)typeString;
+ (id)roleString;

- (BOOL)hasAffiliationWithClassification:(id)a0 forDirection:(long long)a1;
- (id)accessibilityContextualLabel;
- (id)textRules;
- (id)layoutRules;
- (id)accessibilityCustomRotorMembership;
- (BOOL)accessibilitySkippedDuringReadAll;

@end
