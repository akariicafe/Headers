@interface PGAssetLocationResolver : NSObject

+ (id)closestAssetLocationForAsset:(id)a0 inAssetCollection:(id)a1;
+ (id)closestAddressNodeFromMomentNodes:(id)a0 toLocation:(id)a1 withMaximumDistance:(double)a2 allowRemoteLocations:(BOOL)a3;

@end
