@interface PHAssetGeoHashUtilities : NSObject

+ (id)_featureVectorDataWithOneHotAtIndex:(unsigned long long)a0 featureVectorSize:(unsigned long long)a1;
+ (unsigned long long)_indexForPOIGeoHash:(id)a0 geoHashKeySize:(unsigned long long)a1;
+ (id)_newSystemPhotoLibrary;
+ (id)_poiGeoHashForAsset:(id)a0 geoHashSize:(unsigned long long)a1;
+ (unsigned long long)_randomIndexFromCount:(unsigned long long)a0;
+ (id)_randomPublishedUUIDsFromPublishedUUIDs:(id)a0 sentUUIDs:(id)a1;
+ (unsigned long long)_randomSceneIndexForAsset:(id)a0 sceneLabelMapping:(id)a1 orderedRemappedSceneLabels:(id)a2;
+ (id)_sceneLabelsForSceneClassifications:(id)a0;
+ (id)assetUUIDsFromBiomeStream;
+ (id)assetUUIDsFromBiomeStreamWithPhotoLibrary:(id)a0;
+ (id)featureVectorByGeoHashForAssetUUID:(id)a0 geoHashSize:(id)a1 geoHashKeySize:(id)a2 sceneLabelMapping:(id)a3 dryRun:(id)a4;
+ (id)featureVectorByGeoHashForAssetUUID:(id)a0 geoHashSize:(id)a1 geoHashKeySize:(id)a2 sceneLabelMapping:(id)a3 dryRun:(id)a4 photoLibrary:(id)a5;
+ (id)featureVectorByGeoHashForAssetUUIDs:(id)a0 geoHashSize:(id)a1 geoHashKeySize:(id)a2 sceneLabelMapping:(id)a3 dryRun:(id)a4;
+ (id)featureVectorByGeoHashForAssetUUIDs:(id)a0 geoHashSize:(id)a1 geoHashKeySize:(id)a2 sceneLabelMapping:(id)a3 dryRun:(id)a4 photoLibrary:(id)a5;
+ (id)mockReturnDataWithAssetUUIDs:(id)a0 geoHashKeySize:(id)a1;
+ (id)poiGeoHashWithGeoHashSize:(unsigned long long)a0 latitude:(double)a1 longitude:(double)a2;
+ (id)sceneLabelExclusionList;

@end
