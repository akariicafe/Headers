@interface MiroBurstHelpers : NSObject

+ (BOOL)isRealBurstClip:(id)a0;
+ (BOOL)isDateBasedBurstClip:(id)a0 memory:(id)a1;
+ (id)photoAssetsForRealBurstAsset:(id)a0;
+ (id)photoAssetsForDateBasedBurstAsset:(id)a0 memory:(id)a1;
+ (BOOL)isBurstClip:(id)a0 memory:(id)a1;
+ (id)photoAssetsForBurstAsset:(id)a0 memory:(id)a1;
+ (id)thinOutAssets:(id)a0 byKeepingOnlyOneAssetFromEachBurst:(id)a1;

@end
