@interface SXDefaultAudioComponentClassification : SXComponentClassification

+ (int)role;
+ (id)typeString;
+ (id)roleString;

- (BOOL)hasAffiliationWithClassification:(id)a0 forDirection:(long long)a1;
- (Class)componentModelClass;
- (id)layoutRules;

@end
