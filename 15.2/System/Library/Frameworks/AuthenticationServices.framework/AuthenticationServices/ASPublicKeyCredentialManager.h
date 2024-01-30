@class NSString, NSMutableDictionary, LAContext, _WKWebAuthenticationPanel, NSObject;
@protocol ASPublicKeyCredentialManagerDelegate, OS_dispatch_queue;

@interface ASPublicKeyCredentialManager : NSObject <_WKWebAuthenticationPanelDelegate> {
    _WKWebAuthenticationPanel *_panel;
    NSMutableDictionary *_userHandlesToAssertionResponses;
    id /* block */ _selectPlatformAssertionCallback;
    id /* block */ _selectSecurityKeyAssertionCallback;
    NSString *_currentRelyingPartyIdentifier;
    LAContext *_currentAuthenticatedContext;
    BOOL _hasRunningPublicKeyCredentialOperation;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (readonly, weak, nonatomic) id<ASPublicKeyCredentialManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)panel:(id)a0 updateWebAuthenticationPanel:(long long)a1;
- (void)clearAllCredentials;
- (void)panel:(id)a0 requestLAContextForUserVerificationWithCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)panel:(id)a0 requestPINWithRemainingRetries:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)panel:(id)a0 selectAssertionResponse:(id)a1 source:(long long)a2 completionHandler:(id /* block */)a3;
- (id)init;
- (void)panel:(id)a0 dismissWebAuthenticationPanelWithResult:(long long)a1;
- (void)_tearDownOnMainQueue;
- (void)cancelCurrentOperationIfNecessary;
- (void)_createCredentialOfKind:(unsigned long long)a0 withOptions:(id)a1;
- (void)_cancelCurrentOperationSynchronouslyOnInternalQueueIfNecessary;
- (void)beginAssertionsWithOptions:(id)a0;
- (void)createNewPlatformCredentialWithOptions:(id)a0 authenticatedContext:(id)a1;
- (void)assertUsingPlatformCredentialForLoginChoice:(id)a0 authenticatedContext:(id)a1;
- (void)beginCreatingNewSecurityKeyCredentialIfAvailableWithOptions:(id)a0;
- (void)assertUsingSecurityKeyCredentialForLoginChoice:(id)a0;
- (void)setDelegateCancellingCurrentOperation:(id)a0;

@end
