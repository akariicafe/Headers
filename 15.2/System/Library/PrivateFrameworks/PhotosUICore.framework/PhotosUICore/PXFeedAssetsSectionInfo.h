@interface PXFeedAssetsSectionInfo : PXFeedSectionInfo

- (id)assets;
- (long long)sectionType;
- (unsigned long long)assetsCount;
- (BOOL)areAllAssetsLiked;
- (BOOL)isMine;
- (long long)indexOfFirstItemFromLastBatch;
- (id)assetForItemAtIndex:(long long)a0;
- (id)captionForItemAtIndex:(long long)a0;
- (void)getPhotoCount:(out unsigned long long *)a0 videoCount:(out unsigned long long *)a1;
- (id)cloudFeedAssetsEntry;
- (long long)typeForItemAtIndex:(long long)a0;
- (long long)indexOfItemWithAsset:(id)a0;
- (id)batchIDForItemAtIndex:(long long)a0;
- (BOOL)hasPlayableAssetForItemAtIndex:(long long)a0;
- (id)likesForItemAtIndex:(long long)a0;
- (id)commentForItemAtIndex:(long long)a0;
- (id)countsByAssetDisplayType;
- (void)updateFromCloudFeedEntry;
- (BOOL)containsAsset:(id)a0;
- (id)commentsForItemAtIndex:(long long)a0;

@end
