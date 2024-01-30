@class WFDataDetectorResults, NSString;

@interface WFStringContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (retain, nonatomic) WFDataDetectorResults *dataDetectorResults;
@property (readonly, nonatomic) NSString *string;

+ (id)typeDescription;
+ (id)itemWithSerializedItem:(id)a0 forType:(id)a1 named:(id)a2 attributionSet:(id)a3 cachingIdentifier:(id)a4;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;

- (void).cxx_destruct;
- (id)generateObjectRepresentationsForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (id)generateFileRepresentationForType:(id)a0 options:(id)a1 error:(id *)a2;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (BOOL)includesFileRepresentationInSerializedItem;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (BOOL)isContent;
- (id)generateObjectsForClass:(Class)a0 error:(id *)a1;

@end
