@interface PXFeedAlbumCreatedSectionInfo : PXFeedSectionInfo

- (BOOL)isMine;
- (long long)typeForItemAtIndex:(long long)a0;
- (void)updateFromCloudFeedEntry;
- (long long)sectionType;

@end
