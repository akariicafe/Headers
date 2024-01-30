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

- (void)encodeWithCoder:(id)a0;
- (id)initWithPublicLegacyIdentity:(id)a0 modernIdentity:(id)a1 accountIdentity:(id)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
