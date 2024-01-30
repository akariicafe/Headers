@interface WFHKSampleContentItem : WFContentItem <WFContentItemClass>

+ (id)typeDescription;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)filterDescription;
+ (id)pluralFilterDescription;
+ (id)countDescription;
+ (id)stringConversionBehavior;
+ (void)runQuery:(id)a0 withItems:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)hasLibrary;
+ (id)itemWithQuantitySample:(id)a0;
+ (id)itemWithQuantitySample:(id)a0 unit:(id)a1;
+ (id)itemWithQuantitySamples:(id)a0;
+ (id)itemWithQuantitySamples:(id)a0 unit:(id)a1;

- (id)unit;
- (id)endDate;
- (id)startDate;
- (id)sourceName;
- (id)quantitySample;
- (id)duration;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)defaultSourceForRepresentation:(id)a0;
- (BOOL)getListAltText:(id /* block */)a0;
- (id)quantitySampleContainer;
- (id)readableTypeIdentifier;
- (id)sampleValue;
- (id)localizedCategorySampleValue;
- (id)categorySample;

@end
