@class NSFileManager, NSSet, PLPhotoLibraryBundle, PLInterLibraryTransferOptions;

@interface PLInterLibraryTransfer : NSObject

@property (retain) PLPhotoLibraryBundle *sourceBundle;
@property (retain) PLPhotoLibraryBundle *destinationBundle;
@property (retain) PLInterLibraryTransferOptions *options;
@property (retain) NSFileManager *fileManager;
@property (retain) NSSet *excludedEntityNames;

- (void).cxx_destruct;
- (BOOL)transferAssetWithUuid:(id)a0 error:(id *)a1;
- (BOOL)_deleteAsset:(id)a0;
- (id)initWithSourceBundle:(id)a0 destinationBundle:(id)a1 options:(id)a2;
- (id)_loadSourceLibraryWithError:(id *)a0;
- (id)_loadDestinationLibraryWithError:(id *)a0;
- (id)_loadAssetWithUuid:(id)a0 fromLibrary:(id)a1 error:(id *)a2;
- (id)_loadAssetWithValues:(id)a0 forKeyPaths:(id)a1 fromLibrary:(id)a2 error:(id *)a3;
- (id)_dedupedDestinationAssetWithSourceAsset:(id)a0 destinationLibrary:(id)a1;
- (BOOL)_shouldSkipTransferWithSourceAsset:(id)a0 destinationAsset:(id)a1;
- (id)_sourceAttributesFromObject:(id)a0;
- (id)_copyObject:(id)a0 toDestinationObject:(id)a1 toLibrary:(id)a2 objectMap:(id)a3;
- (id)_createNewObjectWithEntity:(id)a0 attributes:(id)a1 inLibrary:(id)a2;
- (BOOL)_shouldSkipRelationship:(id)a0;
- (void)_copyRelationship:(id)a0 fromObject:(id)a1 toObject:(id)a2 inLibrary:(id)a3 objectMap:(id)a4;
- (void)_setAttributes:(id)a0 onObject:(id)a1;
- (BOOL)_copyFilesFromSourceAsset:(id)a0 toDestinationAsset:(id)a1 objectMap:(id)a2 filesCopied:(id)a3 error:(id *)a4;
- (BOOL)_copyMasterThumbnailFrom:(id)a0 toDestinationAsset:(id)a1 filesCopied:(id)a2 error:(id *)a3;
- (BOOL)_copyFileFrom:(id)a0 to:(id)a1 error:(id *)a2;
- (void)_transferThumbnailsForSourceAsset:(id)a0 toDestinationAsset:(id)a1 filesCopied:(id)a2;
- (void)_validateSourceAsset:(id)a0 destinationAsset:(id)a1;

@end
