@class AKAuthorizationDaemonConnection, AKAuthorizationClientImpl;
@protocol AKAuthorizationUIProvider;

@interface AKAuthorizationController : NSObject {
    AKAuthorizationClientImpl *_clientImpl;
    AKAuthorizationDaemonConnection *_daemonConnection;
}

@property (retain) id<AKAuthorizationUIProvider> uiProvider;

+ (id)appleOwnedDomains;
+ (BOOL)shouldProcessURL:(id)a0;
+ (id)sharedController;
+ (BOOL)isURLFromAppleOwnedDomain:(id)a0;
+ (BOOL)canPerformAuthorization;

- (void)performAuthorizationWithContext:(id)a0 withUserProvidedInformation:(id)a1 completion:(id /* block */)a2;
- (BOOL)_shouldOverrideProxiedBundleIDForContext:(id)a0;
- (void)establishConnectionWithNotificationHandlerEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)establishConnectionWithStateBroadcastHandlerEndpoint:(id)a0 completion:(id /* block */)a1;
- (id)initWithDaemonXPCEndpoint:(id)a0;
- (id)_appleOwnedDomains;
- (void)revokeAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (id)_appleIDAuthorizationURLs;
- (void)getCredentialStateForClientID:(id)a0 completion:(id /* block */)a1;
- (void)getPresentationContextForRequestContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)performAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (void)fetchAppleIDAuthorizeHTMLResponseTemplateWithCompletion:(id /* block */)a0;
- (void)storeAuthorization:(id)a0 forProxiedRequest:(id)a1 completion:(id /* block */)a2;
- (void)continueFetchingIconForRequestContext:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)getCredentialStateForRequest:(id)a0 completion:(id /* block */)a1;
- (id)primaryApplicationInformationForWebServiceWithInfo:(id)a0 error:(id *)a1;

@end
