@class WFFileType, NSString, NSItemProvider;

@interface WFNSItemProviderContentItem : WFContentItem <WFContentItemClass>

@property (retain, nonatomic) WFFileType *fileURLType;
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (copy, nonatomic) NSString *contentName;
@property (nonatomic) BOOL useNewLoadingAPI;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (id)itemProviderTypeIdentifierOverridesWithFileURLType:(id)a0;
+ (id)itemProviderTypeIdentifierOverrides;

- (void).cxx_destruct;
- (id)name;
- (id)outputTypes;
- (void)generateObjectRepresentation:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (BOOL)cachesSupportedTypes;
- (void)generateFileRepresentationWithNewAPI:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (void)generateObjectRepresentationWithNewAPI:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)preloadImportantItemsWithCompletionHandler:(id /* block */)a0;

@end
