@class NSString, NSURL;

@interface QLURLHandler : NSObject <NSSecureCoding> {
    const char *_sandboxType;
    BOOL _isAccessingSecurityScope;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *fileExtensionToken;
@property (nonatomic) long long fileExtensionHandle;
@property (retain, nonatomic) NSString *physicalFileExtensionToken;
@property (nonatomic) long long physicalFileExtensionHandle;
@property (copy, nonatomic) NSString *externalResourcesToken;
@property (nonatomic) long long externalResourcesHandle;
@property (retain) NSURL *fileURL;
@property (nonatomic) BOOL needsAccessToExternalResources;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithURL:(id)a0 sandboxType:(const char *)a1;
- (void)sandboxExtensionRelease:(long long)a0;
- (id)_issueFileExtensionForURL:(id)a0;
- (void)_issueExternalResourcesExtensionForURL:(id)a0;
- (long long)sandboxExtensionConsume:(const char *)a0;
- (char *)sandboxExtensionIssueFileWithClass:(const char *)a0 path:(const char *)a1 flags:(unsigned int)a2;
- (void)_issueFileExtension;
- (void)_consumeFileExtension;

@end
