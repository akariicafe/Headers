@class NSString;

@interface ASDBetaAppVersion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *bundleID;
@property (copy) NSString *bundleVersion;
@property (copy) NSString *shortVersion;

+ (id)versionWithBundleID:(id)a0 bundleVersion:(id)a1 andShortVersion:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
