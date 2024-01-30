@interface SXAdvertisementComponentClassification : SXComponentClassification

+ (id)typeString;
+ (id)roleString;
+ (int)role;

- (id)layoutRules;
- (Class)componentModelClass;
- (BOOL)isCollapsible;

@end
