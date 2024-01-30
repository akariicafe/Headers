@interface CDMAssetsUtils : NSObject

+ (id)findExistFolderInAssetFolders:(id)a0 underBasePath:(id)a1 useFileManager:(id)a2;
+ (id)getAssetVersionFromAssetMetadata:(id)a0;
+ (BOOL)isCurrentServiceSkippableForAssetsAvailabilityCheck:(id)a0;
+ (id)loadAssetMetadataFromAsset:(id)a0;

@end
