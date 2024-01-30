@class NSURL, PLFileSystemImportAsset;

@interface PLLockedResourceTransferRecovery : NSObject

@property (readonly, nonatomic) PLFileSystemImportAsset *transferAsset;
@property (readonly, nonatomic) NSURL *destinationDirectoryURL;

+ (void)_validateAsset:(id)a0 pathManager:(id)a1;
+ (id)assetDirectoryForAsset:(id)a0 bundleScope:(unsigned short)a1 pathManager:(id)a2;
+ (id)assetMainScopeDirectoryFromMarkerFilePathRelativeToBundle:(id)a0 pathManager:(id)a1;
+ (id)dcimDirectoryForAssetDirectory:(id)a0 filename:(id)a1 bundleScope:(unsigned short)a2 pathManager:(id)a3;
+ (id)dcimFileURLForAsset:(id)a0 cplResourceType:(unsigned long long)a1 version:(unsigned int)a2 recipeID:(unsigned int)a3 resourceType:(unsigned int)a4 utiString:(id)a5 bundleScope:(unsigned short)a6 pathManager:(id)a7;
+ (id)dcimFileURLForAsset:(id)a0 resource:(id)a1 bundleScope:(unsigned short)a2 pathManager:(id)a3;
+ (id)destinationURLForResource:(id)a0 asset:(id)a1 bundleScope:(unsigned short)a2 pathManager:(id)a3;
+ (id)dontImportMarkerFileURLForAsset:(id)a0 bundleScope:(unsigned short)a1 pathManager:(id)a2;
+ (void)enumerateFilesInDirectoryWithType:(unsigned char)a0 forMarkerFilePathRelativeToBundle:(id)a1 pathManager:(id)a2 block:(id /* block */)a3;
+ (BOOL)isStaleResourceURL:(id)a0 asset:(id)a1 resource:(id)a2 pathManager:(id)a3;
+ (id)lockedTransferRecoveryMarkerFileExtension;
+ (unsigned short)oppositeBundleScope:(unsigned short)a0;
+ (id)pathToResourceDirectoryForPhotoDirectoryType:(unsigned char)a0 fromMarkerFilePathRelativeToBundle:(id)a1 pathManager:(id)a2;
+ (BOOL)updateAssetPropertiesAndSaveForAsset:(id)a0 moveToDestinationScope:(unsigned short)a1 library:(id)a2 error:(id *)a3;
+ (void)validateAssetWithUUID:(id)a0 inLibrary:(id)a1;

- (void).cxx_destruct;
- (id)initWithTransferImportAsset:(id)a0 destinationDirectoryURL:(id)a1;
- (BOOL)recoverFromInProgressLockedTransferForImportAsset:(id)a0 pathManager:(id)a1;

@end
