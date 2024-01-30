@class AKAuthorizationDaemonConnection, AKAuthorizationClientImpl;
@protocol AKAuthorizationUIProvider;

@interface AKAuthorizationController : NSObject {
    AKAuthorizationClientImpl *_clientImpl;
    AKAuthorizationDaemonConnection *_daemonConnection;
}

@property (retain) id<AKAuthorizationUIProvider> uiProvider;

+ (id)appleOwnedDomains;
+ (BOOL)shouldProcessURL:(id)a0;
+ (BOOL)canPerformAuthorization;
+ (BOOL)isURLFromAppleOwnedDomain:(id)a0;
+ (id)sharedController;

- (void)cancelAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithDaemonXPCEndpoint:(id)a0;
- (BOOL)_shouldOverrideProxiedBundleIDForContext:(id)a0;
- (void)performAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (id)_appleOwnedDomains;
- (void)getPresentationContextForRequestContext:(id)a0 completion:(id /* block */)a1;
- (void)storeAuthorization:(id)a0 forProxiedRequest:(id)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (void)continueFetchingIconForRequestContext:(id)a0 completion:(id /* block */)a1;
- (void)beginAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (id)_appleIDAuthorizationURLs;
- (void)getCredentialStateForClientID:(id)a0 completion:(id /* block */)a1;
- (void)getCredentialStateForRequest:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)performAuthorizationWithContext:(id)a0 withUserProvidedInformation:(id)a1 completion:(id /* block */)a2;
- (void)fetchAppleIDAuthorizeHTMLResponseTemplateWithCompletion:(id /* block */)a0;
- (id)primaryApplicationInformationForWebServiceWithInfo:(id)a0 error:(id *)a1;
- (void)continueAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (void)revokeAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)establishConnectionWithNotificationHandlerEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)establishConnectionWithStateBroadcastHandlerEndpoint:(id)a0 completion:(id /* block */)a1;

@end
