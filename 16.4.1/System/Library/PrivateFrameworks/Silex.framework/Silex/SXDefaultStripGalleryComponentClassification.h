@interface SXDefaultStripGalleryComponentClassification : SXComponentClassification

+ (id)typeString;
+ (id)roleString;
+ (int)role;

- (id)layoutRules;
- (Class)componentModelClass;
- (id)accessibilityContextualLabel;
- (BOOL)hasAffiliationWithClassification:(id)a0 forDirection:(long long)a1;

@end
