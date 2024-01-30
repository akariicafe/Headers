@interface HDAttachmentAnalytics : NSObject

@property (nonatomic) long long numberOfAttachments;
@property (nonatomic) long long numberOfReferences;
@property (nonatomic) long long numberOfTombstones;
@property (nonatomic) long long totalSizeOfFiles;
@property (nonatomic) long long numberOfUnconfirmedFiles;
@property (nonatomic) long long numberOfOrphanedAttachments;
@property (nonatomic) long long numberOfOrphanedReferences;
@property (nonatomic) long long numberOfReferencesCreatedLast24Hours;
@property (nonatomic) long long numberOfAttachmentsCreatedLast24Hours;
@property (nonatomic) long long numberOfTombstonesCreatedLast24Hours;
@property (nonatomic) long long numberOfAttachmentsWithMultipleReferences;

@end
