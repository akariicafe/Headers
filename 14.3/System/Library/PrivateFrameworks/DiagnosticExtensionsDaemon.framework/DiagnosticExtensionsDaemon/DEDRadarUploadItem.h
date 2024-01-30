@interface DEDRadarUploadItem : DEDAttachmentItem

@property (nonatomic) unsigned long long taskIdentifier;
@property (nonatomic) long long totalBytesSent;
@property (nonatomic) long long totalBytesExpectedToSend;
@property (nonatomic) BOOL isUploaded;

- (id)description;
- (id)initWithUploadTask:(id)a0 andAttachment:(id)a1;

@end
