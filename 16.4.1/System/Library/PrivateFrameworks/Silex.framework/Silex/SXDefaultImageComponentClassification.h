@interface SXDefaultImageComponentClassification : SXComponentClassification

+ (id)typeString;
+ (id)roleString;
+ (int)role;

- (Class)componentModelClass;
- (BOOL)hasAffiliationWithClassification:(id)a0 forDirection:(long long)a1;

@end
