@class AKAuthorizationDaemonConnection, AKAuthorizationClientImpl;
@protocol AKAuthorizationUIProvider;

@interface AKAuthorizationController : NSObject {
    AKAuthorizationClientImpl *_clientImpl;
    AKAuthorizationDaemonConnection *_daemonConnection;
}

@property (retain) id<AKAuthorizationUIProvider> uiProvider;

+ (BOOL)canPerformAuthorization;
+ (BOOL)shouldProcessURL:(id)a0;
+ (id)appleOwnedDomains;
+ (BOOL)isURLFromAppleOwnedDomain:(id)a0;
+ (id)sharedController;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDaemonXPCEndpoint:(id)a0;
- (void)dealloc;
- (id)_appleOwnedDomains;
- (BOOL)_shouldOverrideProxiedBundleIDForContext:(id)a0;
- (id)_appleIDAuthorizationURLs;
- (void)performAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (void)revokeAuthorizationWithContext:(id)a0 completion:(id /* block */)a1;
- (id)primaryApplicationInformationForWebServiceWithInfo:(id)a0 error:(id *)a1;
- (void)performAuthorizationWithContext:(id)a0 withUserProvidedInformation:(id)a1 completion:(id /* block */)a2;
- (void)getCredentialStateForRequest:(id)a0 completion:(id /* block */)a1;
- (void)getCredentialStateForClientID:(id)a0 completion:(id /* block */)a1;
- (void)getPresentationContextForRequestContext:(id)a0 completion:(id /* block */)a1;
- (void)fetchAppleIDAuthorizeHTMLResponseTemplateWithCompletion:(id /* block */)a0;
- (void)continueFetchingIconForRequestContext:(id)a0 completion:(id /* block */)a1;
- (void)establishConnectionWithNotificationHandlerEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)establishConnectionWithStateBroadcastHandlerEndpoint:(id)a0 completion:(id /* block */)a1;

@end
