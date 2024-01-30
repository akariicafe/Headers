@interface SXTitleComponentClassification : SXDefaultTextComponentClassification

+ (id)typeString;
+ (id)roleString;
+ (int)role;

- (id)textRules;
- (id)layoutRules;
- (id)accessibilityCustomRotorMembership;
- (id)accessibilityContextualLabel;
- (BOOL)hasAffiliationWithClassification:(id)a0 forDirection:(long long)a1;
- (BOOL)accessibilitySkippedDuringReadAll;

@end
