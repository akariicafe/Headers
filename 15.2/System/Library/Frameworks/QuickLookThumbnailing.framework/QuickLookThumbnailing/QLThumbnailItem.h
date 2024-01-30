@class NSString, FPSandboxingURLWrapper, NSURL, NSData;

@interface QLThumbnailItem : NSObject <NSSecureCoding> {
    NSString *_fileExtensionToken;
    long long _fileExtensionHandle;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSURL *url;
@property (readonly) FPSandboxingURLWrapper *urlWrapperForExtension;
@property (readonly) FPSandboxingURLWrapper *urlWrapperForParentDirectory;
@property (readonly) NSData *data;
@property (copy, nonatomic) NSString *overriddenContentType;
@property unsigned long long downloadStatus;
@property (copy) NSString *computedContentType;
@property BOOL needsAccessToExternalResources;

- (id)initWithData:(id)a0 contentType:(id)a1;
- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)needsDownload;
- (void)dealloc;
- (id)initWithURL:(id)a0 URLWrapperForExtension:(id)a1 URLWrapperForParentDirectory:(id)a2;
- (void)issueFileExtension;
- (void)consumeFileExtension;
- (id)initWithURL:(id)a0 URLWrapperForExtension:(id)a1;

@end
