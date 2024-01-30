@interface PXFeedAssetsSectionInfo : PXFeedSectionInfo

- (unsigned long long)assetsCount;
- (BOOL)isMine;
- (void)getPhotoCount:(out unsigned long long *)a0 videoCount:(out unsigned long long *)a1;
- (id)assets;
- (long long)typeForItemAtIndex:(long long)a0;
- (long long)indexOfItemWithAsset:(id)a0;
- (void)updateFromCloudFeedEntry;
- (BOOL)containsAsset:(id)a0;
- (id)cloudFeedAssetsEntry;
- (id)batchIDForItemAtIndex:(long long)a0;
- (BOOL)hasPlayableAssetForItemAtIndex:(long long)a0;
- (id)likesForItemAtIndex:(long long)a0;
- (id)commentForItemAtIndex:(long long)a0;
- (id)countsByAssetDisplayType;
- (long long)sectionType;
- (id)commentsForItemAtIndex:(long long)a0;
- (BOOL)areAllAssetsLiked;
- (long long)indexOfFirstItemFromLastBatch;
- (id)assetForItemAtIndex:(long long)a0;
- (id)captionForItemAtIndex:(long long)a0;

@end
