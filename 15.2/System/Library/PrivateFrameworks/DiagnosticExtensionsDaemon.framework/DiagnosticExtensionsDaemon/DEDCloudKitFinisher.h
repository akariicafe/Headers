@class DEDCloudKitClient, NSMutableDictionary, NSString, ELSManager, DEDBugSession, NSMutableArray, NSObject;
@protocol OS_os_log;

@interface DEDCloudKitFinisher : NSObject <DEDFinisher, NSSecureCoding, DEDSecureArchiving>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) DEDBugSession *session;
@property (retain) NSObject<OS_os_log> *log;
@property unsigned long long totalUploadSize;
@property (nonatomic) int successfulUploads;
@property (nonatomic) int failedUploads;
@property (retain) NSMutableArray *attachments;
@property (retain) NSMutableDictionary *uploadedBytes;
@property (retain, nonatomic) DEDCloudKitClient *cloudKitClient;
@property (retain, nonatomic) ELSManager *elsManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archivedClasses;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0 session:(id)a1;
- (void)finishSession:(id)a0 withConfiguration:(id)a1;
- (void)didStartCollectingDiagnosticExtensionWithIdentifier:(id)a0;
- (void)didCancelCollectionOnExtension:(id)a0;
- (void)didCollectAttachmentGroup:(id)a0;
- (void)didFinishAllCollections;
- (id)createAttachmentGroupWithData:(id)a0;
- (id)getAttachmentURLs;
- (id)createAttachmentModelWithURL:(id)a0 attachmentGroupModel:(id)a1;
- (void)processAttachmentsWithRecord:(id)a0 withProgress:(double)a1;
- (void)postProcessRecord:(id)a0 withError:(id)a1 attachmentGroup:(id)a2;
- (id)createAttachmentGroupStatusWithAttachmentGroupModel:(id)a0;
- (void)logError:(id)a0 forRecord:(id)a1;
- (void)localCleanup;
- (void)createAttachmentGroupStatusForAttachmentGroup:(id)a0;
- (id)encryptLogsIfNecessary:(id)a0;
- (id)extractExtensionIdentifierFromAttachmentUrl:(id)a0;
- (id)encryptLogsForExtensionIdentifier:(id)a0 withAttachmentUrl:(id)a1;

@end
