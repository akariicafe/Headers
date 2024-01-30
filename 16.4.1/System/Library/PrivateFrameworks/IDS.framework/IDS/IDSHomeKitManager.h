@class NSString, _IDSGenericCompletionHandler;

@interface IDSHomeKitManager : NSObject <IDSDaemonListenerProtocol> {
    _IDSGenericCompletionHandler *_getServiceUserIDsCompletion;
    _IDSGenericCompletionHandler *_getAdminAccessTokensCompletion;
    _IDSGenericCompletionHandler *_getConsentTokensCompletion;
    _IDSGenericCompletionHandler *_getUserAccessTokensCompletion;
    _IDSGenericCompletionHandler *_refreshUserAccessTokensCompletion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)adminAccessTokens:(id)a0 error:(id)a1;
- (void)consentTokens:(id)a0 error:(id)a1;
- (void)getAdminAccessTokensWithWithServiceUserID:(id)a0 accessoryID:(id)a1 pairingToken:(id)a2 completionBlock:(id /* block */)a3 queue:(id)a4;
- (void)getConsentTokensWithServiceUserID:(id)a0 accessoryIDs:(id)a1 adminID:(id)a2 completionBlock:(id /* block */)a3 queue:(id)a4;
- (void)getServiceUserIDsWithCompletionBlock:(id /* block */)a0 queue:(id)a1;
- (void)getUserAccessTokensWithServiceUserID:(id)a0 userID:(id)a1 userHandle:(id)a2 accessoryRequests:(id)a3 completionBlock:(id /* block */)a4 queue:(id)a5;
- (void)refreshUserAccessTokens:(id)a0 error:(id)a1;
- (void)refreshUserAccessTokensWithServiceUserID:(id)a0 userID:(id)a1 accessoryRequests:(id)a2 completionBlock:(id /* block */)a3 queue:(id)a4;
- (void)serviceUserIDs:(id)a0 error:(id)a1;
- (void)userAccessTokens:(id)a0 error:(id)a1;

@end
