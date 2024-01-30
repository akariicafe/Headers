@class DEDSeedingClient, NSMutableDictionary, NSString, DEDBugSessionConfiguration, NSMutableSet, NSObject, DEDBugSession;
@protocol OS_os_log, OS_os_transaction;

@interface DEDSeedingFinisher : NSObject <DEDFinisherState, DEDFinisher, DEDSeedingClientDelegate, DEDSecureArchiving, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) DEDBugSessionConfiguration *config;
@property (retain) NSMutableSet *uploads;
@property long long totalUploadSize;
@property long long lastUploadPercentageReported;
@property long long bytesUploadedFromAllFiles;
@property (nonatomic) int uploadProgressCounter;
@property (retain) NSObject<OS_os_log> *log;
@property (weak) DEDBugSession *session;
@property (retain) NSObject<OS_os_transaction> *transaction;
@property BOOL isPreparing;
@property (retain) DEDSeedingClient *client;
@property (retain) NSMutableDictionary *promises;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archivedClasses;

- (void)save;
- (BOOL)shouldReportProgress;
- (void)encodeWithCoder:(id)a0;
- (void)cleanup;
- (id)attachmentHandler;
- (BOOL)isUploading;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0 session:(id)a1;
- (void)finishSession:(id)a0 withConfiguration:(id)a1;
- (void)didStartCollectingDiagnosticExtensionWithIdentifier:(id)a0;
- (void)didCancelCollectionOnExtension:(id)a0;
- (void)didCollectAttachmentGroup:(id)a0;
- (void)didAdoptAttachmentGroup:(id)a0;
- (id)prepareSessionDirectoryForSubmission:(id)a0;
- (id)uploadItemForTask:(id)a0;
- (void)updateUploadProgressOnSessionIfNeeded;
- (BOOL)uploadsAreComplete;
- (id)prepareUpload:(id)a0 forSubmissionWithSession:(id)a1 metadata:(id)a2;
- (id)archiveItemsInDirectory:(id)a0;
- (BOOL)isCompressing;
- (id)additionalStateInfo;
- (void)uploadTask:(id)a0 didCompleteWithError:(id)a1;
- (void)uploadTask:(id)a0 didSendBytes:(long long)a1 totalBytesExpectedToSend:(long long)a2;
- (BOOL)uploadFinished;

@end
