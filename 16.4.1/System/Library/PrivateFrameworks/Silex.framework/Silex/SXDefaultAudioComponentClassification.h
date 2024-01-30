@interface SXDefaultAudioComponentClassification : SXComponentClassification

+ (id)typeString;
+ (id)roleString;
+ (int)role;

- (id)layoutRules;
- (Class)componentModelClass;
- (BOOL)hasAffiliationWithClassification:(id)a0 forDirection:(long long)a1;

@end
