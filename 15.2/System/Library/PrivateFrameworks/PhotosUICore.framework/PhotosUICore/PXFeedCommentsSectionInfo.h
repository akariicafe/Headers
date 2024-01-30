@interface PXFeedCommentsSectionInfo : PXFeedSectionInfo

@property (nonatomic, setter=_setHasLikes:) BOOL _hasLikes;

- (id)assets;
- (long long)sectionType;
- (unsigned long long)assetsCount;
- (BOOL)isMine;
- (id)assetForItemAtIndex:(long long)a0;
- (long long)typeForItemAtIndex:(long long)a0;
- (long long)indexOfItemWithComment:(id)a0;
- (long long)indexOfItemWithAsset:(id)a0;
- (id)assetsForItemAtIndex:(long long)a0 maximumCount:(long long)a1;
- (BOOL)hasMultipleAssetsForItemAtIndex:(long long)a0;
- (id)likesForItemAtIndex:(long long)a0;
- (id)commentForItemAtIndex:(long long)a0;
- (id)cloudFeedCommentsEntry;
- (void)getCommentCount:(out unsigned long long *)a0 likeCount:(out unsigned long long *)a1;
- (void)updateFromCloudFeedEntry;
- (id)commentTextForItemAtIndex:(long long)a0;
- (BOOL)containsAsset:(id)a0;

@end
