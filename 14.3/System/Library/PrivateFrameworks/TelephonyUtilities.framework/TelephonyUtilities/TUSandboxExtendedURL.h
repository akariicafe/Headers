@class NSURL, NSString;

@interface TUSandboxExtendedURL : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *sandboxExtensionToken;
@property (nonatomic) long long sandboxExtensionHandle;
@property (copy, nonatomic) NSString *sandboxExtensionClass;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToSandboxExtendedURL:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
