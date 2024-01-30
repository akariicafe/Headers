@interface NFLNativeAdHeadlineTileInfo : NFLHeadlineTileInfo

- (unsigned long long)bookmarkOffsetType;
- (BOOL)pageable;
- (id)feedTileInfoForBookmarking;
- (BOOL)isSelectable;
- (id)updatedTileInfoWithNewHeadline:(id)a0;
- (unsigned long long)tileInfoType;

@end
