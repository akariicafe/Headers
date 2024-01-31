@class NSString, NSMutableDictionary, NSMapTable;
@protocol ASPasskeyAutoFillManagerDelegate;

@interface ASPublicKeyCredentialManager : NSObject <_WKWebAuthenticationPanelDelegate, ASPublicKeyCredentialManagerInterface> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _operationsLock;
    NSMutableDictionary *_uuidToOperation;
    NSMapTable *_panelToWeakOperation;
    NSMapTable *_applicationIdentifierToWeakOperation;
    NSMapTable *_webFrameIdentifierToWeakOperationForBrowser;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<ASPasskeyAutoFillManagerDelegate> passkeyAutoFillManagerDelegate;

- (void)panel:(id)a0 requestPINWithRemainingRetries:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)init;
- (void)panel:(id)a0 updateWebAuthenticationPanel:(long long)a1;
- (void)panel:(id)a0 dismissWebAuthenticationPanelWithResult:(long long)a1;
- (void)getPasskeyAssertionRequestParametersForApplicationIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)getPasskeyAssertionRequestParametersForWebFrameIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearAllCredentials;
- (void)getExternalLoginChoiceForWebFrameIdentifier:(id)a0 relyingPartyIdentifier:(id)a1 credentialID:(id)a2 completionHandler:(id /* block */)a3;
- (void)panel:(id)a0 selectAssertionResponse:(id)a1 source:(long long)a2 completionHandler:(id /* block */)a3;
- (void)panel:(id)a0 requestLAContextForUserVerificationWithCompletionHandler:(id /* block */)a1;
- (id)allPasskeysDataForRelyingParty:(id)a0;
- (id)browserPasskeysForRelyingParty:(id)a0;
- (id)_allowedCredentialsForAssertionOptions:(id)a0;
- (id)_asToWKCredentialAssertionOptions:(id)a0;
- (id)_asToWKCredentialCreationOptions:(id)a0 forCredentialKind:(unsigned long long)a1;
- (void)_completeAssertionWithExternalPasskeyForOperation:(id)a0 usingCredential:(id)a1;
- (id)_createCredentialOfKind:(unsigned long long)a0 withOptions:(id)a1 authenticatedLAContext:(id)a2 delegate:(id)a3 webFrameIdentifier:(id)a4 parentActivity:(id)a5;
- (void)_finishAssertionForOperationWithUUID:(id)a0 identifier:(id)a1 authenticatedContext:(id)a2 savedAccountContext:(id)a3;
- (void)_getExternalLoginChoiceForOperation:(id)a0 relyingPartyIdentifier:(id)a1 credentialID:(id)a2 completionHandler:(id /* block */)a3;
- (void)_getPasskeyAssertionRequestParametersForOperation:(id)a0 completionHandler:(id /* block */)a1;
- (id)_newOperationWithRelyingPartyIdentifier:(id)a0 delegate:(id)a1 sourceApplicationIdentifier:(id)a2 webFrameIdentifier:(id)a3 shouldRequireUserVerification:(BOOL)a4 parentActivity:(id)a5;
- (id)_newPanelForOperation:(id)a0;
- (id)_operationForApplicationIdentifierIfExists:(id)a0;
- (id)_operationForPanel:(id)a0;
- (id)_operationForPanelIfExists:(id)a0;
- (id)_operationForUUID:(id)a0;
- (id)_operationForUUIDIfExists:(id)a0;
- (id)_operationForWebFrameIdentifier:(id)a0;
- (void)_queryExternalLoginChoicesForOperation:(id)a0 completionHandler:(id /* block */)a1;
- (void)_tearDownOperationWithUUID:(id)a0;
- (void)_updateLastUsedDateForPasskeySavedAccountWithCredential:(id)a0 operation:(id)a1;
- (void)assertUsingAutoFillPasskeyWithIdentifier:(id)a0 authenticatedContext:(id)a1 savedAccountContext:(id)a2 forOperationUUID:(id)a3;
- (void)assertUsingPlatformCredentialForLoginChoice:(id)a0 authenticatedContext:(id)a1;
- (void)assertUsingSecurityKeyCredentialForLoginChoice:(id)a0;
- (id)autoFillOperationUUIDForApplicationIdentifier:(id)a0;
- (id)autoFillOperationUUIDForWebFrameIdentifier:(id)a0;
- (id)autoFillPasskeysForOperationUUID:(id)a0;
- (id)beginAssertionsWithOptions:(id)a0 forProcessWithApplicationIdentifier:(id)a1 delegate:(id)a2 requestStyle:(long long)a3 webFrameIdentifier:(id)a4 parentActivity:(id)a5;
- (id)beginCreatingNewSecurityKeyCredentialIfAvailableWithOptions:(id)a0 delegate:(id)a1 webFrameIdentifier:(id)a2 parentActivity:(id)a3;
- (void)cancelOperationIfNecessaryWithUUID:(id)a0 overrideError:(id)a1;
- (void)completeAssertionWithExternalPasskeyForApplicationIdentifier:(id)a0 usingCredential:(id)a1;
- (void)completeAssertionWithExternalPasskeyForWebFrameIdentifier:(id)a0 usingCredential:(id)a1;
- (void)computeClientDataIfNeededForAssertionOptions:(id)a0;
- (void)computeClientDataIfNeededForCreationOptions:(id)a0;
- (id)createNewPlatformCredentialWithOptions:(id)a0 authenticatedContext:(id)a1 delegate:(id)a2 webFrameIdentifier:(id)a3 parentActivity:(id)a4;
- (BOOL)deleteAllPasskeysForRelyingParty:(id)a0 error:(id *)a1;
- (BOOL)deletePasskeyForRelyingParty:(id)a0 withCredentialID:(id)a1 error:(id *)a2;
- (id)encodeGetAssertionCommandWithOptions:(id)a0 authenticatorUserVerificationAvailability:(unsigned long long)a1 authenticatorSupportedExtensions:(id)a2;
- (id)encodeMakeCredentialCommandWithOptions:(id)a0 authenticatorUserVerificationAvailability:(unsigned long long)a1 authenticatorSupportedExtensions:(id)a2;
- (void)getExternalLoginChoiceForApplicationIdentifier:(id)a0 relyingPartyIdentifier:(id)a1 credentialID:(id)a2 completionHandler:(id /* block */)a3;
- (id)internalErrorToWKErrorIfApplicable:(id)a0;
- (void)presentCABLESheetForOperationUUID:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
