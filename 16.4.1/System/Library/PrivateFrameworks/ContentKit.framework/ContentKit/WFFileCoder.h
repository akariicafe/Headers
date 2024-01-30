@class NSURL;

@interface WFFileCoder : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *sharedDirectory;
@property (copy, nonatomic) NSURL *sharedTemporaryDirectory;
@property (nonatomic) long long deletionResponsibility;
@property (nonatomic) long long targetPlatform;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)archiveFileAtURL:(id)a0 fileShouldBeDeletedOnDeallocation:(BOOL)a1 withCoder:(id)a2;
- (id)decodeFileWithCoder:(id)a0 fileShouldBeDeletedOnDeallocation:(BOOL *)a1 fileIsSecurityScoped:(BOOL *)a2;
- (void)waitForFileAvailabilityWithCompletionHandler:(id /* block */)a0;

@end
