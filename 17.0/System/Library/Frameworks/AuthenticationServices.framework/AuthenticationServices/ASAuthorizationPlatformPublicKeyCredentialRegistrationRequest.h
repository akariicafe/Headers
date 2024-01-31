@class NSArray, ASAuthorizationPublicKeyCredentialLargeBlobRegistrationInput, ASCPublicKeyCredentialCreationOptions, NSString, NSData, ASPublicKeyCredentialClientData;

@interface ASAuthorizationPlatformPublicKeyCredentialRegistrationRequest : ASAuthorizationRequest <ASAuthorizationWebBrowserPlatformPublicKeyCredentialRegistrationRequest, ASAuthorizationPublicKeyCredentialRegistrationRequest> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalLock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ASCPublicKeyCredentialCreationOptions *coreCredentialCreationOptions;
@property (retain, nonatomic) ASAuthorizationPublicKeyCredentialLargeBlobRegistrationInput *largeBlob;
@property (readonly, nonatomic) ASPublicKeyCredentialClientData *clientData;
@property (copy, nonatomic) NSArray *excludedCredentials;
@property (nonatomic) BOOL shouldShowHybridTransport;
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

- (void)encodeWithCoder:(id)a0;
- (void)setClientData:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)_hasAtLeastOneExtension;
- (id)_initWithProvider:(id)a0 relyingPartyIdentifier:(id)a1 challenge:(id)a2 name:(id)a3 userID:(id)a4 clientData:(id)a5;
- (id)encodeExtensionsAsCBORWithError:(id *)a0;
- (BOOL)supportsStyle:(long long)a0;

@end
