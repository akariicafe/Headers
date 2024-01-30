@class NSDictionary;

@interface WFDictionaryContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (readonly, nonatomic) NSDictionary *dictionary;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (id)itemsWithPropertyListObject:(id)a0 preferredDictionaryType:(id)a1 attributionSet:(id)a2;
+ (id)itemsWithJSONFileRepresentation:(id)a0 attributionSet:(id)a1;
+ (id)itemsWithPlistFileRepresentation:(id)a0 attributionSet:(id)a1;
+ (id)itemsWithPropertyListObject:(id)a0 preferredDictionaryType:(id)a1 topLevelName:(id)a2 attributionSet:(id)a3;

- (id)generateFileRepresentationForType:(id)a0 options:(id)a1 error:(id *)a2;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (id)preferredFileType;
- (id)allowedClassesForDecodingInternalRepresentations;

@end
