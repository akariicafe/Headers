@class NSURL;

@interface WFURLContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) NSURL *URL;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (id)ownedPasteboardTypes;
+ (id)itemWithSerializedItem:(id)a0 forType:(id)a1 named:(id)a2 attributionSet:(id)a3;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)filterRepresentationsForAllowedContent:(id)a0;
+ (id)attributionSetContentOfURL:(id)a0;
+ (void)rediscoverURLCoercionClassesIfNeeded;
+ (id)URLCoercions;
+ (id)mutableURLCoercions;
+ (void)registerURLCoercion:(Class)a0;

- (id)description;
- (id)outputTypes;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (void)getPreferredFileExtension:(id /* block */)a0;
- (void)getPreferredFileSize:(id /* block */)a0;
- (id)additionalRepresentationsForSerialization;
- (BOOL)includesFileRepresentationInSerializedItem;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)intermediaryTypesForCoercionToItemClass:(Class)a0;
- (void)getHeadersWithCompletionHandler:(id /* block */)a0;
- (void)getContentsOfURLWithHandler:(id /* block */)a0;
- (void)getContentsWithRequest:(id)a0 expectedByteCountHandler:(id /* block */)a1 writtenByteCountHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)getContentsWithRequest:(id)a0 cacheResult:(BOOL)a1 expectedByteCountHandler:(id /* block */)a2 writtenByteCountHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)getTitle:(id /* block */)a0;
- (void)generateObjectRepresentationForPrintHandler:(id /* block */)a0;

@end
