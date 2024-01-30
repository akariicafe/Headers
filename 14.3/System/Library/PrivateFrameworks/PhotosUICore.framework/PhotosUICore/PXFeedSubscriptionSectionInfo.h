@interface PXFeedSubscriptionSectionInfo : PXFeedAssetsSectionInfo

- (BOOL)isMine;
- (void)updateFromCloudFeedEntry;
- (long long)sectionType;

@end
