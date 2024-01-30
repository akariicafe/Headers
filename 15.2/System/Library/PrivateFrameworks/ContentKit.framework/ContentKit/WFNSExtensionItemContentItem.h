@class NSArray, NSExtensionItem;

@interface WFNSExtensionItemContentItem : WFContentItem <WFContentItemClass>

@property (retain, nonatomic) NSArray *extensionSubItems;
@property (readonly, nonatomic) NSExtensionItem *extensionItem;

+ (id)typeDescription;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (id)itemWithObject:(id)a0 sourceAppBundleIdentifier:(id)a1;

- (id)itemProviders;
- (void)preloadImportantItemsWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)name;
- (id)generateObjectRepresentationsForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (BOOL)cachesSupportedTypes;
- (void)coerceToItemClasses:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)itemProviderItems;
- (id)extensionItemName;
- (BOOL)itemProvidersSupportType:(id)a0;

@end
