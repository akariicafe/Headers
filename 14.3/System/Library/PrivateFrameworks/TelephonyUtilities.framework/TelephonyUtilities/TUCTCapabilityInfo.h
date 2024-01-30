@class NSURL, NSData, NSString;

@interface TUCTCapabilityInfo : NSObject <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int provisioningStatus;
@property (copy, nonatomic) NSURL *provisioningURL;
@property (copy, nonatomic) NSData *provisioningPostData;
@property (nonatomic) BOOL canEnable;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) BOOL canEnableRoaming;
@property (nonatomic, getter=isRoamingEnabled) BOOL roamingEnabled;
@property (readonly, nonatomic, getter=isProvisioningURLInvalid) BOOL provisioningURLInvalid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)invalidateProvisioningURL;
- (id)publiclyAccessibleCopy;

@end
