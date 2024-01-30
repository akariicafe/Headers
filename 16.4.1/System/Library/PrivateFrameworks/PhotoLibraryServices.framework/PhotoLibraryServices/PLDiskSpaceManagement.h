@interface PLDiskSpaceManagement : NSObject

+ (long long)_processCloudSharedAsset:(id)a0 shouldFreeSpace:(BOOL)a1;
+ (unsigned long long)_scanAndDeleteCacheFilesInDirectory:(id)a0 shouldFreeSpace:(BOOL)a1 bytesToPurge:(unsigned long long)a2;
+ (unsigned long long)_scanFilesInPhotoLibrary:(id)a0 fromCloudSharingCacheDataDirectoryShouldFreeSpace:(BOOL)a1 bytesToPurge:(unsigned long long)a2;
+ (unsigned long long)_scanFilesInPhotoLibrary:(id)a0 fromPhotoMetadataDirectoryShouldFreeSpace:(BOOL)a1 bytesToPurge:(unsigned long long)a2 skipAssets:(id)a3;
+ (unsigned long long)_scanFilesInPhotoLibrary:(id)a0 fromReimportPhotoCloudSharingDataDirectoryShouldFreeSpace:(BOOL)a1 bytesToPurge:(unsigned long long)a2;
+ (unsigned long long)performCloudSharingSpaceManagementWithBytesToPurge:(unsigned long long)a0 shouldFreeSpace:(BOOL)a1 shouldKeepRecentlyViewedAssets:(BOOL)a2 fromPhotoLibrary:(id)a3;

@end
