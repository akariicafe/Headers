@interface SXDefaultBannerAdComponentClassification : SXComponentClassification

+ (int)role;
+ (id)typeString;
+ (id)roleString;

- (BOOL)isCollapsible;
- (Class)componentModelClass;
- (id)layoutRules;

@end
