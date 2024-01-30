@class NSArray, EMMailDropMetadata;

@interface MFMailDropMailDelivery : MFOutgoingMessageDelivery

@property (retain, nonatomic) NSArray *attachments;
@property (retain, nonatomic) EMMailDropMetadata *imageArchiveMetadata;
@property (nonatomic) long long mailDropState;

+ (id)_mailDropZone;

- (void).cxx_destruct;
- (id)ckDatabase;
- (id)_attachmentManager;
- (long long)_processAttachments;
- (void)_recordZoneIDInDatabase:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_uploadAttachmentsViaCloudKit:(id)a0 zone:(id)a1 records:(id)a2 zippedPhotos:(id)a3 attachmentRecords:(id)a4 images:(id)a5;
- (id)deliverSynchronouslyWithCompletion:(id /* block */)a0;
- (id)publishRecord:(id)a0 database:(id)a1 attachmentRecords:(id)a2 images:(id)a3 allowsCellularAccess:(BOOL)a4;
- (id)scaledImages:(id)a0;
- (BOOL)updateMessageWithAttachmentsSynchronously;

@end
