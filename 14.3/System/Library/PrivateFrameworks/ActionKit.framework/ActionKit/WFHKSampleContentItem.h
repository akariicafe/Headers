@interface WFHKSampleContentItem : WFContentItem <WFContentItemClass>

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)filterDescription;
+ (id)pluralFilterDescription;
+ (void)runQuery:(id)a0 withItems:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)hasLibrary;
+ (id)itemWithQuantitySample:(id)a0;
+ (id)itemWithQuantitySample:(id)a0 unit:(id)a1;
+ (id)itemWithQuantitySamples:(id)a0;
+ (id)itemWithQuantitySamples:(id)a0 unit:(id)a1;

- (id)quantitySample;
- (id)unit;
- (id)startDate;
- (id)duration;
- (id)sourceName;
- (id)endDate;
- (BOOL)getListAltText:(id /* block */)a0;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)quantitySampleContainer;
- (id)readableTypeIdentifier;
- (id)sampleValue;
- (id)localizedCategorySampleValue;
- (id)categorySample;

@end
