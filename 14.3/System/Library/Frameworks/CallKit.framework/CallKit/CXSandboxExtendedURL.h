@class NSURL, NSString;

@interface CXSandboxExtendedURL : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *sandboxExtensionToken;
@property (nonatomic) long long sandboxExtensionHandle;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToSandboxExtendedURL:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
