@interface PLCloudPhotoLibraryHelper : NSObject

+ (void)setShouldMarkPurgeableResourcesOnce:(BOOL)a0;
+ (void)setShouldClearPurgeableResourcesOnce:(BOOL)a0;
+ (void)setShouldHandleOptimizeModeChange:(BOOL)a0;
+ (void)setShouldSendOptimizeFeedbackOnce:(BOOL)a0;
+ (BOOL)shouldMarkPurgeableResourcesOnce;
+ (void)setShouldRepushMasterWithMissingMediaMetadataOnce:(BOOL)a0;
+ (BOOL)shouldRepushMasterWithMissingMediaMetadataOnce;
+ (void)setShouldRepushVideoAssetsMetadataOnce:(BOOL)a0;
+ (BOOL)shouldRepushVideoAssetsMetadataOnce;
+ (BOOL)shouldHandleOptimizeModeChange;
+ (BOOL)shouldSendOptimizeFeedbackOnce;
+ (BOOL)shouldClearPurgeableResourcesOnce;
+ (void)enableCPL:(id /* block */)a0;
+ (void)disableCPL:(id /* block */)a0;

@end
