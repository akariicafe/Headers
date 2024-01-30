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

- (void)clearAllCredentials;
- (void)panel:(id)a0 selectAssertionResponse:(id)a1 source:(long long)a2 completionHandler:(id /* block */)a3;
- (void)panel:(id)a0 dismissWebAuthenticationPanelWithResult:(long long)a1;
- (id)init;
- (void)panel:(id)a0 updateWebAuthenticationPanel:(long long)a1;
- (void)panel:(id)a0 requestPINWithRemainingRetries:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)panel:(id)a0 requestLAContextForUserVerificationWithCompletionHandler:(id /* block */)a1;
- (id)browserPasskeysForRelyingParty:(id)a0;
- (id)_allowedCredentialsForAssertionOptions:(id)a0;
- (id)_asToWKCredentialAssertionOptions:(id)a0;
- (id)_asToWKCredentialCreationOptions:(id)a0 forCredentialKind:(unsigned long long)a1;
- (id)_createCredentialOfKind:(unsigned long long)a0 withOptions:(id)a1 authenticatedLAContext:(id)a2 delegate:(id)a3 webFrameIdentifier:(id)a4 parentActivity:(id)a5;
- (void)_finishAssertionForOperationWithUUID:(id)a0 identifier:(id)a1 authenticatedContext:(id)a2;
- (id)_newOperationWithRelyingPartyIdentifier:(id)a0 delegate:(id)a1 sourceApplicationIdentifier:(id)a2 webFrameIdentifier:(id)a3 shouldRequireUserVerification:(BOOL)a4 parentActivity:(id)a5;
- (id)_newPanelForOperation:(id)a0;
- (id)_operationForApplicationIdentifierIfExists:(id)a0;
- (id)_operationForPanel:(id)a0;
- (id)_operationForPanelIfExists:(id)a0;
- (id)_operationForUUID:(id)a0;
- (id)_operationForUUIDIfExists:(id)a0;
- (id)_operationForWebFrameIdentifier:(id)a0;
- (void)_tearDownOperationWithUUID:(id)a0;
- (void)assertUsingAutoFillPasskeyWithIdentifier:(id)a0 authenticatedContext:(id)a1 forOperationUUID:(id)a2;
- (void)assertUsingPlatformCredentialForLoginChoice:(id)a0 authenticatedContext:(id)a1;
- (void)assertUsingSecurityKeyCredentialForLoginChoice:(id)a0;
- (id)autoFillOperationUUIDForApplicationIdentifier:(id)a0;
- (id)autoFillOperationUUIDForWebFrameIdentifier:(id)a0;
- (id)autoFillPasskeysForOperationUUID:(id)a0;
- (id)beginAssertionsWithOptions:(id)a0 forProcessWithApplicationIdentifier:(id)a1 delegate:(id)a2 requestStyle:(long long)a3 webFrameIdentifier:(id)a4 parentActivity:(id)a5;
- (id)beginCreatingNewSecurityKeyCredentialIfAvailableWithOptions:(id)a0 delegate:(id)a1 webFrameIdentifier:(id)a2 parentActivity:(id)a3;
- (void)cancelOperationIfNecessaryWithUUID:(id)a0 overrideError:(id)a1;
- (id)createNewPlatformCredentialWithOptions:(id)a0 authenticatedContext:(id)a1 delegate:(id)a2 webFrameIdentifier:(id)a3 parentActivity:(id)a4;
- (id)encodeGetAssertionCommandWithOptions:(id)a0 authenticatorUserVerificationAvailability:(unsigned long long)a1;
- (id)encodeMakeCredentialCommandWithOptions:(id)a0 authenticatorUserVerificationAvailability:(unsigned long long)a1;
- (void)presentCABLESheetForOperationUUID:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
