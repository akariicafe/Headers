@class NSArray, NSData, NSString;

@interface ASAuthorizationPlatformPublicKeyCredentialAssertionRequest : ASAuthorizationRequest <ASAuthorizationPublicKeyCredentialAssertionRequest>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *allowedCredentials;
@property (copy, nonatomic) NSData *challenge;
@property (copy, nonatomic) NSString *relyingPartyIdentifier;
@property (retain, nonatomic) NSString *userVerificationPreference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void).cxx_destruct;
- (id)_initWithProvider:(id)a0 relyingPartyIdentifier:(id)a1 challenge:(id)a2;

@end
