@class NSURL;

@interface DCSandboxExtension : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL shouldIssueSandboxExtensionWhenEncoding;
@property (nonatomic) long long sandboxExtensionHandle;
@property (readonly, nonatomic) BOOL canAccessFileURL;
@property (readonly, nonatomic) NSURL *fileURL;

- (void).cxx_destruct;
- (void)dealloc;
- (void)relinquish;
- (id)initWithCoder:(id)a0;
- (id)initWithFileURL:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
