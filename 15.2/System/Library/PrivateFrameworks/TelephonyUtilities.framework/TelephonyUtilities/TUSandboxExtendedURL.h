@class NSURL, NSString;

@interface TUSandboxExtendedURL : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *sandboxExtensionToken;
@property (nonatomic) long long sandboxExtensionHandle;
@property (nonatomic) int pid;
@property (copy, nonatomic) NSString *sandboxExtensionClass;

- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqualToSandboxExtendedURL:(id)a0;

@end
