@class NSData, NSString;

@interface ASCSecurityKeyPublicKeyCredentialRegistration : NSObject <ASCCredentialProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *credentialID;
@property (readonly, copy, nonatomic) NSData *rawClientDataJSON;
@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, copy, nonatomic) NSData *attestationObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithRelyingPartyIdentifier:(id)a0 authenticatorAttestationResponse:(id)a1;
- (id)_initWithRelyingPartyIdentifier:(id)a0 attestationObject:(id)a1 rawClientDataJSON:(id)a2 credentialID:(id)a3;

@end
