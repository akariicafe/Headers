@class NSArray, NSMutableDictionary, NSString, DEDBugSession, NSObject, NSMutableArray;
@protocol OS_os_log;

@interface DEDCloudKitFinisher : NSObject <DEDFinisher, NSSecureCoding, DEDSecureArchiving>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) DEDBugSession *session;
@property (retain) NSObject<OS_os_log> *log;
@property unsigned long long totalUploadSize;
@property (retain) NSArray *attachmentURLs;
@property (retain) NSMutableArray *attachmentRecords;
@property (retain) NSMutableArray *attachments;
@property (retain) NSMutableDictionary *uploadedBytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archivedClasses;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0 session:(id)a1;
- (void)finishSession:(id)a0 withConfiguration:(id)a1;
- (void)didStartCollectingDiagnosticExtensionWithIdentifier:(id)a0;
- (void)didCancelCollectionOnExtension:(id)a0;
- (void)didCollectAttachmentGroup:(id)a0;
- (void)didFinishAllCollections;
- (id)flattenDirectories:(id)a0;
- (id)encryptLogsIfNecessary:(id)a0;
- (void)localCleanup;
- (id)extractExtensionIdentifierFromAttachmentUrl:(id)a0;
- (id)encryptLogsForExtensionIdentifier:(id)a0 withAttachmentUrl:(id)a1;

@end
