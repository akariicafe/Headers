@class NSString, FPSandboxingURLWrapper, NSURL, NSData, UTType;

@interface QLThumbnailItem : NSObject <NSSecureCoding> {
    NSString *_fileExtensionToken;
    long long _fileExtensionHandle;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSURL *url;
@property (readonly) FPSandboxingURLWrapper *urlWrapperForExtension;
@property (readonly) FPSandboxingURLWrapper *urlWrapperForParentDirectory;
@property (readonly) NSData *data;
@property (readonly, nonatomic) UTType *overriddenContentType;
@property (retain, nonatomic) NSString *overriddenContentTypeIdentifier;
@property unsigned long long downloadStatus;
@property (copy) NSString *computedContentTypeIdentifier;
@property (retain) UTType *computedContentType;
@property BOOL needsAccessToExternalResources;

- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 contentType:(id)a1;
- (BOOL)needsDownload;
- (void)consumeFileExtension;
- (id)initWithURL:(id)a0 URLWrapperForExtension:(id)a1;
- (id)initWithURL:(id)a0 URLWrapperForExtension:(id)a1 URLWrapperForParentDirectory:(id)a2;
- (void)issueFileExtension;

@end
