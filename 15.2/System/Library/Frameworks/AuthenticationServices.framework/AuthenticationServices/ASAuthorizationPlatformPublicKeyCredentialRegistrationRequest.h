@class NSString, NSData, ASCPublicKeyCredentialCreationOptions;

@interface ASAuthorizationPlatformPublicKeyCredentialRegistrationRequest : ASAuthorizationRequest <ASAuthorizationPublicKeyCredentialRegistrationRequest>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ASCPublicKeyCredentialCreationOptions *coreCredentialCreationOptions;
@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier;
@property (copy, nonatomic) NSData *userID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSData *challenge;
@property (retain, nonatomic) NSString *userVerificationPreference;
@property (retain, nonatomic) NSString *attestationPreference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void).cxx_destruct;
- (id)_initWithProvider:(id)a0 relyingPartyIdentifier:(id)a1 challenge:(id)a2 name:(id)a3 userID:(id)a4;

@end
