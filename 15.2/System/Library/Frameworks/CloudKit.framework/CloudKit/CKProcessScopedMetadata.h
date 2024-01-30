@class CKFrameworkFingerprint;

@interface CKProcessScopedMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int clientSDKVersion;
@property (retain, nonatomic) CKFrameworkFingerprint *frameworkFingerprint;
@property (nonatomic) BOOL isClientMainBundleAppleExecutable;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
