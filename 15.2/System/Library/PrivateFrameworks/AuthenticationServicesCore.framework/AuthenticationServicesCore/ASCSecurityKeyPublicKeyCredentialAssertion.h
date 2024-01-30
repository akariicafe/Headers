@class NSData, NSString;

@interface ASCSecurityKeyPublicKeyCredentialAssertion : NSObject <ASCCredentialProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *credentialID;
@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, copy, nonatomic) NSData *authenticatorData;
@property (readonly, copy, nonatomic) NSData *signature;
@property (readonly, copy, nonatomic) NSData *userHandle;
@property (readonly, copy, nonatomic) NSData *rawClientDataJSON;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithRelyingPartyIdentifier:(id)a0 authenticatorAssertionResponse:(id)a1;
- (id)_initWithRelyingPartyIdentifier:(id)a0 authenticatorData:(id)a1 signature:(id)a2 userHandle:(id)a3 rawClientDataJSON:(id)a4 credentialID:(id)a5;

@end
