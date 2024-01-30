@class UMUserSwitchBlockingTask;

@interface LKLogoutSupport : NSObject

@property (retain, nonatomic) UMUserSwitchBlockingTask *syncTask;

- (void)logoutToLoginSessionWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isCurrentUserAnonymous;
- (void)logoutToLoginWindowWithCompletionHandler:(id /* block */)a0;
- (void)logoutToLoginUserWithCompletionHandler:(id /* block */)a0;
- (void)_syncPreferencesIfNeeded;
- (BOOL)_canLogoutToLoginSession;
- (id)logoutWarningMessage;

@end
