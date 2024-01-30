@class NSString, ACDClientAuthorizationManager, ACDClient, ACDDatabaseConnection;

@interface ACDOAuthSigner : NSObject <ACDOAuthSignerProtocol> {
    ACDClient *_client;
    ACDDatabaseConnection *_databaseConnection;
    ACDClientAuthorizationManager *_authorizationManager;
    BOOL _shouldIncludeAppIdInRequest;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (void)setClientBundleID:(id)a0 withHandler:(id /* block */)a1;
- (id)init;
- (id)initWithClient:(id)a0 databaseConnection:(id)a1;
- (void).cxx_destruct;
- (void)setShouldIncludeAppIdInRequest:(BOOL)a0;
- (void)signURLRequest:(id)a0 withAccount:(id)a1 applicationID:(id)a2 timestamp:(id)a3 handler:(id /* block */)a4;
- (void)signURLRequest:(id)a0 withAccount:(id)a1 callingPID:(id)a2 timestamp:(id)a3 handler:(id /* block */)a4;
- (BOOL)_permissionGrantedForBundleID:(id)a0 onAccountType:(id)a1;
- (id)_signedRequest:(id)a0 withAccountObject:(id)a1 applicationID:(id)a2 timestamp:(id)a3;
- (id)ckForAccountType:(id)a0;
- (id)csForAccountType:(id)a0;
- (id)signedRequest:(id)a0 withAccount:(id)a1 applicationID:(id)a2 timestamp:(id)a3;

@end
