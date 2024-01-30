@class ICStoreRequestContext, NSUUID;

@interface ICMusicSubscriptionStatusRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL shouldBypassEnforcementOfPrivacyAcknowledgement;
@property (copy, nonatomic) ICStoreRequestContext *storeRequestContext;
@property (nonatomic) long long reason;
@property (nonatomic) BOOL shouldIgnoreCache;
@property (nonatomic) BOOL allowsFallbackToExpiredStatus;
@property (nonatomic) BOOL allowsFallbackToStatusNeedingReload;
@property (nonatomic) BOOL shouldReturnLastKnownStatusOnly;
@property (nonatomic) long long carrierBundleProvisioningStyle;
@property (readonly, nonatomic) NSUUID *requestIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStoreRequestContext:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
