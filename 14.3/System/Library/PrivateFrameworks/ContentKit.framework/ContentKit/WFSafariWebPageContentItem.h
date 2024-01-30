@class WFSafariWebPage;

@interface WFSafariWebPageContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFSafariWebPage *webPage;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (BOOL)canLowercaseTypeDescription;
+ (id)ownedPasteboardTypes;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)defaultSourceForRepresentation:(id)a0;

- (id)generateFileRepresentationForType:(id)a0 options:(id)a1 error:(id *)a2;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (void)getSerializedItem:(id /* block */)a0;

@end
