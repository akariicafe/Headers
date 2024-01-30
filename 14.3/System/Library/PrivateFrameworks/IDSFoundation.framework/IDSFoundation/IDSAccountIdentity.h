@class IDSPublicAccountIdentity, NSString, IDSMPFullAccountIdentity, IDSMPFullServiceIdentityAdmin, IDSMPFullAccountIdentityCluster, IDSMPFullServiceIdentitySigning;

@interface IDSAccountIdentity : NSObject <ENAccountKey>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) IDSMPFullAccountIdentityCluster *identityCluster;
@property (readonly, nonatomic) IDSMPFullAccountIdentity *accountIdentity;
@property (readonly, nonatomic) IDSMPFullServiceIdentityAdmin *adminIdentity;
@property (readonly, nonatomic) IDSMPFullServiceIdentitySigning *signingIdentity;
@property (readonly, nonatomic) IDSPublicAccountIdentity *accountPublicKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFullCluster:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
