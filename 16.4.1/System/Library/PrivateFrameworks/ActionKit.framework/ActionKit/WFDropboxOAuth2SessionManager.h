@class NSString;

@interface WFDropboxOAuth2SessionManager : WFOAuth2SessionManager <WFOAuth2ProviderSessionManager, WFOAuth2RevocableSessionManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)appAuthorizationSessionWithCompletionHandler:(id /* block */)a0;
- (void)authenticateWithLegacyAccessToken:(id)a0 accessTokenSecret:(id)a1 completionHandler:(id /* block */)a2;
- (id)authorizationSessionWithCompletionHandler:(id /* block */)a0;
- (id)initWithClientID:(id)a0 clientSecret:(id)a1;
- (id)initWithSessionConfiguration:(id)a0 clientID:(id)a1 clientSecret:(id)a2;
- (void)revokeCredential:(id)a0 completionHandler:(id /* block */)a1;

@end
