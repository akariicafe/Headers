@interface HDAttachmentCloudAnalytics : NSObject

@property (nonatomic) long long numberOfAttachmentRecords;
@property (nonatomic) long long numberOfReferenceRecords;
@property (nonatomic) long long numberOfTombstoneRecords;
@property (nonatomic) long long numberOfOrphanedAttachmentRecords;
@property (nonatomic) long long numberOfOrphanedReferenceRecords;
@property (nonatomic) long long percentageOfAttachmentsWithAssetData;

@end
