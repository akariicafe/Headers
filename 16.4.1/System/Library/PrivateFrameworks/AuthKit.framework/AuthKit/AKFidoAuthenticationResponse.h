@class NSString;

@interface AKFidoAuthenticationResponse : NSObject <AKFidoResponse, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *authenticatorData;
@property (readonly, nonatomic) NSString *signature;
@property (readonly, nonatomic) NSString *clientData;
@property (readonly, nonatomic) NSString *credentialID;
@property (readonly, nonatomic) NSString *userIdentifier;
@property (readonly, nonatomic) NSString *challenge;
@property (readonly, nonatomic) NSString *relyingPartyIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithAuthenticatorData:(id)a0 challengeString:(id)a1 relyingPartyIdentifier:(id)a2 signature:(id)a3 clientData:(id)a4 credentialID:(id)a5 userIdentifier:(id)a6;
- (id)initWithAuthenticatorDataString:(id)a0 challengeString:(id)a1 relyingPartyIdentifier:(id)a2 signature:(id)a3 clientDataString:(id)a4 credentialID:(id)a5 userIdentifier:(id)a6;

@end
