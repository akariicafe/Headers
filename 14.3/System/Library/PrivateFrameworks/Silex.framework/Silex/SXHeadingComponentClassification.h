@interface SXHeadingComponentClassification : SXDefaultTextComponentClassification

+ (int)role;
+ (id)typeString;
+ (id)roleString;

- (BOOL)hasAffiliationWithClassification:(id)a0 forDirection:(long long)a1;
- (id)accessibilityContextualLabel;
- (id)textRules;
- (id)accessibilityCustomRotorMembership;
- (id)layoutRules;
- (id)defaultComponentStyleIdentifiers;
- (id)defaultTextStyleIdentifiers;
- (BOOL)accessibilitySkippedDuringReadAll;

@end
