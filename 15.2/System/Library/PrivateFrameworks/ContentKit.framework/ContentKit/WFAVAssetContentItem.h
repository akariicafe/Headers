@class AVAsset;

@interface WFAVAssetContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (readonly, nonatomic) AVAsset *asset;

+ (id)typeDescription;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (id)stringConversionBehavior;
+ (id)itemWithRepresentation:(id)a0 forType:(id)a1 attributionSet:(id)a2 cachingIdentifier:(id)a3;

- (id)supportedTypes;
- (id)duration;
- (id)frameRate;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)generateObjectRepresentation:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (void)getPreferredFileSize:(id /* block */)a0;
- (id)preferredFileType;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListAltText:(id /* block */)a0;
- (id)generateExportSessionForType:(id)a0;
- (id)metadataItemForCommonKey:(id)a0;
- (void)generateFileRepresentation:(id /* block */)a0 forType:(id)a1 metadata:(id)a2 options:(id)a3;

@end
