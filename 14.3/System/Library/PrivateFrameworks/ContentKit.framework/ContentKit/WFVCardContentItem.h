@interface WFVCardContentItem : WFGenericFileContentItem <WFContentItemClass>

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;

- (id)generateObjectRepresentationsForClass:(Class)a0 options:(id)a1 error:(id *)a2;

@end
