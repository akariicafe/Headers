@class NSURL;

@interface WFFileCoder : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *sharedDirectory;
@property (copy, nonatomic) NSURL *sharedTemporaryDirectory;
@property (nonatomic) long long deletionResponsibility;
@property (nonatomic) long long targetPlatform;

+ (id)sharedDirectoryFileArchiver;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)archiveFileAtURL:(id)a0 fileIsTemporary:(BOOL)a1 withCoder:(id)a2;
- (id)decodeFileWithCoder:(id)a0 fileIsTemporary:(BOOL *)a1;
- (void)waitForFileAvailabilityWithCompletionHandler:(id /* block */)a0;

@end
