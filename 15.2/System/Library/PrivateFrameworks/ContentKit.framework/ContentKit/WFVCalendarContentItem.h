@interface WFVCalendarContentItem : WFGenericFileContentItem <WFContentItemClass>

+ (id)typeDescription;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (id)stringConversionBehavior;

- (id)generateObjectRepresentationsForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (BOOL)canGenerateRepresentationForType:(id)a0;

@end
