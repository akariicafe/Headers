@interface PLCloudPhotoLibraryHelper : NSObject

+ (void)disableCPL:(id /* block */)a0;
+ (void)setShouldMarkPurgeableResourcesOnce:(BOOL)a0;
+ (void)setShouldRepushAssetsWithImportedByBundleIdentifier:(BOOL)a0;
+ (BOOL)shouldSendOptimizeFeedbackOnce;
+ (void)setShouldRepushMasterWithMissingMediaMetadataOnce:(BOOL)a0;
+ (void)setShouldSendOptimizeFeedbackOnce:(BOOL)a0;
+ (BOOL)shouldHandleOptimizeModeChange;
+ (void)setShouldClearPurgeableResourcesOnce:(BOOL)a0;
+ (BOOL)shouldRepushVideoAssetsMetadataOnce;
+ (BOOL)shouldRepushAssetsWithImportedByBundleIdentifier;
+ (void)setShouldHandleOptimizeModeChange:(BOOL)a0;
+ (void)enableCPL:(id /* block */)a0;
+ (BOOL)shouldMarkPurgeableResourcesOnce;
+ (void)setShouldRepushVideoAssetsMetadataOnce:(BOOL)a0;
+ (BOOL)shouldClearPurgeableResourcesOnce;
+ (BOOL)shouldRepushMasterWithMissingMediaMetadataOnce;
+ (void)_donateTipsAppEnablementSignal;

@end
