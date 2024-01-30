@class NSArray, LAContext, NSString, NSData, ASCPublicKeyCredentialAssertionOptions;

@interface ASAuthorizationPlatformPublicKeyCredentialAssertionRequest : ASAuthorizationRequest <ASAuthorizationWebBrowserExternallyAuthenticatableRequest, ASAuthorizationPublicKeyCredentialAssertionRequest> {
    NSArray *_allowedCredentials;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalLock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ASCPublicKeyCredentialAssertionOptions *coreCredentialAssertionOptions;
@property (copy, nonatomic) NSArray *allowedCredentials;
@property (retain, nonatomic) LAContext *authenticatedContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSData *challenge;
@property (copy, nonatomic) NSString *relyingPartyIdentifier;
@property (retain, nonatomic) NSString *userVerificationPreference;


- (void).cxx_destruct;
- (id)_initWithProvider:(id)a0 relyingPartyIdentifier:(id)a1 challenge:(id)a2;
- (BOOL)supportsStyle:(long long)a0;

@end
