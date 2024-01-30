@interface SXDefaultMosaicGalleryComponentClassification : SXComponentClassification

+ (int)role;
+ (id)typeString;
+ (id)roleString;

- (BOOL)hasAffiliationWithClassification:(id)a0 forDirection:(long long)a1;
- (id)accessibilityContextualLabel;
- (Class)componentModelClass;
- (id)layoutRules;

@end
