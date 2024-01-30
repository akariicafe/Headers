@class NSString, NSArray, NSDate;

@interface SSMessageResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *groupDisplayName;
@property (retain, nonatomic) NSString *groupPhotoPath;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *messageId;
@property (retain, nonatomic) NSArray *attachmentNames;
@property (retain, nonatomic) NSArray *attachmentPaths;
@property (retain, nonatomic) NSArray *attachmentTypes;
@property (retain, nonatomic) NSArray *recipients;
@property (retain, nonatomic) NSArray *recipientContactIds;
@property (retain, nonatomic) NSDate *sendDate;
@property (retain, nonatomic) NSArray *senders;
@property (retain, nonatomic) NSArray *senderContactIds;

+ (id)bundleId;
+ (BOOL)isCoreSpotlightResult;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildAttachmentSummary;
- (id)buildAttachmentThumbnail;
- (id)buildCompactCardSection;
- (id)buildDescriptions;
- (id)buildInlineCardSection;
- (id)buildThumbnail;
- (id)buildTitle;

@end
