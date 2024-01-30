@class WFFileType, PHAsset;

@interface WFPhotoMediaContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (retain, nonatomic) WFFileType *preferredFileType;
@property (nonatomic) long long library;
@property (readonly, nonatomic) PHAsset *asset;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)ownedPasteboardTypes;
+ (id)itemWithSerializedItem:(id)a0 forType:(id)a1 named:(id)a2 attributionSet:(id)a3;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)filterDescription;
+ (id)pluralFilterDescription;
+ (id)defaultSourceForRepresentation:(id)a0;
+ (void)runQuery:(id)a0 withItems:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)hasLibrary;
+ (id)itemWithAssetIdentifier:(id)a0;
+ (id)itemWithAssetIdentifier:(id)a0 assetFile:(id)a1;
+ (id)itemWithAssetIdentifier:(id)a0 library:(long long)a1;
+ (id)itemWithAssetIdentifier:(id)a0 library:(long long)a1 assetFile:(id)a2;
+ (id)itemWithAssetIdentifier:(id)a0 library:(long long)a1 assetFile:(id)a2 nameIfKnown:(id)a3;
+ (id)itemWithAssetIdentifier:(id)a0 library:(long long)a1 assetFile:(id)a2 nameIfKnown:(id)a3 attributionSet:(id)a4;
+ (id)itemsWithBurstIdentifier:(id)a0;
+ (id)fetchOptionsForLibrary:(long long)a0;
+ (id)photoAlbums;
+ (id)remoteItemWithAssetIdentifier:(id)a0 named:(id)a1;
+ (BOOL)isAvailableOnPlatform:(long long)a0;

- (id)width;
- (id)make;
- (id)mediaType;
- (id)model;
- (id)isFavorite;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })size;
- (unsigned long long)hash;
- (id)isBurst;
- (id)orientation;
- (id)height;
- (id)duration;
- (BOOL)isEqual:(id)a0;
- (BOOL)isScreenshot;
- (id)isLivePhoto;
- (id)imageManager;
- (id)isHidden;
- (id)outputTypes;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)generateObjectRepresentation:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (void)getPreferredFileExtension:(id /* block */)a0;
- (void)getPreferredFileSize:(id /* block */)a0;
- (id)additionalRepresentationsForSerialization;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)copyWithName:(id)a0 zone:(struct _NSZone { } *)a1;
- (id)assetResourceManager;
- (void)getMetadata:(id /* block */)a0;
- (void)getFrameRate:(id /* block */)a0;
- (id)metadataIfLocallyAvailable;
- (BOOL)isPhotoType:(id)a0;
- (id)photoTypes;
- (void)getThumbnail:(id /* block */)a0 ofSize:(struct CGSize { double x0; double x1; })a1;
- (void)retrieveAssetResource:(id)a0 withNetworkAccess:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)retrieveFileWithImageManager:(id /* block */)a0 forType:(id)a1;
- (id)preferredAssetResourceForType:(id)a0;
- (void)generateAVAsset:(id /* block */)a0 networkAccessAllowed:(BOOL)a1;
- (id)fullSizeAssetResourcesInResources:(id)a0;
- (id)assetRepresentationTypes;
- (id)intermediaryTypesForCoercionToItemClass:(Class)a0;

@end
