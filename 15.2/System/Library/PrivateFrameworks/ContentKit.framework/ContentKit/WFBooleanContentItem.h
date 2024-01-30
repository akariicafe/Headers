@interface WFBooleanContentItem : WFNumberContentItem <WFContentItemClass>

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;

- (id)allowedClassesForDecodingInternalRepresentations;

@end
