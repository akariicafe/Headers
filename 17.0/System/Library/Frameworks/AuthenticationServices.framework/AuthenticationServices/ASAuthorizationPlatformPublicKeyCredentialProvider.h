@class NSString;

@interface ASAuthorizationPlatformPublicKeyCredentialProvider : NSObject <ASAuthorizationWebBrowserPlatformPublicKeyCredentialProvider, ASAuthorizationProvider>

@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRelyingPartyIdentifier:(id)a0;
- (id)createCredentialAssertionRequestWithChallenge:(id)a0;
- (id)createCredentialRegistrationRequestWithChallenge:(id)a0 name:(id)a1 userID:(id)a2;
- (id)createCredentialAssertionRequestWithClientData:(id)a0;
- (id)createCredentialRegistrationRequestWithClientData:(id)a0 name:(id)a1 userID:(id)a2;

@end
