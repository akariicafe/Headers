@class NSString, NSMutableSet, DEDBugSession, NSObject;
@protocol OS_os_log;

@interface DEDRadarFinisher : NSObject <NSURLSessionDataDelegate, DEDFinisher, NSSecureCoding, DEDSecureArchiving>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) DEDBugSession *session;
@property (retain) NSObject<OS_os_log> *log;
@property float percentComplete;
@property (retain) NSMutableSet *uploadItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archivedClasses;

- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)folderNameForAttachmentGroup:(id)a0;
- (id)getUploadItemForTask:(id)a0;
- (BOOL)allUploadsComplete;
- (id)initWithConfiguration:(id)a0 session:(id)a1;
- (void)finishSession:(id)a0 withConfiguration:(id)a1;

@end
