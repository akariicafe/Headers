@class NSString, IDSMPPublicLegacyIdentity, IDSMPPublicDeviceIdentity, IDSPublicAccountIdentity;

@interface IDSPublicDeviceIdentity : NSObject <ENDevicePublicKey>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) IDSMPPublicLegacyIdentity *legacyIdentity;
@property (readonly, nonatomic) IDSMPPublicDeviceIdentity *modernIdentity;
@property (readonly, nonatomic) IDSPublicAccountIdentity *accountIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPublicLegacyIdentity:(id)a0 modernIdentity:(id)a1 accountIdentity:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
