@interface SXAdvertisementComponentClassification : SXComponentClassification

+ (int)role;
+ (id)typeString;
+ (id)roleString;

- (BOOL)isCollapsible;
- (id)layoutRules;
- (Class)componentModelClass;

@end
