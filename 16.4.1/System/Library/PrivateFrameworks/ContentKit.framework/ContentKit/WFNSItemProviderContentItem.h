@class NSString, WFFileType, NSItemProvider, NSDictionary, WFObjectType;

@interface WFNSItemProviderContentItem : WFContentItem <WFContentItemClass>

@property (retain, nonatomic) WFFileType *fileURLType;
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (copy, nonatomic) NSString *contentName;
@property (nonatomic) BOOL useNewLoadingAPI;
@property (readonly, nonatomic) NSDictionary *metadataForSerialization;
@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) BOOL includesFileRepresentationInSerializedItem;
@property (readonly, nonatomic) BOOL hasStringOutput;
@property (readonly, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) WFObjectType *preferredObjectType;
@property (readonly, nonatomic) BOOL cachesSupportedTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)typeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)itemProviderTypeIdentifierOverrides;
+ (id)itemProviderTypeIdentifierOverridesWithFileURLType:(id)a0;

- (void).cxx_destruct;
- (id)name;
- (void)preloadImportantItemsWithCompletionHandler:(id /* block */)a0;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (void)generateObjectRepresentation:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (id)outputTypes;
- (void)generateFileRepresentationWithNewAPI:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (void)generateObjectRepresentationWithNewAPI:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;

@end
