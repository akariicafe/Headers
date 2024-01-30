@class PLPhotoLibrary, NSMutableDictionary, NSMutableSet, PLLibraryServicesManager, NSString, NSMutableIndexSet;

@interface PLFileSystemAssetImporter : NSObject {
    PLPhotoLibrary *_photoLibrary;
    PLLibraryServicesManager *_libraryServicesManager;
    NSString *_libraryBundlePath;
    NSString *_photoLibraryStoreUUID;
    NSMutableIndexSet *_thumbIndexes;
    BOOL _hasProcessedAnyAssets;
}

@property (nonatomic) unsigned long long thumbnailBatchFetchSize;
@property (retain, nonatomic) NSMutableSet *existingUUIDs;
@property (retain, nonatomic) NSMutableDictionary *existingUUIDsByUppercasePath;
@property (retain, nonatomic) NSMutableDictionary *existingOIDsByUUID;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_setupPhotoAssetAsPhotoIrisIfNeeded:(id)a0 hasVideoComplementResource:(BOOL)a1;
- (id)_addAssetWithURL:(id)a0 existingOID:(id)a1 assetUUID:(id)a2 isPlaceholder:(BOOL)a3;
- (id)_assetAdjustmentsIfExistsForAsset:(id)a0;
- (BOOL)_setupAdjustmentsFromAdjustmentFileForAsset:(id)a0;
- (BOOL)_setupPhotoAsset:(id)a0 withURL:(id)a1 isPlaceholder:(BOOL)a2 hasVideoComplementResource:(BOOL)a3;
- (BOOL)_setupPhotoAsset:(id)a0 withURL:(id)a1 unknownType:(BOOL)a2 isPlaceholder:(BOOL)a3 hasVideoComplementResource:(BOOL)a4;
- (BOOL)_setupUnknownAsset:(id)a0 withURL:(id)a1;
- (BOOL)_setupVideoAsset:(id)a0 withURL:(id)a1;
- (id)addAssetWithURLs:(id)a0 assetPayload:(id)a1 forceInsert:(BOOL)a2 forceUpdate:(BOOL)a3 fixAddedDate:(BOOL)a4;
- (void)addAvailableThumbnailIndex:(unsigned long long)a0;
- (id)assetURLisInDatabase:(id)a0 deferredPreviewURL:(id)a1;
- (id)initWithPhotoLibrary:(id)a0 libraryServicesManager:(id)a1;
- (id)libraryBundlePathWithPhotoLibrary:(id)a0;
- (unsigned long long)nextThumbnailIndex;
- (void)setModificationAndCreationDateOnAsset:(id)a0 withURL:(id)a1;

@end
