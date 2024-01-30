@class NSString, CKRecordZoneID;

@interface CKUploadRequestConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *containerIdentifier;
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverride;
@property (copy, nonatomic) CKRecordZoneID *repairZoneID;

+ (id)configurationFromBaseContainer:(id)a0;
+ (id)resolvedConfigurationWithBaseContainer:(id)a0 overrides:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initFromBaseContainer:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
