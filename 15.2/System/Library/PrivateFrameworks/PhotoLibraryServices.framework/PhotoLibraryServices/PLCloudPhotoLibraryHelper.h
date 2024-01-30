@interface PLCloudPhotoLibraryHelper : NSObject

+ (BOOL)shouldRepushVideoAssetsMetadataOnce;
+ (BOOL)shouldHandleOptimizeModeChange;
+ (BOOL)shouldSendOptimizeFeedbackOnce;
+ (void)setShouldMarkPurgeableResourcesOnce:(BOOL)a0;
+ (void)setShouldClearPurgeableResourcesOnce:(BOOL)a0;
+ (void)setShouldRepushAssetsWithImportedByBundleIdentifier:(BOOL)a0;
+ (void)setShouldSendOptimizeFeedbackOnce:(BOOL)a0;
+ (BOOL)shouldMarkPurgeableResourcesOnce;
+ (BOOL)shouldRepushAssetsWithImportedByBundleIdentifier;
+ (void)disableCPL:(id /* block */)a0;
+ (void)setShouldHandleOptimizeModeChange:(BOOL)a0;
+ (void)setShouldRepushVideoAssetsMetadataOnce:(BOOL)a0;
+ (void)enableCPL:(id /* block */)a0;
+ (void)setShouldRepushMasterWithMissingMediaMetadataOnce:(BOOL)a0;
+ (BOOL)shouldRepushMasterWithMissingMediaMetadataOnce;
+ (BOOL)shouldClearPurgeableResourcesOnce;

@end
