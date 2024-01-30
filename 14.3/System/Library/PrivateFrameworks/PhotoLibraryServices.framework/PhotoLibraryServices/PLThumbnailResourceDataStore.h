@class NSArray, NSString, NSDictionary, PLPhotoLibraryPathManager, PLThumbnailManager, PLThumbnailIndexes;

@interface PLThumbnailResourceDataStore : PLResourceDataStore <PLResourceDataStore> {
    NSDictionary *_thumbnailFormatsByTableType;
}

@property (retain, nonatomic) PLThumbnailManager *thumbnailManager;
@property (retain, nonatomic) PLThumbnailIndexes *thumbnailIndexes;
@property (retain, nonatomic) NSArray *thumbnailFormats;
@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedRecipes;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)a0;
+ (BOOL)resourceIsSquare:(id)a0;
+ (unsigned int)storeClassID;

- (id)initWithPathManager:(id)a0;
- (BOOL)videoResource:(id)a0 matchesOrExceedsQualityLevel:(unsigned int)a1;
- (id)descriptionForSubtype:(long long)a0;
- (void).cxx_destruct;
- (struct CGImage { } *)newTableThumbImageForKey:(id)a0;
- (id)resourceURLForKey:(id)a0;
- (id)thumbnailFormatsByTableType;
- (id)virtualResourcesForAsset:(id)a0;
- (id)resourceDataForKey:(id)a0 assetID:(id)a1;
- (id)updateDerivativeResourcesForAsset:(id)a0 forLifecycleEvent:(unsigned int)a1;
- (id)keyFromKeyStruct:(const void *)a0;
- (id)name;
- (void)setThumbnailFormatsByIDs:(id)a0;
- (void)requestStreamingURLForResource:(id)a0 asset:(id)a1 intent:(unsigned long long)a2 inContext:(id)a3 clientBundleID:(id)a4 completion:(id /* block */)a5;
- (BOOL)storeExternalResource:(id)a0 forAsset:(id)a1 inContext:(id)a2 options:(id)a3 error:(id *)a4 resultingResource:(id *)a5;
- (id)requestLocalAvailabilityChange:(short)a0 forResource:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (BOOL)canStoreExternalResource:(id)a0;

@end
