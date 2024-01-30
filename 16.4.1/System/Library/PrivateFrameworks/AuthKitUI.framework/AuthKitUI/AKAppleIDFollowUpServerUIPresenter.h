@class AKAppleIDAuthenticationController, AKAppleIDServerUIEventHandlerImp, FLFollowUpItem, AKAppleIDServerUIContextController, NSURL, AKExtensionlessFollowUpHelperContext, AKAppleIDAuthenticationInAppExtensionContext;

@interface AKAppleIDFollowUpServerUIPresenter : NSObject <AKExtensionlessFollowUpServiceProvider, AKFollowupExtensionlessServerUIProvider> {
    AKAppleIDServerUIContextController *_serverUIContextController;
    AKAppleIDAuthenticationController *_authController;
    AKAppleIDServerUIEventHandlerImp *_eventHandler;
    id /* block */ _presentingClientCompletion;
    id /* block */ _serverUICompletion;
    NSURL *_initialURL;
    FLFollowUpItem *_item;
}

@property (copy, nonatomic) AKExtensionlessFollowUpHelperContext *followupHelperContext;
@property (copy, nonatomic) AKAppleIDAuthenticationInAppExtensionContext *authContext;

- (id)init;
- (void).cxx_destruct;
- (id)_fetchCurrentFollowUpItem;
- (void)_performAuthKitActionWithResponse:(id)a0 additionalData:(id)a1 error:(id)a2;
- (void)_performClientCompletionWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_prepareServerUIContext;
- (void)_presentServerUIWithConfiguration:(id)a0;
- (BOOL)_shouldSignWithIDMSAppleIDHeader;
- (void)_signRequestAndPrepareServerConfig:(id)a0;
- (void)_signWithIDMSAppleIDHeaderForRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)acknowledgeActionTakenOnFollowUpWithIdentifier:(id)a0 withAdditionalData:(id)a1 completion:(id /* block */)a2;
- (void)handleFinalResponse:(id)a0 additionalData:(id)a1 error:(id)a2;
- (void)presentServerUIWithContext:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)shouldAcknowledgeUserAction;
- (void)signAdditionalHeadersWithRequest:(id)a0;

@end
