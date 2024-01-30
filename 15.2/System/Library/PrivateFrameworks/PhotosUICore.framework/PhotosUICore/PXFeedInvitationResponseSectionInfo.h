@interface PXFeedInvitationResponseSectionInfo : PXFeedSectionInfo

- (id)assets;
- (long long)sectionType;
- (long long)typeForItemAtIndex:(long long)a0;
- (void)updateFromCloudFeedEntry;

@end
