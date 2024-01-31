@class NSString, NSData, ASCredentialServiceIdentifier, SFExternalCredentialIdentityStoreIdentifier;

@interface ASPasskeyCredentialIdentity : NSObject <ASCredentialIdentityPrivate, NSCopying, NSSecureCoding, ASCredentialIdentity>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, copy, nonatomic) NSString *userName;
@property (readonly, copy, nonatomic) NSData *credentialID;
@property (readonly, copy, nonatomic) NSData *userHandle;
@property (readonly, copy, nonatomic) NSString *recordIdentifier;
@property (nonatomic) long long rank;
@property (readonly, nonatomic) SFExternalCredentialIdentityStoreIdentifier *credentialIdentityStoreIdentifier;
@property (readonly, nonatomic) ASCredentialServiceIdentifier *serviceIdentifier;
@property (readonly, copy, nonatomic) NSString *user;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identityWithRelyingPartyIdentifier:(id)a0 userName:(id)a1 credentialID:(id)a2 userHandle:(id)a3 recordIdentifier:(id)a4;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithLoginChoice:(id)a0;
- (id)initWithRelyingPartyIdentifier:(id)a0 userName:(id)a1 credentialID:(id)a2 userHandle:(id)a3 recordIdentifier:(id)a4;

@end
