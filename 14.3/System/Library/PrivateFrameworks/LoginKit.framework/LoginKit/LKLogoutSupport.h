@interface LKLogoutSupport : NSObject

- (id)init;
- (BOOL)isCurrentUserAnonymous;
- (void)logoutToLoginSessionWithCompletionHandler:(id /* block */)a0;
- (void)logoutToLoginWindowWithCompletionHandler:(id /* block */)a0;
- (void)logoutToLoginUserWithCompletionHandler:(id /* block */)a0;
- (BOOL)_canLogoutToLoginSession;
- (id)logoutWarningMessage;

@end
