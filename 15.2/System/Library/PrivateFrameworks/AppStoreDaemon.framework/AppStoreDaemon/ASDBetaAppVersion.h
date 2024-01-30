@class NSString;

@interface ASDBetaAppVersion : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *bundleID;
@property (copy) NSString *bundleVersion;
@property long long platform;
@property (copy) NSString *shortVersion;

+ (long long)defaultPlatform;
+ (id)versionWithBundleID:(id)a0 bundleVersion:(id)a1 platform:(long long)a2 andShortVersion:(id)a3;
+ (id)versionWithBundleID:(id)a0 bundleVersion:(id)a1 andShortVersion:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
